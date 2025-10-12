#include <iostream>
using namespace std;

//swap 기능 추가
void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int a(5);

    //r-value
    int &r1=a;
    //int &&r1=a;
    int &&r2=3;
    int &&r3=a*a; // 함숫값은 결과값이므로 r-value 참조 가능

    //swap 기능
    int b(7);
    swap(a,b);
    cout<<"the a is "<<a<<endl;
    cout<<"the b is "<<b<<endl;

    int &p=a; // a의 임시 변수값인 5에 대하여, 그 값을 p의 주소값에 임시저장
    // no expression 'int p=10'
    p=10; // p의 값을 임시변수로서 10으로 대입, a의 임시변수가 5에서 10으로 변경
    cout<<p<<endl;
    cout<<a<<endl;
}