// 연산자 오버로딩
// 벡터
// 멤버 메서드

#include <iostream>
using namespace std;

class Vector2{
public:
    Vector2();
    Vector2(float x,float y);

    float GetX() const;
    float GetY() const;
    /*
    static Vector2 Sum(Vector2 a,Vector2 b){
        return Vector2(a.GetX()+b.GetX(),a.GetY()+b.GetY());
    }
    */
    static Vector2 Sum(Vector2 a,Vector2 b){
        return Vector2(a.x+b.x,a.y+b.y);
    }
    Vector2 Add(Vector2 rhs){
        return Vector2(x+rhs.x,y+rhs.y);
    }

private:
    float x;
    float y;
};
/*
Vector2 Sum(Vector2 a,Vector2 b){
    return Vector2(a.GetX()+b.GetX(),a.GetY()+b.GetY());
}
*/
int main(){
    Vector2 a(2,3);
    Vector2 b(-1,4);
    // Vector2 c=Sum(a,b);
    Vector2 c=Vector2::Sum(a,b);
    Vector2 c2=a.Add(b);

    cout<<a.GetX()<<", "<<a.GetY()<<endl;
    cout<<b.GetX()<<", "<<b.GetY()<<endl;
    cout<<c.GetX()<<", "<<c.GetY()<<endl;
    cout<<c2.GetX()<<", "<<c2.GetY()<<endl;
}
Vector2::Vector2():x(0),y(0){}
Vector2::Vector2(float x,float y):x(x),y(y){}

float Vector2::GetX() const { return x;}
float Vector2::GetY() const { return y;}

/* 멤버 메서드의 선언, 정의 분리하기 */
/*
void a();
void b();
void c();

void a(){
    b();
}
*/