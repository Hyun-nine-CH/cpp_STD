#include <iostream>
using namespace std;

class Base{
public:
    /*
    Base():a(10){}
    int a;
    */
    int a=10; // 생성자가 호출이될 때, 멤버변수까지 동시 초기화 (최신화)
    void Print(){
        cout<<"From Base !!!"<<endl;
    }
};

class Derived:public Base{
public:
    int a=20;
    void Print(){
        cout<<"From Derived !!!"<<endl;
    }
};

int main(){
    Base b;
    Derived d;

    cout<<b.a<<endl;
    cout<<d.a<<endl; // 자식 클래스의 값이 우선시 된다. (우선? 그것이 override, 약간 덮어쓰기? no 접근은 가능함)
    cout<<d.Base::a<<endl; // 상속 기능의 같은 이름의 멤버 변수가 작동하는지 명시적으로 확인
    cout<<d.Derived::a<<endl;

    d.Print(); // overriding 효과
    d.Base::Print();
    d.Derived::Print();
}

// overload: 이름이 같은 여러개의 함수를 정의할 수 있는 기능 (함수)
// 상속에서는 overriding 기능이 나옴 (메서드, 멤버 변수 다 가능)
// overwrite는 덮어쓰기, overriding과 관련 없음 방금 확인해 보았음