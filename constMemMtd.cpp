// 1. 매개변수의 상수화
// 2. 메서드의 상수화 (멤버 메서드)
#include <iostream>
using namespace std;

class Account{
public:
    Account():money(0){}
    Account(int money):money(money){}

    void Deposit(const int d){
        // d=money;
        money+=d;
        cout<<d<<"원을 예금했다!!!"<<endl;
    }
    void Draw(const int d){
        if(money>=d){
            money-=d;
            cout<<d<<"원을 인출했다!!!"<<endl;
        }
    }
    /*
    int ViewMoney(){
        money++;
        return money;
    }
    */
    int ViewMoney() const {
        return money;
    }

private:
    int money;
};
int main(){
    Account googoo(200);

    googoo.Deposit(100);
    googoo.Draw(20);

    cout<<googoo.ViewMoney()<<endl;
    cout<<googoo.ViewMoney()<<endl;
    cout<<googoo.ViewMoney()<<endl;
    cout<<googoo.ViewMoney()<<endl;
    cout<<googoo.ViewMoney()<<endl;
    cout<<googoo.ViewMoney()<<endl;            
}