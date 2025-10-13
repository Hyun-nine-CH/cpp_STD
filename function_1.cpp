#include <iostream>
using namespace std;

int inventory[64]={0};
int score=0;

void getItem(int itemId){
    inventory[itemId]++;
}

void getItem(int itemId, int cnt){
    inventory[itemId]+=cnt;
}

void getItem(int itemId, int cnt, int sc){
    inventory[itemId]+=cnt;
    score+=sc;
}

int main(){
    getItem(5,6);
    getItem(3, 2);
    getItem(11,21,7000);
    getItem(3);

    cout<<score<<endl;
    for(int i=0;i<16;i++){
        cout<<inventory[i]<<' ';
    }
    cout<<endl;
}