/*
Sequência de Fibonacci consiste numa sucessão infinita de números que obedecem um padrão em que cada elemento subsequente é a soma dos dois anteriores. Assim, após 0 e 1, vêm 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, etc.
O programa em c++ realiza essa sequencia através da recusividade para gerar esses valores
*/
/*
* Author:  Igor Vinicius Freitas de Souza
* GitHub: https://github.com/igor1043
* E-mail: igorviniciusfreitasouza@gmail.com
*/


#include<iostream>
using namespace std;

long fibo(int x);

int main(){
	int f;
	
	do{
		
		cout<<"\nDigite um numero <     >\b\b\b\b\b";
		cin>>f;
		
		cout<<"\nO numero de Fibonacci de " <<f<< " = <     >\b\b\b\b\b" <<fibo(f)<< "\n";
	
	}while(f>=0);
	
	cout<<"\n\n";
	return 0;
}
long fibo(int x){
	if(x==0)
		return 0;
	else
		if(x==1)
			return 1;
		else
			return fibo(x-2) + fibo(x-1);
}

