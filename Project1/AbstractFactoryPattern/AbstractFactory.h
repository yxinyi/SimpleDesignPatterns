#pragma once
#include "AbstractProduct.h"
/*
    ������ⲿ���յ�һ��֪ͨ�ͻ�����Ϣö��
    ������Ҫ��������Ϣ���д���,��������ȷ����Ϣת���Լ�Ͷ��

    AbstractFactory* _factory_1 = new NotifyMsgFactory1;
    NotifyMsgA* _msg_1_A = _factory_1->createA();
    NotifyMsgB* _msg_1_B = _factory_1->createB();

    AbstractFactory* _factory_2 = new NotifyMsgFactory2;
    NotifyMsgA* _msg_1_A = _factory_2->createA();
    NotifyMsgB* _msg_1_B = _factory_2->createB();

*/
class AbstractFactory {
    public:
        virtual ~AbstractFactory(){};
        virtual AbstractProductA* createA() = 0;
        virtual AbstractProductB* createB() = 0;
    protected:
        AbstractFactory(){};
};
class ConcreteFactory1 : public AbstractFactory {
    public:
        ConcreteFactory1(){};
        ~ConcreteFactory1(){};
        AbstractProductA* createA(){return new ProductA1;};
        AbstractProductB* createB(){return new ProductB1;};
};
class ConcreteFactory2 : public AbstractFactory {
    public:
        ConcreteFactory2(){};
        ~ConcreteFactory2(){};
        AbstractProductA* createA() { return new ProductA2; };
        AbstractProductB* createB() { return new ProductB2; };
};

int main(){
    AbstractFactory* _factory_1 = new ConcreteFactory1;
    AbstractProductA* _product_1_A = _factory_1->createA();
    AbstractProductB* _product_1_B = _factory_1->createB();

    AbstractFactory* _factory_2 = new ConcreteFactory2;
    AbstractProductA* _product_2_A = _factory_2->createA();
    AbstractProductB* _product_2_B = _factory_2->createB();
    return 0;
}

