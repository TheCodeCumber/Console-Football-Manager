#ifndef PLAYER_DICTIONARY
#define PLAYER_DICTIONARY

#include "Player.h"

#include <memory>


/*--------------------------------------------------------------------------------------------------------------------------|
|                                                                                                                           |
|   placeholder objects are stored in a dictionary, their key handling inside the dictionary is solved mathematically   |
|   and doesn't transfer directly to the keys used inside the methods, thus there is no way to                                                           |
|                                                                                                                           |
|--------------------------------------------------------------------------------------------------------------------------*/

class placeholder
{

    protected:

        std::shared_ptr<Player> m_Player;

    public:

        placeholder();
        placeholder(std::shared_ptr<Player> value);

        bool hasPlayer; // tells dict, whether placeholder is populated or not

        std::shared_ptr<Player> getValue() const; // returns stored Player
};

class Dictionary{

    private:

        placeholder* m_buffer;
        short m_size; // size of buffer = maximal number of Players 
        Player m_player_subst;

    public:

        Dictionary(short size);

        void insert(short key, std::shared_ptr<Player> value); // inserts an Player at a certain key

        void remove(short key); // sets the placeholder Player equal to 0

        std::shared_ptr<Player> lookup(short key) noexcept; // returns the Player stored at a certain key

    private:
    
        bool is_valid(short key); // tests if key is inside the appropriate boundaries

};

#endif
