#include <iostream>
using namespace std;
int x = 10;   // Global variable
namespace a
{
    int x = 100; //namespace a variable
}
namespace b
{
    int x = 150; //namespace b variable
}
int main()
{
   int x = 50;   // Local variable
    cout << "Local Variable: " << x << endl;
    cout << "Global Variable: " << ::x << endl;
    cout << "Namespace a Variable: " << a::x << endl;
    cout << "Namespace b Variable: " << b::x << endl;
    return 0;
}//we cant declare namespace inside main()
