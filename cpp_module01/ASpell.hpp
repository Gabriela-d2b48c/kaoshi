#ifndef ASPELL_HPP
#define ASPELL_HPP

#include <string>
#include <iostream>

#include "ATarget.hpp"

class ATarget;

class ASpell
{
	private:
		std::string 	_name;
		std::string 	_effects;

	public:
		ASpell();
		ASpell(std::string, std::string);
		ASpell(const ASpell&);
		ASpell& operator=(const ASpell&);
		virtual ~ASpell();

		std::string getName() const;
		std::string getEffects() const;

		void launch(const ATarget&) const;
		virtual ASpell* clone() const = 0;
};

#endif
