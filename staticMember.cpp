#include <iostream>
using namespace std;

class Color{
public:
    Color():r(0),g(0),b(0){}
    Color(float r,float g,float b):r(r),g(g),b(b){}

    float GetR(){return r;}
    float GetG(){return g;}
    float GetB(){return b;}

    // 클래스의 private 멤버까지 접근이 가능하면서 전역 함수처럼 쓸 수 있는 정적 멤버 메서드
    static Color MixColors(Color a, Color b){
        return Color((a.GetR()+b.GetR())/2,(a.GetG()+b.GetG())/2,(a.GetB()+b.GetB())/2);
    }
    
    /*
    static Color MixColors(Color a, Color b){
        return Color((a.r+b.r)/2,(a.g+b.g)/2,(a.b+b.b)/2);
    }
    */

private:
    float r;
    float g;
    float b;
};
/*
Color MixColors(Color a, Color b){
    return Color((a.GetR()+b.GetR())/2,(a.GetG(),b.GetG())/2,(a.GetB()+b.GetB())/2);
}
*/
int main(){
    Color blue(0,0,1);
    Color red(1,0,0);

    // Color purple=MixColors(blue,red);
    Color purple=Color::MixColors(blue,red);
    // Color purple=blue.MixColors(blue,red);

    cout<<"r= "<<purple.GetR()<<" g= "<<purple.GetG()<<" b= "<<purple.GetB()<<endl;
}