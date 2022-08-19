#include <iostream>
#include <string>
#include <sstream>
#include <array>

using namespace std;



//const double pi = 3.1415926;
//const char tab = '\t';

#define PI 3.14159
#define NEWLINE '\n'

#define WIDTH 5
#define HEIGHT 3

int addition(int a, int b) {
    int r;
    r = a + b;
    return r;
}

int subtraction(int a, int b) {
    int r;
    r = a - b;
    return r;
}

void printmessage() {
    cout << "I'm a function!";
}

void duplicate(int &a, int &b, int &c) {
    a *= 2;
    b *= 2;
    c *= 2;
}

string concatenate(string &a, string &b) {
    return a + b;
}

int divide(int a, int b = 2) {
    int r;
    r = a / b;
    return (r);
}

void odd(int x);

void even(int x);

long factorial(long a) {
    if (a > 1)
        return (a * factorial(a - 1));
    else
        return 1;
}

int operate(int a, int b) {
    return (a * b);
}

double operate(double a, double b) {
    return (a / b);
}

int sum(int a, int b) {
    return a + b;
}

double sum(double a, double b) {
    return a + b;
}

template<class T>
T sum(T a, T b) {
    T result;
    result = a + b;
    return result;
}

template<class T, class U>
bool are_equal(T a, U b) {
    return (a == b);
}

template<class T, int N>
T fixed_multiply(T val) {
    return val * N;
}

//int foo; // global variable

//int some_function () {
//    int bar; // local variable
//    bar = 0;
//}

//int other_function (){
//    foo = 1; // ok: foo is a global variable
////    bar = 2; // wrong: bar is visible from this function
//}

//int some_function(){
//    int x;
//    x = 0;
//    double x; // wrong: name already used in this scope
//    x = 0.00;
//}

//namespace foo{
//    int value() { return 5; }
//}

//namespace bar {
//    const double pi = 3.1416;
//    double value() { return 2 * pi; }
//}
//
//namespace first {
//    int x = 5;
//    int y = 10;
//}
//
//namespace second {
//    double x = 3.1416;
//    double y = 2.7183;
//}

//int x;

//int foo[] = {16, 2, 77, 40, 12071};
//
//int n, result = 0;

//int jimmy[HEIGHT][WIDTH];
//int n, m;

//void printarray (int arg[], int length){
//    for (int n = 0; n < length; ++n)
//        cout << arg[n] << ' ';
//    cout << '\n';
//}


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

//    string mystr;
//    float price=0;
//    int quantity=0;
//
//    cout << "Enter price: ";
//    getline (cin,mystr);
//    stringstream(mystr) >> price;
//    cout << "Enter quantity: ";
//    getline (cin,mystr);
//    stringstream(mystr) >> quantity;
//    cout << "Total price: " << price*quantity << endl;

//    int x = 99;

//    if(x == 100){
//        cout << "x is " << x;
//    }
//    else{
//        cout << "x is not 100";
//    }

//    if(x > 0)
//        cout << "x is positive";
//    else if( x < 0)
//        cout << "x is negative";
//    else
//        cout << "x ix 0";

//    int n = 10;
//
//    while(n > 0){
//        cout << n << ", ";
//        --n;
//    }
//    cout << "liftoff! \n";

//    string str;
//    do {
//        cout << "Enter text: ";
//        getline(cin, str);
//        cout << "You entered " << str << '\n';
//    } while (str != "goodbye");


//    for(int n=10; n > 0; n--){
//        if(n > 1){
//            cout << n << ", ";
//        }
//        if(n == 1){
//            cout << n;
//        }
//    }
//    cout << "liftoff! \n";

//    string str ("hello!");

//    for (char c : str){
//        cout << "[" << c << "]";
//    }
//    cout << '\n';

//    for (auto c : str){
//        cout << "[" << c << "]";
//    }
//    cout << '\n';

//    for(int n = 10; n > 0; n--){
//        cout << n << ", ";
//        if(n == 3){
//            cout << "Countdown aborted!";
//            break;
//        }
//    }

//    for(int n = 10; n > 0; n--){
//        if( n == 5) continue;
//        cout << n << ", ";
//    }
//
//    cout << "liftoff!\n";

//    int n =10;
//
//    mylabel:
//    cout << n << ", ";
//    n--;
//    if(n > 0) goto mylabel;
//    cout << "liftoff!\n";

//    int x = 1;

