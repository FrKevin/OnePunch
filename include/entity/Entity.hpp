#ifndef ENTITY_HPP
#define ENTITY_HPP

#include <string>

using namespace std;

/**
 * Basic entity
*/
class Entity
{
    public:
        virtual ~Entity();
        double getLife() const;
        void setLife(double newLife);
        string getName() const;
        void setName(string newName);

    protected:
        Entity(string nameOfEntity);
        Entity(string nameOfEntity, double lifeOfEntity);

    private:
        double life;
        string name;

};

#endif // ENTITY_HPP
