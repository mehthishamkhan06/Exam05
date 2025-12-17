#include "SpellBook.hpp"

SpellBook::SpellBook(){

}
SpellBook::~SpellBook(){
    std::map<std::string, ASpell *>::iterator it_begin = _arr.begin();
    std::map<std::string, ASpell *>::iterator it_end = _arr.end();
    if (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    _arr.clear();
}

void SpellBook::learnSpell(ASpell *spell){
    if (spell)
        _arr.insert(std::pair<std::string, ASpell *>(spell->getName(), spell->clone()));
}
void SpellBook::forgetSpell(std::string const &name){
    std::map<std::string, ASpell *>::iterator it = _arr.find(name);
    if (it != _arr.end())
        delete it->second;
    _arr.erase(name);
}
ASpell *SpellBook::createSpell(std::string const &name){
    std::map<std::string, ASpell *>::iterator it = _arr.find(name);
    if (it != _arr.end())
        return _arr[name];
    return NULL;
}