//    switch (x) {
//        case 1:
//            cout << "x is 1";
//            break;
//        case 2:
//            cout << "x is 2";
//            break;
//        default:
//            cout << "value of x unknown";
//    }

//    int z;
//    z = addition(5,3);
//    cout << "The result is " << z;

//    int y;
//    y = subtraction(7, 2);
//    cout << y << endl;
//
//    y = 4 + subtraction(7,2);
//
//    cout << y;

//    printmessage();

//    int num = true + 1;
//    cout << num;

//    int x = 1, y= 3, z= 7;
//    duplicate(x,y,z);
//
//    cout << "x=" << x <<", y=" << y << ", z=" << z << endl;
//
//    cout << addition(x, y);

//    string x = "hello ";
//    string y = "world";
//    cout << concatenate(x,y);

//    cout << divide(12) << '\n';
//    cout << divide(20, 4) << '\n';

//    int i;
//
//    do {
//        cout << "PLease enter number (0 to exit)";
//        cin >> i;
//        odd(i);
//    } while (i != 0);


//    long number = 9;
//
//    cout << number << "! = " << factorial(number);

//    int x = 5, y = 2;
//    double n = 5.0, m = 2.0;
//
//    cout << operate(x, y) << endl;
//    cout << operate(n, m) << endl;


//    cout << sum(10, 20) << endl;
//    cout << sum(1.0, 1.5) << endl;

//    int i=5, j=6, k;
//    double f=2.0, g=0.5, h;
//    k=sum<int>(i,j);
//    h=sum<double>(f,g);
//    cout << k << '\n';
//    cout << h << '\n';

//    if (are_equal(10,10.0))
//        cout << "x and y are equal\n";
//    else
//        cout << "x and y are not equal\n";

//    cout << fixed_multiply<int, 2>(10) << endl;
//    cout << fixed_multiply<int, 3>(10) << endl;

//    int x = 10;
//    int y = 20;
//    {
//        int x; //ok, inner scope.
//        x = 50; // sets value to inner x
//        y = 50; // sets value to (outer) y
//        cout << "inner block: \n";
//        cout << "x: " << x << endl;
//        cout << "y: " << y << endl;
//    }
//    cout << "outer block: \n";
//    cout << "x: " << x << '\n';
//    cout << "y: " << y << '\n';

//    cout << foo :: value() << '\n';
//    cout << bar :: value() << '\n';
//    cout << bar :: pi << '\n';

//    using namespace first;
////    using first::x;
////    using second::y;
//
//    cout << x << endl;
//    cout << y << endl;
////    cout << first::y << endl;
//    cout << second::x << endl;
//    cout << second::y << endl;

//    {
//        using namespace first;
//        cout << x << endl;
//    }
//    {
//        using namespace second;
//        cout << x << endl;
//    }

//    int y;
//    cout << x << '\n';
//    cout << y << '\n';

//    int foo [] {16, 2, 77, 40, 12071};
//
//    int bar [5] = {10, 20, 30};
//
//    int baz [5] = {};
//
//    int foo[5];
//    foo[2] = 75;
//
//
//
//    int x = foo[2];

//    for(n=0; n<5 ; ++n){
//        result += foo[n];
//    }
//    cout << result;

//    char century [100][365][24][60][60];
//
//    cout << century;

//    int jimmy [5][5]; //is equivalent to
//    int jimmy[15]; // (3 * 5 = 15)



//    for (n = 0; n < HEIGHT; n++)
//        for (m = 0; m < WIDTH; m++) {
//            jimmy[n][m] = (n + 1) * (m + 1);
//        }

//    int firstarray[] = {5, 10, 15};
//    int secondarray[] = {2, 4, 6, 8, 10};
//    printarray (firstarray,3);
//    printarray (secondarray,5);

//    int myarray[3] = {10,20,30};
//
//    for (int i=0; i<3; ++i)
//        ++myarray[i];
//
//    for (int elem : myarray)
//        cout << elem << '\n';

    array<int,3> myarray {10,20,30};

    for (int i=0; i<myarray.size(); ++i)
        ++myarray[i];

    for (int elem : myarray)
        cout << elem << '\n';


    // terminate the program
    return 0;
}

void odd(int x) {
    if ((x % 2) != 0) cout << "It is odd. \n";
    else even(x);
}

void even(int x) {
    if ((x % 2) == 0) cout << "It is even. \n";
    else odd(x);
}

