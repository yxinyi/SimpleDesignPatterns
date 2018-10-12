#pragma once
#include "Product.h"
//��������
class Factory {
    public:
        virtual ~Factory()=0;
        virtual Product* createProduct() = 0;
    protected:
        Factory(){};
};

//��������Ҫ�����Ľ��,���幤����
class ConreteFactory : public Factory {
    public:
        ConreteFactory();
        ~ConreteFactory();
        Product* createProduct();
};

