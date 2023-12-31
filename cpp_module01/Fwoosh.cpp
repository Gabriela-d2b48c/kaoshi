#include "Fwoosh.hpp"

Fwoosh::Fwoosh() : ASpell("Fwoosh", "fwooshed")
{}

Fwoosh::Fwoosh(std::string name, std::string effects) : ASpell(name, effects)
{}

Fwoosh::Fwoosh(const Fwoosh& other) : ASpell(other)
{}

Fwoosh&
Fwoosh::operator=(const Fwoosh& other)
{
	if (this != &other)
		*this = other;
	return *this;
}

Fwoosh::~Fwoosh()
{}

ASpell*
Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}
