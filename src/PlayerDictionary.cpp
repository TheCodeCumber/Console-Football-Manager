
#include <iostream>
#include "PlayerDictionary.h"


        placeholder::placeholder() : hasPlayer(false){};

        placeholder::placeholder(std::shared_ptr<Player> value): m_Player(value){}


        std::shared_ptr<Player> placeholder::getValue() const {
            return m_Player;
        }


        Dictionary::Dictionary(short size) : m_size(size), m_player_subst("placeholder", 0){

            m_buffer = new placeholder[size];
        }

        bool Dictionary::is_valid(short key){
            if(key < m_size && key >= 0){
                return true;
            } else {
                return false;
            }
        }


        void Dictionary::insert(short key, std::shared_ptr<Player> value){
            if(is_valid(key)){
                m_buffer[key] = value;
                m_buffer[key].hasPlayer = true;
            } else {
                std::cerr << "Error: Invalid key!\n" << std::endl;
                return;
            }
        }

        void Dictionary::remove(short key){
            if(is_valid(key)){
                m_buffer[key].hasPlayer = false;
            } else {
                std::cerr << "Error: Invalid key!\n" << std::endl;
                return;
            }
        }

        std::shared_ptr<Player> Dictionary::lookup(short key) noexcept {
            if(is_valid(key) && m_buffer[key].hasPlayer){
                return m_buffer[key].getValue();
            } else {
                std::cerr << "Error: Player slot empty!\n" << std::endl;
                return nullptr;
            }
        }
