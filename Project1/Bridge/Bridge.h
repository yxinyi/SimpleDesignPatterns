#pragma once
#include <string>
#include <Windows.h>

class AbstractionImp {
public:
    virtual void opration() = 0;
    AbstractionImp(){}
    virtual ~AbstractionImp(){}
};
class ConreteAbstractionImpA : public AbstractionImp {
public:
    ConreteAbstractionImpA() {}
    ~ConreteAbstractionImpA() {}
    void opration(){}
};
class ConreteAbstractionImpB : public AbstractionImp {
public:
    ConreteAbstractionImpB() {}
    ~ConreteAbstractionImpB() {}
    void opration() {}
};


class Abstraction {
public:
    Abstraction(){}
    ~Abstraction(){}
    virtual void opration() = 0;
};

class RefinedAbstraction:public Abstraction {
public:
    RefinedAbstraction(AbstractionImp* imp_):m_imp(imp_){}
    ~RefinedAbstraction(){}
    void opration(){}
    AbstractionImp* m_imp;
};

int main(){
    AbstractionImp* _imp_a = new ConreteAbstractionImpA();
    Abstraction* _abs_a = new RefinedAbstraction(_imp_a);
    _abs_a->opration();

    AbstractionImp* _imp_b = new ConreteAbstractionImpB();
    Abstraction* _abs_b = new RefinedAbstraction(_imp_b);
    _abs_b->opration();
    return true;
}