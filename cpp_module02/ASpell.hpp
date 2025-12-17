#ifndef ASpell_HPP
#define ASpell_HPP

#include <string>
#include <iostream>

class ATarget;
class ASpell {
    protected:
        std::string _name;
        std::string _effects;

    public:
        ASpell();
        virtual ~ASpell();
        ASpell(std::string const &name, std::string const &effects);
        ASpell(const ASpell &copy);
        ASpell &operator=(const ASpell &copy);
        std::string const &getName() const;
        std::string const &getEffects() const;
        void launch(ATarget const &atarget_ref) const;
        virtual ASpell *clone() const = 0;
};

#endif