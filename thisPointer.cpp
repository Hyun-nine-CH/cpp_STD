#include <iostream>
using namespace std;

// 모든 구조체/클래스 안에 있는 멤버함수는 this라는 포인터를 보이지 않는 매개변수 형태로 받아놓음
class MyClass{
public:
    void PrintThis(){
        cout<<"나의 주소는 "<<this<<endl;
    }
};

int main(){
    MyClass a, b;
    cout<<"a의 주소는 "<<&a<<endl;
    cout<<"b의 주소는 "<<&b<<endl;

    a.PrintThis();
    b.PrintThis();
}

/*
class MyClass{
public:
    void PrintThis(MyClass *ptr){ // 어떤 객체를 가리키고 있는 포인터, &v의 값이 ptr로 들어감
        cout<<"나의 주소는 "<< ptr <<endl;
    }
};

int main(){
    MyClass a, b;
    cout<<"a의 주소는 "<<&a<<endl;
    cout<<"b의 주소는 "<<&b<<endl;

    a.PrintThis(&a); // 매개변수로 주소값을 넘겨줌
    b.PrintThis(&b);
}
*/