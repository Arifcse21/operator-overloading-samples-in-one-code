#include <iostream>
using namespace std;
class Complex
{
    double rl,im;
public:
    Complex(double r=0,double m=0)
    {
        rl=r;
        im=m;
    }
    Complex operator+(Complex &ob);
    Complex operator++(int);
    Complex operator++();
    Complex operator+(double n);
    friend Complex operator+(double n,Complex &ob);
    void print()
    {
        cout<<rl<<" "<<im<<endl;
    }

};
Complex Complex::operator+(Complex &ob)
{
    Complex tmp;
    tmp.rl=rl+ob.rl;
    tmp.im=im+ob.im;
    return tmp;
}
Complex Complex::operator++(int)
{
    rl++;im++;
    Complex tmp;
    tmp.rl=rl;
    tmp.im=im;
    return tmp;
}
Complex Complex::operator++()
{
    rl++;im++;
    Complex tmp;
    tmp.rl=rl;
    tmp.im=im;
    return tmp;
}
Complex operator+(double n,Complex &ob)
{
    Complex tmp;
    tmp.rl=n+ob.rl;
    tmp.im=ob.im;
    return tmp;
}
Complex Complex ::operator+(double n)
{
    Complex tmp;
    tmp.rl=rl+n;
    tmp.im=im;
    return tmp;
}
int main()
{
    Complex ob(12.0,5.0),ob1,ob2(5.0,8.0),ob3(9.0,3.0) ;
    ob1=ob2+ob3; //5.0+9.0 and 8.0+3.0
    ob1.print();
    ob++;	//12.0+1.0 and 5.0+1.0
    ob.print();
    ++ob;	//13.0+1.0 and 6.0+1.0
    ob.print();
    ob2=ob1+100.09; //14.0+100.0 and 11.0+100.0
    ob2.print();
    ob3=100.44+ob1;	//100.0+14.0 and 100.0+11.0
    ob3.print();





    return 0;
}
