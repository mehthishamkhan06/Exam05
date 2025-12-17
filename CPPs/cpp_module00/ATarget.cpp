#include "ATarget.hpp"

        ATarget::ATarget(){
        
        }
        ATarget::~ATarget(){

        }
        ATarget::ATarget(ATarget const &other){
            *this = other;
        }

        ATarget &ATarget::operator=(ATarget const &other){
            this->_type = other._type;
            return (*this);
        }
        ATarget::ATarget(std::string const &type): _type(type){
        
        }
        std::string const &ATarget::getType() const{
            return (this->_type);
        }

        void ATarget::getHitBySpell(ASpell const &aspell_ref) const{
            std::cout << this->_type << " has been " << aspell_ref.getEffects() << "!\n";
        }