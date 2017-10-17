//Programa que calcula la suma de números pares del 1 al 20
//Marlene Guerra Santiago
//17 de Octubre de 2017

#include <iostream>
using namespace std;

int main ()
{
  int sum=0;
  int count=1;
  while (count<21){
    if ((count%2)<=0)
      {
	sum=sum+count;
      }
    count++;
  }
  cout<<"suma"<<sum<<endl;
  return 0;
}
