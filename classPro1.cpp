/*     간단한 메서드 내용 제작     */
/*
1. 아래의 GameWindow 클래스의 코드에서 창 너비와 높이를 매개변수로 받는 ResizeWindow 함수를 추가하여
다음 조건과 같이 width와 height의 값을 바꿀 수 있도록 하세요.
    - 들어온 매개변수의 값과 일치하도록 창 크기를 설정할 것.
    - 너비가 800보다 작거나 높이가 600보다 작을 때는 각각 800, 600으로 설정한 것.

2. GameWindow::GameWindow(int w, int h) 생성자도 마찬가지로 2번의 조건을 만족하도록 수정하세요.
3. 작성한 코드에서 상수화가 가능한 부분을 모두 상수화하세요.
*/
#include <iostream>
using namespace std;

class GameWindow{
public:
    // 생성자 생성
    GameWindow();
    // 인자 지정(overloading)
    GameWindow(const int, const int);

    int GetWidth() const;
    int GetHeight() const;
    
    // static int ResizeWindow(int, int);
    // 제시된 결과
    void ResizeWindow(const int, const int);

private:
    int width;
    int height;
};

GameWindow::GameWindow():width(800),height(600){} // defalut: 800,600 초기화리스트 설정
GameWindow::GameWindow(const int w, const int h):width(w),height(h){
    ResizeWindow(w,h);
}

int GameWindow::GetWidth() const{return width;}
int GameWindow::GetHeight() const{return height;}

void GameWindow::ResizeWindow(const int w, const int h){
    if(w<800){
        width=800;
    } else width=w;
    if(h<600){
        height=600;
    } else height=h;
}

int main(){
    GameWindow mainWindow(799,768);
    // mainWindow.ResizeWindow(1366, 768);
    cout<<mainWindow.GetWidth()<<"x"<<mainWindow.GetHeight()<<endl;
}