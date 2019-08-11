#pragma once

class Adaptee {
public:
    void specificRequest(){}
};
class Target{
public:
    virtual void request() = 0;
};
class Adapter: public Target, private Adaptee{
public:
    void request(){
        specificRequest();
    }
};

class Adaptee {
public:
    void specificRequest() {}
};
class Target {
public:
    virtual void request() = 0;
};
class Adapter : public Target{
public:
    void request() {
        m_adapterr->specificRequest();
    }
    Adaptee* m_adapterr;
};

