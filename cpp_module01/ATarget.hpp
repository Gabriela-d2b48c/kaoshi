#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

#include "ASpell.hpp"

class ASpell;

class ATarget
{
	private:
		std::string 	_type;

	public:
		ATarget();
		ATarget(std::string);
		ATarget(const ATarget&);
		ATarget& operator=(const ATarget&);
		virtual ~ATarget();

		const std::string& getType() const;

		void getHitBySpell(const ASpell&) const;
		virtual ATarget* clone() const = 0;

};

#endif
