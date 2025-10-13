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
    
    for(int(&ln)[3]:arr){ // auto &ln:arr
        for(int &col:ln){
            cout<<col<<' ';
        }
        cout<<endl;
    }

    for(int(*ln)[3]=arr; ln<arr+2;ln++){
        for(int *c=*ln;c<*ln+3;c++){
            cout<<*c<<' ';
        }
        cout<<endl;
    }
}