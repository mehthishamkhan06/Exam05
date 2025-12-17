#pragma once

#include "ASpell.hpp"
#include <string>
#include <iostream>

class ASpell;

class ATarget{
    protected:
        std::string _type;

    public:
        ATarget();
        virtual ~ATarget();
        ATarget(ATarget const &other);
        ATarget &operator=(ATarget const &other);
        ATarget(std::string const &type);
        std::string const &getType() const;

        void getHitBySpell(ASpell const &aspell_ref) const;
        virtual ATarget *clone() const = 0;

};