#include "ATarget.hpp"

ATarget::ATarget() : _type()
{}

ATarget::ATarget(std::string type) : _type(type)
{}

ATarget::ATarget(const ATarget& other)
{
	_type = other._type;
}

ATarget&
ATarget::operator=(const ATarget& other)
{
	_type = other._type;
	return *this;
}

ATarget::~ATarget()
{}

const std::string&
ATarget::getType(void) const
{
	return _type;
}

void
ATarget::getHitBySpell(const ASpell& other) const
{
	std::cout << _type << " has been " << other.getEffects() << "!" << std::endl;
}
