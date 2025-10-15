// struct
// class = 자료 저장 + 자료 처리(기본 기능) = 변수 + 함수
// 클래스(타입): 특정한 용도를 수행하기 위한 변수와 함수를 모아 둔 틀(자료형)
// 객체(오브젝트): 그 틀을 이용하여 찍어낸 객체(변수, 메모리 상의 공간)

#include <iostream>
using namespace std;

// class: 접근 제어 지시자를 선언 안하면 기본적으로 프라이빗
struct TV{ // 구조체: 접근 제어 지시자를 선언 안하면 기본적으로 퍼블릭
private:
    bool powerOn;
    int channel;
    int volume;

public:
    void on(){
        powerOn=true;
        cout<<"TV를 켰습니다."<<endl;
    }
    void off(){
        powerOn=false;
        cout<<"TV를 껐습니다."<<endl;
    }
    void setChannel(int cnl){
        if(cnl>=1&&cnl<=999){
            channel=cnl;
            cout<<"채널을 "<<cnl<<"(으)로 바꿨습니다."<<endl;
        }
    }

    void setVolume(int vol){
        if(vol>=0&&vol<=100){
            volume=vol;
            cout<<"볼륨을 "<<vol<<"(으)로 바꿨습니다."<<endl;
        }
    }
};

int main(){
    TV ll;
    ll.on();
    ll.setChannel(10);
//    ll.volume=50;
    ll.setVolume(50);
    ll.setChannel(-73);
}

// C++에서 접근제어 지시자 지원: private, protected, public
// 안에서는 접근이 가능하면서 밖에서는 접근 불가능