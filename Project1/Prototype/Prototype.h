#pragma once
#include <string>
#include <Windows.h>


//产品基类
class Product {
    Product() {
        Sleep(1000);
    };
    ~Product(){}
};

class Prototype {
public:
    Prototype():m_product(new Product){}
    Product* clone(){return m_product;}
protected:
    Product* m_product;
};

int main(){
    Prototype _prototype;
    Product* _product = _prototype->clone();
    return 0;
}