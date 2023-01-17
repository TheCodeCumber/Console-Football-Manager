#ifndef TEAM_H
#define TEAM_H

#include "Player.h"
#include "PlayerDictionary.h"


class Team{

private:

    Dictionary m_playerdict;

public:

    Team();

    void addPlayer(short position, Object* obj);
};

#endif