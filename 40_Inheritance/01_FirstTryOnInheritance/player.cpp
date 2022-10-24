#include "player.h"
#include "person.h"

Player::Player(std::string_view game_param)
    : m_game(game_param)
{
}
std::ostream& operator<<(std::ostream& out, const Player& player){
    out << "Player : [game:" << player.m_game << " name: " << player.get_first_name() << " " << player.get_last_name() <<"]";
    return out;
}
Player::~Player()
{
}