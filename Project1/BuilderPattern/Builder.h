#pragma once
#include <string>

class Part {
public:
    PartA(const std::string& str_):m_str(str_){};
    std::string m_str;
};


class Builder {
public:
    virtual void buildPartA(const std::string& str_) = 0;;
    virtual void buildPartB(const std::string& str_) = 0;;
    virtual void buildPartC(const std::string& str_) = 0;;
    Product* getProduct() = 0;
protected:
    Product* m_product;
};
class ConcreteBuilder1 : public Builder {
public:
    void buildPartA(const std::string& str_){ 
        m_prduct->m_part_a = new Part(str_);
    };
    void buildPartB(const std::string& str_){ 
        m_prduct->m_part_b = new Part(str_);
    };
    void buildPartC(const std::string& str_){ 
        m_prduct->m_part_c = new Part(str_);
    };
    Product* getProduct(){return m_product;};
};


class Director {
public:
    Director():m_builder(new ConcreteBuilder1){}
    void construct(){
        m_builder->buildPartA("A");
        m_builder->buildPartB("B");
        m_builder->buildPartC("C");
    }
private:
    Builder* m_builder;
};

int main(){
    
    return 0;
}