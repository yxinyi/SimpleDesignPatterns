#include "FactoryPattern\Factory.h"
#include "FactoryPattern\Product.h"

int main(){
    Factory* factory = new ConreteFactory;
    Product* p = factory->createProduct();
    
    for(;;);
    return 0;
}