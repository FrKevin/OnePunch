#ifndef PLAYER_HPP
#define PLAYER_HPP

#include "Entity.hpp"


/**
 * Basic entity
*/
class Player : public Entity
{
    public:
        Player(string nameOfPlayer);
        Player(string nameOfPlayer, double lifeOfPlayer);
        virtual ~Player();
        long getScore() const;
        void setScore(long score);

    protected:
        /* */

    private:
        long score;

};

#endif // PLAYER_HPP

