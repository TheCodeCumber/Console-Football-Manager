
#include "Team.h"

Team::Team() : m_playerdict(11){}

void Team::addPlayer(short position, std::shared_ptr<Player> obj){
    m_playerdict.insert(position, obj);
}

void Team::removePlayer(short position){
    m_playerdict.remove(position);
}

std::shared_ptr<Player> Team::getPlayer(short position){
    return m_playerdict.lookup(position);
}
