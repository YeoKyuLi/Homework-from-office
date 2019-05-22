#include <iostream>

using namespace std;

struct D{
    void operator() ()  {
        cout << "Hello World" << endl;
    }
};

void hello(){
    cout << "hello" << endl;
}

int main()
{
    D d;
    d();
    return 0;
}