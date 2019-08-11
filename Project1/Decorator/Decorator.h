#pragma once

class Component {
public:
    Component() {};
    ~Component() {};
    virtual void operation() = 0;
    Decorator * m_decorator;
};

class ConcreteComponent :public Component {
public:
    ConcreteComponent() {};
    ~ConcreteComponent() {};
    void operation(){};
};

class Decorator{
public:
    Decorator(Component* com_) {com_->m_decorator = this;};
    Decorator(Decorator* dec_) {dec_->m_decorator = this; };
    virtual ~Decorator() {};
    virtual void operation() = 0;
protected:
    Decorator * m_decorator;
};
class ConcreteDecoratorA :public Decorator {
public:
    ConcreteDecoratorA(Component* com_):Decorator(com_) {};
    ConcreteDecoratorA(Decorator* dec_):Decorator(dec_) {};
    ~ConcreteDecoratorA() {};
    void operation() {
        /*dosth*/
        if(m_decorator){
            m_decorator->operation();
        }
    };
};
class ConcreteDecoratorB :public Decorator {
public:
    ConcreteDecoratorB(Component* com_) :Decorator(com_) {};
    ConcreteDecoratorB(Decorator* dec_) :Decorator(dec_) {};
    ~ConcreteDecoratorB() {};
    void operation() {
        /*dosth*/
        if (m_decorator) {
            m_decorator->operation();
        }
    };
};


int main(){
    Component* _com = new ConcreteComponent();
    Decorator* _dec_a = new ConcreteDecoratorA(_com);
    Decorator* _dec_b = new ConcreteDecoratorB(_dec_a);
    _com->operation();
    return 0;
}

