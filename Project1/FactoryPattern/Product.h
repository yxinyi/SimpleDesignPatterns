#pragma once
//产品基类
class Product {
public:
     ~Product() {}
    Product(){};
};
Product::~Product(){}
//所需要的结果,具体产品类
class ConreteProduct1 : public Product {
    public:
        ConreteProduct1(){};
        ~ConreteProduct1(){};
};
//所需要的结果,具体产品类
class ConreteProduct2 : public Product {
public:
    ConreteProduct2() {};
    ~ConreteProduct2() {};
};
//所需要的结果,具体产品类
class ConreteProduct3 : public Product {
public:
    ConreteProduct3() {};
    ~ConreteProduct3() {};
};


