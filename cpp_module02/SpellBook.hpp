#pragma once

#include "ASpell.hpp"
#include <map>
class SpellBook{
    private:
        SpellBook(SpellBook const &copy);
        SpellBook &operator=(SpellBook const &copy);
        std::map<std::string, ASpell *> _arr;
    public:
        SpellBook();
        ~SpellBook();
        void learnSpell(ASpell *spell);
        void forgetSpell(std::string const &name);
        ASpell *createSpell(std::string const &name);
}