#include<iostream>
#include<numeric>
#include<vector>
#include<conio.h>
#include<algorithm>
using namespace std;

class Complex{
private:
    float real;
    float img;

public:
    Complex(float r=0, float i=0){
        real = r;
        img = i;
    }

    void print (){
        if(real != 0){
            cout << real;
            if(img != 0){
                if(img > 0){
                    cout << "+";
                }
                cout << img << "i" << endl;
            }
        }
    }

    Complex add(Complex c){
        Complex result;
        result.real = real + c.real;
        result.img = img + c.img;
        return result;
    }

    void set_real(float r=0){
        real = r;
    }

    float get_real(){
        return real;
    }

    void set_img(float i=0){
        img = i;
    }

    float get_img(){
        return img;
    }
};

int main(){
    Complex num1(1.0, -2.0); // creates 1-2i
    Complex num2(3.14); // creates 3.14

    num2.set_img(-5);

    Complex sum = num1.add(num2);
    sum.print(); // prints 4.14-7i

    return 0;
}
