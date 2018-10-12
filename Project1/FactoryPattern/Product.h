#pragma once
//产品基类
class Product {
    public:
        virtual ~Product() = 0;
protected:
        Product(){};
};
//所需要的结果,具体产品类
class ConreteProduct : public Product {
    public:
        ConreteProduct();
        ~ConreteProduct();
};

