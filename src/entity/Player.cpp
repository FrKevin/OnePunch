#include "entity/Player.hpp"

Player::Player(string nameOfPlayer):
    Entity(nameOfPlayer),
    score(0)
{}

Player::Player(string nameOfPlayer, double lifeOfPlayer):
    Entity(nameOfPlayer, lifeOfPlayer),
    score(0)
{}

/**
    Destructor
*/
Player::~Player(){}

long Player::getScore() const{
    return score;
}

void Player::setScore(long score){
    this->score = score;
}
