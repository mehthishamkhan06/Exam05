#include "ATarget.hpp"
#include "ASpell.hpp"
ATarget::ATarget(){

}
ATarget::ATarget(std::string const &type): _type(type)
{

}
ATarget::~ATarget(){

}
ATarget::ATarget(ATarget const &copy){
    *this = copy;
}
ATarget &ATarget::operator=(ATarget const &copy){
    this->_type = copy._type; 
    return (*this);
}

std::string const &ATarget::getType() const{
    return (this->_type);
}
void ATarget::getHitBySpell(ASpell const &aspell_ref) const {
    std::cout << this->_type << " has been " << aspell_ref.getEffects() << "!\n";
}