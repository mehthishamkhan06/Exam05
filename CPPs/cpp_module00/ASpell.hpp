#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>

class ATarget;

class ASpell{
    protected:
        std::string _name;
        std::string _effects;
    public:
        ASpell();
        virtual ~ASpell();
        ASpell(ASpell const &other);
        ASpell &operator=(ASpell const &other);
        ASpell(std::string const &name, std::string const &effects);
        std::string const &getName() const;
        std::string const &getEffects() const;

        void launch(ATarget const &atarget_ref) const;
        virtual ASpell *clone() const = 0;

};