#pragma once
#include "Factory.h"
#include <iostream>
//����Ҫ�Ľ��,�����Ʒ��
Factory::~Factory() {};
ConreteFactory::ConreteFactory(){
    std::cout << "ConreteFactory" << std::endl;
}
ConreteFactory::~ConreteFactory(){}
Product* ConreteFactory::createProduct(){
    return new ConreteProduct;
}

