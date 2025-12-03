#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>

class Warlock{
    private:
        std::string _name;
        std::string _title;
        Warlock(Warlock const &copy);
        Warlock &operator=(Warlock const &copy);
        Warlock();

    public:
        Warlock(std::string const &name, std::string const &title);
        ~Warlock();
        std::string const &get_name() const;
        std::string const &get_title() const;

        void set_title(std::string const &title);
        void introduce() const;



}