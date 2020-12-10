#include <iostream>

using namespace std;

//Exercise 1
class rectangle
{
    private:
        double a,b;
    public:
        rectangle(double side1, double side2)
        {
            a=side1;
            b=side2;
        }
        double area(){
            return a*b;
        }
};

// Exercise 2
class integers
{
    public:
        int a, b;
        integers(double first, double second)
        {
            a=first;
            b=second;
        }
        int addition(){
            return this->a+this->b;
        }
};

// Exercise 3
class complexs
{
    public:
        double real1,real2,imag1,imag2;
        complexs(double real11, double imag11, double real22, double imag22)
        {
            real1=real11;
            real2=real22;
            imag1=imag11;
            imag2=imag22;
        }
        void Addition()
        {
             if(imag1+imag2 >= 0)
                 cout << real1+real2 << " + " << imag1+imag2 << "i" << endl;
             else
                 cout << real1+real2 << " " << imag1+imag2 << "i" << endl;
        }
};

int main()
{
    // Exercise 1
    cout << "Exercise 1\n";
    rectangle square(2.4,2.4);
    cout << square.area() << endl;

    // Exercise 2
    cout << "Exercise 2\n";
    int a;
    int b;

    cout << "Input two integers to sum:\n" ;
    cin >> a;
    cin >> b;

    integers values(a, b);
    cout << "Addition of the values:\n" << values.addition() << endl ;

    // Exercise 3
    cout << "Exercise 3 \n";
    complexs complex_values(6,3,8,-5);
    complex_values.Addition();

}

