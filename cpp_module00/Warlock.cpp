#include "Warlock.hpp"

Warlock::Warlock(){

}

Warlock::Warlock(Warlock const &other)
{
    *this = other;
}
Warlock::Warlock(std::string const &name, std::string const &title): _title(title), _name(name)
{

}

Warlock &Warlock::operator=(Warlock const &copy)
{
    this->_name = copy._name;
    this->_title = copy._title;
    return *this; 
}

Warlock::~Warlock(){

}

std::string const &Warlock::get_name() const{
    return (this->_name);

}
std::string const &Warlock::get_title() const{
    return (this->_title);
}

void Warlock::set_title(std::string const &title){
    this->_title = title;
}
void introduce() const{
    std::cout << this->_name << ":" << "I am " << this->_name << ", " << this->_title << "!" << std::endl;
}