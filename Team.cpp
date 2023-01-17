
#include "Team.h"

Team::Team() : m_playerdict(11){}

void Team::addPlayer(short position, Object* obj){
    m_playerdict.insert(position, obj);
}

