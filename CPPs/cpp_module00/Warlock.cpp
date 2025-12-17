#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): _name(name), _title(title){
    std::cout << this->_name << ": This looks like another boring day.\n" ;   
}
Warlock::~Warlock(){
    std::cout << this->_name << ": My job here is done!\n";
    std::map<std::string, ASpell *>::iterator it_begin = _arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = _arr.end();
    if (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    _arr.clear();
}
std::string const &Warlock::getName() const{
    return (this->_name);
}
std::string const &Warlock::getTitle() const{
    return (this->_title);
}
void Warlock::setTitle(std::string const &title){
    this->_title = title;
}
void Warlock::introduce() const{
    std::cout << this->_name << ": I am " << this->_name << ", " << this->_title <<"!\n"; 
}

        void Warlock::learnSpell(ASpell *spell){
            if (spell)
                _arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
        }
        void Warlock::forgetSpell(std::string name){
            std::map<std::string, ASpell *>::iterator it = _arr.find(name);
            if (it != _arr.end())
            {
                delete it->second;
            }
            _arr.erase(name);
        }
        void Warlock::launchSpell(std::string name, ATarget const &atarget_ref){
            ASpell *spell = _arr[name];
            if (spell)
                spell->launch(atarget_ref); 
        }