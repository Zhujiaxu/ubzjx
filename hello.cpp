#include "hello.h"
void Hello::say_Hello() 
{
    cout << "Hello, World!" << endl;
}
int main()
{

    Hello hello;
    hello.say_Hello();
    return 0;
}