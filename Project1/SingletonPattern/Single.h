#pragma once

Single* Single::_single = 0;
class Single {
public:
    static Single* instance() {
        if (!_single)
            _single = new Single();
        return _single;
    }
private:
    Single() {};
    static Single* _single;
};

int main(){

    return 0;
}
