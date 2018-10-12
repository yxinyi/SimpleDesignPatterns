#pragma once
#include "Factory.h"
#include <iostream>
//所需要的结果,具体产品类
Factory::~Factory() {};
ConreteFactory::ConreteFactory(){
    std::cout << "ConreteFactory" << std::endl;
}
ConreteFactory::~ConreteFactory(){}
Product* ConreteFactory::createProduct(){
    return new ConreteProduct;
}

