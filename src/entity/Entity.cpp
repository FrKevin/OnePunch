#include "entity/Entity.hpp"

Entity::Entity(string nameOfEntity):
    name(nameOfEntity),
    life(0)
{}

Entity::Entity(string nameOfEntity, double lifeOfEntity):
    name(nameOfEntity),
    life(lifeOfEntity)
{}

/**
    Destructor
*/
Entity::~Entity() {}

double Entity::getLife() const {
    return life;
}

 void Entity::setLife(double newLife){
    this->life = newLife;
 }

string Entity::getName() const{
    return name;
}

void Entity::setName(string newName){
    this->name = name;
}
