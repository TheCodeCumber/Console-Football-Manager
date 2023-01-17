#ifndef PLAYER_DICTIONARY
#define PLAYER_DICTIONARY

#include "Object.h"

class placeholder
{

    protected:
    
        Object* m_value;
        short m_key;

    public:

        placeholder();
        placeholder(Object* value);

        short getKey() const;

        Object* getValue() const;
};

class Dictionary{

    private:

        placeholder* m_buffer;
        short m_size;

        // for secure use: add key manager (tests if key is inside the appropriate boundaries and multiplies it by two)

    public:

        Dictionary(short size);


        void insert(short key, placeholder value);

        void remove(short key);

        placeholder lookup(short key);

        void printDictionary();

};

#endif
