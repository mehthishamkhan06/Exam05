#pragma once

#include "ASpell.hpp"
#include <map>
class TargetGenerator{
    private:
        TargetGenerator(TargetGenerator const &copy);
        TargetGenerator &operator=(TargetGenerator const &copy);
        std::map<std::string, ASpell *> _arr;
    public:
        TargetGenerator();
        ~TargetGenerator();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell *createSpell(std::string const &name);
}