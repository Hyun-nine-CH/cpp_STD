#include <iostream>
using namespace std;

class Complex{
public:
    Complex(){
        real=0;
        imag=0;
    } // 멤버변수 초기화를 위한 디폴트 생성자
    // 오버로딩
    Complex(double real_, double imag_){
        real=real_;
        imag=imag_;
    }

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
    Complex c1;
    Complex c2=Complex(2,3);
    Complex c3(2,3);
    Complex c4={2,3};
    Complex c5{2,3};

    cout << "c1=" << c1.GetReal() << "," << c1.GetImag() << endl;
    cout << "c2=" << c2.GetReal() << "," << c2.GetImag() << endl;
}