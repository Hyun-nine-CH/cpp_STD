// 접근 제어
// public   : 외부 접근 o, 자식 클래스 o
// protected: 외부 접근 x, 자식 클래스 o
// private  : 외부 접근 x, 자식 클래스 x

#include <iostream>
using namespace std;

class Base{
public:
    int bPublic;

protected:
    int bProtected;

private:
    int bPrivate;
};

class Derived:public Base{ // 거의 public
public:
    int dPublic;

    void DFunc(){
        bPublic=1;
        bProtected=2;
        // bPrivate=3;
        dPublic=4;
        dPrivate=5;
    }
private:
    int dPrivate;
};

int main(){
    Base b;
    Derived d;

    b.bPublic=1;
//    b.bProtected=2;
//    b.bPrivate=3;

    d.bPublic=1;
//    d.bProtected=2;
//    d.bPrivate=3;
    d.dPublic=4;
//    d.dPrivate=5;
}