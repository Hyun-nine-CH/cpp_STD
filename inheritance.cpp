// 자식이 부모한테 포함된다.
// 부모의 멤버는 자식한테 포함된다. (조건 수가 부모보다 자식이 더 많으므로)

#include <iostream>
using namespace std;

class Base{
public:
    void bFunc(){
        cout<<"Hello!"<<endl;
    }

    int bNum;
};

class Derived : public Base{ // 부모의 고유 멤버를 상속받은 상태로서, 접근 가능
public:
    void dFunc(){
        cout<<"Hello?"<<endl;
    }

    int dNum; // 자식의 고유 멤버
};

int main(){
    Base b;
    Derived d;

    b.bFunc();
    b.bNum=1;

    d.bFunc(); // 상속으로 가능
    d.bNum=2;
    d.dFunc(); // 원래 고유 멤버
    d.dNum=1;
}