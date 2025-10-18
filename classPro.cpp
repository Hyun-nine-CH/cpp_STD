#include <iostream>
using namespace std;

int n=0;
namespace A{
    int n=0;
    namespace B{
        void set(){n=10;}
        int n=0;
    }
}
namespace C{
    void set();
    int n=0;
}
void C::set(){n=20;}

int main(){
    using namespace A::B;

    set();
    C::set();

    cout<<::n<<endl; // 전역변수의 n -> 0 출력 예상
    cout<<A::n<<endl; // A namespace 안의 n -> main() 안의 set()호출 therefore, A안의 B안의 set() 가동 -> 10 출력 예상
    cout<<A::B::n<<endl; // B namespace 안의 n=0 초기화 부분 -> 0 출력 예상
    cout<<C::n<<endl; // C::set() 호출 -> 가장 최신의 n=20으로 출력 예상
}