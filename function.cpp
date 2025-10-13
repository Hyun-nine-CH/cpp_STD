#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int tmp=a;
    a=b;
    b=tmp;
}

//swapd -> swap overloading
void swap(double &a, double &b){
    double tmp=a;
    a=b;
    b=tmp;
}

//swapp -> swap overloading
void swap(int*(&a),int*(&b)){
    int *tmp=a;
    a=b;
    b=tmp;
}

int main(){
    int a=5, b=7;
    double da= 2.1728, db=3.1415;
    int *pa=&a,*pb=&b;

    swap(a,b);
    swap(da,db);
    swap(pa,pb);

    cout<< "the a is "<<a<<endl;
    cout<<"the b is "<<b<<endl;

    cout<< "the da is "<<da<<endl;
    cout<<"the db is "<<db<<endl;

    cout<< "the pa is "<<pa<<endl;
    cout<<"the pb is "<<pb<<endl;

    cout<< "the *pa is "<<*pa<<endl;
    cout<<"the *pb is "<<*pb<<endl;
}