#pragma once
#include <vector>
#include <algorithm>
class Component {
public:
    Component() {};
    virtual ~Component() {};
    virtual void operation() = 0;
    virtual void add(const Component&){
    };
    virtual void remove(const Component&){
    };
    virtual Component* getChild(const int index){
        return nullptr;
    };
};
class Leaf : public Component {
public:
    Leaf() {}
    ~Leaf() {}
    virtual void operation() {}
}
class Composite : public Component {
public:
    Composite() {}
    ~Composite() {}
    virtual void operation(){
        std::for_each(std::begin(m_com_vec),std::end(m_com_vec),[](Component* it_com_){
            it_com_->operation();
        });
    }
    virtual void add(const Component& com_) {
        m_com_vec.push_back(&com_);
    };
    virtual void remove(const Component& com_) {
        std::remove_if(std::begin(m_com_vec),std::end(m_com_vec),[com_](Component* it_com_){
            if(it_com_ = &com_){
                return true;
            }
            return false;s
        });
    };
    Component* getChild(const int index_) {
        return m_com_vec[index_];
    };
private:
    std::vector<Component*> m_com_vec;
};

int main(){
    Component* _com = new Composite();
    Component* _left = new Leaf();
    _com->add(_left);
    _com->operation();
    Component* _com_0 = new Composite();
    _com->add(_com_0);
    _com->operation();

    return 0;
}