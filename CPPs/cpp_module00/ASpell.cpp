#include "ASpell.hpp"

        ASpell::ASpell(){
        
        }
        ASpell::~ASpell(){

        }
        ASpell::ASpell(ASpell const &other){
            *this = other;
        }

        ASpell &ASpell::operator=(ASpell const &other){
            this->_name = other._name;
            this->_effects = other._effects;
            return (*this);
        }
        ASpell::ASpell(std::string const &name, std::string const &effects): _name(name), _effects(effects){
        }
        std::string const &ASpell::getName() const{
            return (this->_name);
        }
        std::string const &ASpell::getEffects() const{
            return (this->_effects);
        }
        void ASpell::launch(ATarget const &atarget_ref) const{
            atarget_ref.getHitBySpell((*this));
        }