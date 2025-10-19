// 메시지
//  ㄴ텍스트
//  ㄴ이미지

#include <iostream>
#include <string>
using namespace std;

class Image{ // 해당 클래스 안에 동적 할당된 메모리는 없음
public:
    operator string(){ // string으로 형변환을 하는 연산자를 오버로딩
        return "사진";
    }
};

class Message{
public:
    Message(int sendTime, string sendName){ // protected보다는 이렇게 클래스 따로 관리
        this->sendTime=sendTime;
        this->sendName=sendName;
    }
    int GetSendTime() const{return sendTime;}
    string GetSendName() const{return sendName;}

private:
    int sendTime;
    string sendName;
};

class TextMessage:public Message{
public:
    TextMessage(int sendTime, string sendName, string text)
    :Message(sendTime,sendName){ // 어떤 부모 클래스의 생성자를 호출할지 직접 지정(오버로딩 됐을 때), 즉, 생성자 위임
//        this->sendTime=sendTime;
//        this->sendName=sendName;
        this->text=text;
    }
    // Get 함수에는 const가 있는 게 원칙
//    int GetSendTime() const{return sendTime;}
//    string GetSendName() const{return sendName;}
    string GetText() const{return text;}

private:
//    int sendTime;
//    string sendName;
    string text;
};

class ImageMessage:public Message{
public:
    ImageMessage(int sendTime, string sendName, Image *image)
    :Message(sendTime,sendName){ // 이미지 자체를 동적할당할 수는 있음
//        this->sendTime=sendTime;
//        this->sendName=sendName;
        this->image=image; // 얕은 복사 -> delete 2번 호출되는 문제? No
    }
//    int GetSendTime() const{return sendTime;}
//    string GetSendName() const{return sendName;}
    Image *GetImage() const{return image;} // 자료형 타입: Image*

private:
//    int sendTime;
//    string sendName;
    // Image를 통째로 넣으면, 해당 클래스의 용량이 커져서 메모리 관리가 비효율적임 -> pointer(가리키는 참조만 하는 정도)
    Image *image;
};

int main(){
    Image *p_catImage=new Image();
    TextMessage* hello=new TextMessage(10,"googoo","hello !!");
    ImageMessage *cat=new ImageMessage(20,"googoo",p_catImage);

    cout<<"time: "<<hello->GetSendTime()<<endl;
    cout<<"person: "<<hello->GetSendName()<<endl;
    cout<<"contents: "<<hello->GetText()<<endl;
    cout<<endl;

    cout<<"time: "<<cat->GetSendTime()<<endl;
    cout<<"person: "<<cat->GetSendName()<<endl;
    // (type)*cat->GetImage() <- cat->GetImage() 먼저 계산된 결과(이미지에 대한 포인터)가 나오고, 그 포인터 앞에 *를 붙이면 그것의 값(이미지)가 출력되고, 그것의 형(타입)을 type으로 명시적 변환을 하겠다는 의미
    cout<<"contents: "<<(string)*cat->GetImage()<<endl;
    cout<<endl;

    delete hello;
    delete cat;
    delete p_catImage;
}