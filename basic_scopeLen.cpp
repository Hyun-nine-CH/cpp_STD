#include <iostream>
using namespace std;

int main() {
    int arr[10]={3,1,4,5,7,8,0,2,5,6};
    
    for(int n:arr){
        cout<<"the component of arrays is "<<n<<endl;
    }

    for(int n:arr){
        cout<<n<<' ';
        n++;
    }
    cout<<endl;

    for(int &n:arr){ // directly, address value
        cout<<n<<' ';
        n++;
    }
    cout<<endl;

    for(int n:arr){
        cout<<n<<' ';
    }
    cout<<endl; // the results
}