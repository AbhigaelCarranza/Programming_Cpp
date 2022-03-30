#include <iostream>
using namespace std;

int mult(int a,int b)
{
    return a*b;
}

int main()
{
    int num_a,num_b;
    cin>>num_a;
    cin>>num_b;

    cout<<"La multiplicacion de "<<num_a<<"*"<<num_b<<" es igual a: "<<mult(num_a,num_b)<<endl;
    return 0;
}