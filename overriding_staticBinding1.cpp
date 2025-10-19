// 정적과 동적 바인딩 존재
// 정적 바인딩은 객체지향과는 반대방향의 느낌 (멀어지는 개념) C++에서는 이런 현상이 존재 = 굿!

#include <iostream>
using namespace std;

class Base{
public:
    void Print(){
        cout<<"From Base !!!"<<endl;
    }
};

class Derived:public Base{
public:
    void Print(){
        cout<<"From Derived !!!"<<endl;
    }
};

/*
int a;
char *p;
p=&a; // error form C
*/

/* C++ */
// Derived d;
// Base *b=&d;
// type이 달라도 C++에서는 부모 클래스에서의 포인터가 자식도 가리킬 수 있다는 점

/*
Derived d;
Base b;
Base *p=&b; // 자명한 사실이니 문제될 게 없는 논리
Base *p=&d; // Base의 요소를 가리키는 포인터가 Base에 포함되는 Derived의 요소(멤버 변수)를 가리키는데 문제가 없음
// 부모를 가리키는 포인터가 자식을 가리키는 데에서 에러를 내지 않음
// 결론: 부모 클래스의 포인터가 자식을 가리킬 수 있다.
*/

int main(){
    Base *b=new Derived(); // Derived 타입의 객체를 동적 할당하고, 그 포인터(그 객체의 주소)를 b에다가 저장
    b->Print(); // (*b).Print()
    delete b;
}