#include "ASpell.hpp"

ASpell::ASpell() : _name(), _effects()
{}

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects)
{}

ASpell::ASpell(const ASpell& other)
{
	_name = other._name;
	_effects = other._effects;
}

ASpell&
ASpell::operator=(const ASpell& other)
{
	_name = other._name;
	_effects = other._effects;
	return *this;
}

ASpell::~ASpell()
{}

std::string
ASpell::getName(void) const
{
	return _name;
}

std::string
ASpell::getEffects(void) const
{
	return _effects;
}

void
ASpell::launch(const ATarget& other) const
{
	other.getHitBySpell(*this);
}
