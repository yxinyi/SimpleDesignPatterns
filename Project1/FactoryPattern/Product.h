#pragma once
//��Ʒ����
class Product {
    public:
        virtual ~Product() = 0;
protected:
        Product(){};
};
//����Ҫ�Ľ��,�����Ʒ��
class ConreteProduct : public Product {
    public:
        ConreteProduct();
        ~ConreteProduct();
};

