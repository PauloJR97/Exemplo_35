//35. Ler	um	número	inteiro	n.	Escrever	a	soma	de	todos	os	números	impares	de	1 até	n.

#include <iostream>
using namespace std;

int main() 
{
  int n, soma = 0, cont = 1;

  cout<<"Informe um valor para n: ";
  cin>>n;

  while(n > cont){
    if(cont % 2 != 0){
      soma += cont;
     
    }
    cont++;
  }
  cout<<endl;
  cout<<"Soma dos valores impares: "<<soma;
  return 0;
}
