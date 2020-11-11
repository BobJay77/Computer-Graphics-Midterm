#include "Entity.h"

void Entity::setPosition(glm::vec3 pos)
{
	m_position = pos;
}

void Entity::setSize(glm::vec3 size)
{
	m_size = size;
}

void Entity::setRotation(glm::vec3 rotation)
{
	m_rotation = rotation;
}

void Entity::setvelocity(glm::vec3 velocity)
{
	m_velocity = velocity;
}

void Entity::setID(int id)
{
	m_ID = id;
}

void Entity::setDestroyed(bool isdestroyed)
{
	m_isDestroyed = isdestroyed;
}

glm::vec3 Entity::getPosition()
{
	return m_position;
}

glm::vec3 Entity::getSize()
{
	return m_size;
}

glm::vec3 Entity::getRotation()
{
	return m_rotation;
}

glm::vec3 Entity::getVelocity()
{
	return m_velocity;
}

int Entity::getID()
{
	return m_ID;
}

bool Entity::getIsDestroyed()
{
	return m_isDestroyed;
}
