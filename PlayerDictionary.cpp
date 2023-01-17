
#include <iostream>
#include "PlayerDictionary.h"


        placeholder::placeholder(){};
        placeholder::placeholder(Object* value): m_value(value){}

        short placeholder::getKey()const {
            return m_key;
        }

        Object* placeholder::getValue() const {
            return m_value;
        }


        Dictionary::Dictionary(short size){

            m_size = size;
            m_buffer = new placeholder[size];

        }


        void Dictionary::insert(short key, placeholder value){
            
            m_buffer[key] = value;

        }

        void Dictionary::remove(short key){
            
            m_buffer[key] = 0;

        }

        placeholder Dictionary::lookup(short key){

            return m_buffer[key];

        }

        void Dictionary::printDictionary(){
            for(int i = 0; i < m_size; i++){
                std::cout << i << '|' << m_buffer[i].getValue() << '\n';
            }
        }
