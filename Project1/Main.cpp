//////FactoryPattern
////#include "FactoryPattern\Factory.h"
////#include "FactoryPattern\Product.h"
////int main(){
////    Factory* factory = new ConreteFactory;
////    Product* p = factory->createProduct();
////    
////    for(;;);
////    return 0;
////}
//
//////AbstractFactoryPattern
////#include "AbstractFactoryPattern\AbstractProduct.h"
////#include "AbstractFactoryPattern\AbstractFactory.h"
////int main(){
////    AbstractFactory* af= new ConcreteFactory1;
////    AbstractProductA* a1 = af->createA();
////    AbstractProductB* a2 = af->createB();
////    AbstractFactory* af1 = new ConcreteFactory2;
////    AbstractProductA* a3 = af1->createA();
////    AbstractProductB* a4 = af1->createB();
////    for(;;);
////    return 0;
////}
////single
//#include <iostream>
//#include <assert.h>
//#include <vector>
////
////class Tmp {
////public:
////    Tmp():tmpInt(10){}
////public:
////    int tmpInt;
////};
////class tmpD : public Tmp {
////public:
////    tmpD():myInt(20){}
////    void operator+=(const Tmp& b){
////        myInt += b.returnMyInt();
////    }
////    int returnMyInt(){return myInt;}
////    int myInt;
////};
//
//class Solution {
//public:
//    int dominantIndex(std::vector<int>& nums) {
//        int _max_num = 0;
//        int _max_index = 0;
//        int _second_num = 0;
//        int _second_index = 0;
//        for (int i = 0; i != nums.size(); ++i) {
//            if (nums[i] > _max_num) {
//                _second_num = _max_num;
//                _second_index = _max_index;
//                _max_num = nums[i];
//                _max_index = i;
//                continue;
//            }
//            if (nums[i] < _max_num && _second_num< nums[i]) {
//                _second_num = nums[i];
//                _second_index = i;
//            }
//        }
//
//        if (_max_num >= _second_num * 2) {
//            return _max_index;
//        }
//        return -1;
//    }
//};
//int main(){
//    std::vector<int > _v = {0,0,0,1};
//    Solution a;
//    std::cout << a.dominantIndex(_v) << std::endl;
//
//    for(;;);
//}


