#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <cstdlib>
using namespace std; 

int main(void)
{
    system("cls");
    setlocale(LC_ALL, "Portuguese");
    float const g=9.8;
    float a=0.0, b=0.0;

    cout<<"Qual a altura ? \n" ;
    cin >>a;

    b=sqrt(2*a)/g;
    
    cout <<"O tempo de Queda é :"<< b; 
    cout <<"\n"; 
    
    system("pause");
}

