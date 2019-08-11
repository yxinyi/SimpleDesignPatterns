#pragma once
#include "Product.h"
#include <string>

//工厂
class Factory {
    public:
        Factory(){};
        ~Factory(){};
        Product* createProduct1() {
            return new ConreteProduct1;
        }
        Product* createProduct2() {
            return new ConreteProduct2;
        }
        Product* createProduct3() {
            return new ConreteProduct3;
        }
};

//工厂
class Factory {
public:
    Factory() {};
    ~Factory() {};
    Product* createProduct1(const std::string& product_key_) {
        if(product_key_ == "Product1"){
            return new ConreteProduct1;
        }
        if (product_key_ == "Product2") {
            return new ConreteProduct2;
        }
        if (product_key_ == "Product3") {
            return new ConreteProduct3;
        }
    }
};




