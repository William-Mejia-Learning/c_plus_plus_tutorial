#include <iostream>
#include <string>
#include <sstream>

using namespace std;



//const double pi = 3.1415926;
//const char tab = '\t';

#define PI 3.14159
#define NEWLINE '\n'

int main() {
//    cout
//            << "Hello, World! ";
//    cout
//            << "I'm a C++ program";

    // declaring Variables

//    int a, b;
//    int result;

    // process
//    a = 5;
//    b = 2;
//    a = a + 1;
//    result = a - b;
//
//    int a = 5;
//    int b(3);
//    int c{2};
//
//    int result;
//
//    a = a + b;
//
//    result = a - c;
    // process:
//    cout << result;

//    int foo = 0;
//    auto bar = foo;

//    decltype(foo) bar;

//    cout << bar;


    // my first string
//    string mystring;
//    mystring = "This is a string";
//
//    cout << mystring << endl;
//
//    mystring = "This is a different string content";
//    cout << mystring << endl;

//    int num = 0x4b123456564;

//    int num = -10000000u;

//    double num =3.14159F;
//    double num1 = 6.02e25f;
//    double num2 = 6.02e-25F;
//    double num3 =3.14159;
//
//    cout << num << endl;
//    cout << num1 << endl;
//    cout << num2 << endl;
//
//    char character = 'z';
//    char character1 = 'ze';
//
//    cout << character << endl;
//    cout << character1 << endl;


//    bool foo = true;
//    bool bar = false;
//
//    int* p = nullptr;
//
//
//    double r =5.0;
//    double circle;
//
//    circle = 2 * PI * r;
//
//    cout << circle;
//    cout << NEWLINE;


//    int a , b;
//
//    a = 10;
//    b = 4;
//    a = b;
//    b = 7;
//
//    cout << "a:";
//    cout << a;
//    cout << " b:";
//    cout << b;

//    int a, b = 3;
//    a =  b;
//    a+=2;
//    cout << a << endl;
//
//    a++;
//    int c = 20;
//
//    cout << a << endl;
//
//    cout << ((a <= b) && !(c == b));

//    int x = sizeof (char);
//
//    cout << x;

//    int x = (5 + 7) % 2;
//
//    cout << x << endl;

//    int i;
//    cout << "Please enter an integer value: ";
//    cin >> i;
//    cout << "The value you entered is " << i;
//    cout << " and its double is " << i*2 << ".\n";

//    string a;
//    string b;
//
//    cin >> a >> b;
//
//    cout << a << b;

//    string mystr;
//    cout << "What's your name? ";
//    getline (cin, mystr);
//    cout << "Hello " << mystr << ".\n";
//    cout << "What is your favorite team? ";
//    getline (cin, mystr);
//    cout << "I like " << mystr << " too!\n";

    string mystr;
    float price=0;
    int quantity=0;

    cout << "Enter price: ";
    getline (cin,mystr);
    stringstream(mystr) >> price;
    cout << "Enter quantity: ";
    getline (cin,mystr);
    stringstream(mystr) >> quantity;
    cout << "Total price: " << price*quantity << endl;

    // terminate the program
    return 0;

}
