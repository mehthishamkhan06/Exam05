#ifndef ATARGET_HPP
#define ATARGET_HPP

#include <string>
#include <iostream>

class ASpell;

class ATarget {
    private:
        std::string _type;

    public:
        ATarget();
        ATarget(std::string const &type);
        virtual ~ATarget();
        ATarget(ATarget const &copy);
        ATarget &operator=(ATarget const &copy);

        std::string const &getType() const;

        void getHitBySpell(ASpell const &aspell_ref) const;
        virtual ATarget *clone() const = 0;
};

#endif