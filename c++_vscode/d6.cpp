#include <iostream>
using namespace std;

class Retangle{
    private:
        int width, height;
    public:
        Retangle(int w, int h): width(w), height(h) {}
        int area(){ return width * height; }
        ~Retangle() {cout << "Destructor called" << endl;}

};

int main(){
    int a,b,c,d;
    cout<<"a: "; cin>>a;
    cout<<"b: "; cin>>b;
    cout<<"c: "; cin>>c;
    cout<<"d: "; cin>>d;    


    Retangle r1(a,b), r2(c,d);
    cout << "Area: " << r1.area() << endl;
    cout << "Area: " << r2.area() << endl;



    return 0;
}