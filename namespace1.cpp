#include <iostream>
using namespace std;

int n;
void set(){
    n=10;
}
namespace googoo{
    // int n;
    void set(){
        n=20;
    }
    namespace google{
        // int n;
        void set(){
            n=30; // 30으로 초기화할 n을 탐색->googoo의 n(윗줄)
        }
        int n; // 0
    }
    int n;
}

int m;
void reset(){
    m=11;
}
namespace googoo{
    void reset();
    namespace google{
        void reset();
        int m;
    }
    int m;
}

int main(){
    ::set();
    googoo::set();
    googoo::google::set();

    cout<<::n<<endl;
    cout<<googoo::n<<endl;
    cout<<googoo::google::n<<endl;

    ::reset();
    googoo::reset();
    googoo::google::reset();

    cout<<::m<<endl;
    cout<<googoo::m<<endl;
    cout<<googoo::google::m<<endl;
}

void googoo::reset(){
    m=22;
}

void googoo::google::reset(){
    m=33;
}