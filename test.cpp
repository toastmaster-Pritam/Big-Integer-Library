#include<iostream>
#include "bigint.h"

using namespace std;

using namespace MathFunctions;

int main(){

    bigint a;
    a="79827098175987";
    bigint b=(bigint)("8732875982759823789753298432");

    cout<<"addition:"<<a+b<<endl<<endl;
    cout<<"Subtraction:"<<a-b<<endl<<endl;
    cout<<"Multiply:"<<a*b<<endl<<endl;
    cout<<"Division:"<<b/a<<endl<<endl;
    cout<<"Modulo:"<<b%a<<endl<<endl;


    return 0;
}