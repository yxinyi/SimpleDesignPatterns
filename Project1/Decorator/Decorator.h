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
    virtual void operation() = 0;
    void addedBehavior(Decorator * decorator_){
        m_decorator = decorator_;
    }
protected:
    Decorator * m_decorator;
};
class ConcreteDecoratorA :public Decorator {
public:
    ConcreteDecoratorA() {};
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
    ConcreteDecoratorB() {};
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
    Decorator* _dec_a = new ConcreteDecoratorA();
    _com->m_decorator = _dec_a;
    Decorator* _dec_b = new ConcreteDecoratorB();
    _dec_a->addedBehavior(_dec_b);

    _com->operation();
    return 0;
}