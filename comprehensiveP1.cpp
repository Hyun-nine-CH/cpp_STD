#include <iostream>
using namespace std;

int main() {
    int arr[2][3]={{2,3,4},{5,6,7}};

    for(int *n:arr){
        for(int i=0;i<3;i++){
            cout<<n[i]<<' ';
        }
        cout<<endl;
    }
    
    // 범위 기반 for문: 일단 배열에 대한 레퍼런스를 씀
    for(int(&ln)[3]:arr){ // auto &ln:arr, 레퍼런스 변수 ln
        for(int &col:ln){
            cout<<col<<' ';
        }
        cout<<endl;
    }
    // 배열에 대한 포인터
    for(int(*ln)[3]=arr; ln<arr+2;ln++){
        for(int *c=*ln;c<*ln+3;c++){
            cout<<*c<<' ';
        }
        cout<<endl;
    }
}