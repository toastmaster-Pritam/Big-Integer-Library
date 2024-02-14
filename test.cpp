#include<iostream>
#include "bigint.h"

using namespace std;

using namespace MathFunctions;

int main(){

    bigint a;
    a="79827098175987";
    bigint b=(bigint)("8732875982759823789753298432");

    cout<<"GCD:"<<gcd(a,b)<<endl<<endl;
    cout<<"LCM:"<<lcm(a,b)<<endl<<endl;
    cout<<"Factorial:"<<factorial(50)<<endl<<endl;
    cout<<"Exponent:"<<pow(bigint(2),bigint(100))<<endl<<endl;
   


    return 0;
}