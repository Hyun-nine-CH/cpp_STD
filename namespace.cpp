#include <iostream>
using namespace std;

int n; // 전역변수
void set(){
    ::n=10; // 명시적 전역변수의 전형적인 형태
}
namespace noodle{
    int n;
    void set(){
        noodle::n=20; // namespace 안에 있는 지역(자동)변수
    }
}
namespace google{
    int n;
    void set(){
        google::n=30;
    }
}
namespace googoo{
    int n;
    void set(){
        ::n=30; // 마지막에 전역변수 n의 값이 30으로 초기화
    }
}
namespace gg{
    int n;
    void set();
}
int main(){
    ::set();
    noodle::set();
    google::set();
    googoo::set();
    gg::set();

    cout<<::n<<endl;
    cout<<noodle::n<<endl;
    cout<<google::n<<endl;
    cout<<googoo::n<<endl;
    cout<<gg::n<<endl;
}
/*
namespace gg{
    void set(){
        n=22;
    }
}
*/
void gg::set(){
    n=22;
}