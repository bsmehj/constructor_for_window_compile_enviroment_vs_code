#include <iostream>

#include "add.h"    

using namespace std;

int main()
{
    cout << "hello world!" << endl;
    
    int a =10;
    int b = 20;

    swap(a,b);

    cout<< add(2,3)<< endl;
    
    return 0;
}