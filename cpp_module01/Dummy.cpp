#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy")
{}

Dummy::Dummy(std::string type) : ATarget(type)
{}

Dummy::Dummy(const Dummy& other) : ATarget(other.getType())
{}

Dummy&
Dummy::operator=(const Dummy& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Dummy::~Dummy()
{}

ATarget*
Dummy::clone(void) const
{
	return (new Dummy(*this));
}
