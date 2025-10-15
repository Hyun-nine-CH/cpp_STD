#include <iostream>
using namespace std;

class Complex{
public:
    Complex() : real(0), imag(0) {}
    Complex(double real,double imag) : real(real),imag(imag) {} // 멤버변수(매개변수) 쌍대응

    /*
    // 초기화 목록
    Complex() : real(0), imag(0) {}
    Complex(double real_,double imag_) : real(real_),imag(imag_) {}
    */

    /*
    Complex(double real_=0, double imag_=0){ // 디폴트 매개변수
        real=real_;
        imag=imag_;
    }
    */

    double GetReal(){
        return real;
    }
    void SetReal(double real_){
        real=real_;
    }
    double GetImag(){
        return imag;
    }
    void SetImag(double imag_){
        imag=imag_;
    }

private:
    double real;
    double imag;
};

int main(){
    int a(5); // 생성자 초기화 방법 중 하나

    Complex c1;
    Complex c2=Complex(2,3);
    Complex c3(2,3);

    cout << "c1=" << c1.GetReal() << "," << c1.GetImag() << endl;
    cout << "c2=" << c2.GetReal() << "," << c2.GetImag() << endl;
    cout << "c3=" << c3.GetReal() << "," << c3.GetImag() << endl;
}