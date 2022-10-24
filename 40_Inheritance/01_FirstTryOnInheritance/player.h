#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "person.h"
#include <string_view>

// class Person; //Forward declaration

class Player : public Person{
    friend std::ostream& operator<<(std::ostream& out, const Player& player);
public:
    Player()=default;
    Player(std::string_view game_param);
    ~Player();
private:
    std::string m_game{"None"};
    //double d = {std::numeric_limits<double>::quiet_NaN()};
};

#endif //PLAYER_H