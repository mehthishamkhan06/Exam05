#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){

}
TargetGenerator::~TargetGenerator(){
    std::map<std::string, ATarget *>::iterator it_begin = _arr.begin();
    std::map<std::string, ATarget *>::iterator it_end = _arr.end();
    if (it_begin != it_end)
    {
        delete it_begin->second;
        ++it_begin;
    }
    _arr.clear();
}

void TargetGenerator::learnTarget(ATarget *target){
    if (target)
        _arr.insert(std::pair<std::string, ATarget *>(target->getName(), target->clone()));
}
void TargetGenerator::forgettarget(std::string const &name){
    std::map<std::string, ATarget *>::iterator it = _arr.find(name);
    if (it != _arr.end())
        delete it->second;
    _arr.erase(name);
}
ATarget *TargetGenerator::createtarget(std::string const &name){
    std::map<std::string, ATarget *>::iterator it = _arr.find(name);
    if (it != _arr.end())
        return _arr[name];
    return NULL;
}