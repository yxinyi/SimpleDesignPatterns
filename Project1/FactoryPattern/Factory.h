#pragma once
#include "Product.h"
//工厂基类
class Factory {
    public:
        virtual ~Factory()=0;
        virtual Product* createProduct() = 0;
    protected:
        Factory(){};
};

//工厂所需要产出的结果,具体工厂类
class ConreteFactory : public Factory {
    public:
        ConreteFactory();
        ~ConreteFactory();
        Product* createProduct();
};

