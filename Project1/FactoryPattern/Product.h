#pragma once
//��Ʒ����
class Product {
public:
     ~Product() {}
    Product(){};
};
Product::~Product(){}
//����Ҫ�Ľ��,�����Ʒ��
class ConreteProduct1 : public Product {
    public:
        ConreteProduct1(){};
        ~ConreteProduct1(){};
};
//����Ҫ�Ľ��,�����Ʒ��
class ConreteProduct2 : public Product {
public:
    ConreteProduct2() {};
    ~ConreteProduct2() {};
};
//����Ҫ�Ľ��,�����Ʒ��
class ConreteProduct3 : public Product {
public:
    ConreteProduct3() {};
    ~ConreteProduct3() {};
};


