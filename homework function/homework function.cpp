#include<iostream>
#include<iomanip>
using namespace std;
int chekNum(int,int);
int main()
{	
	cout<<"###Welcome to guessing nun=mber game###\n";
	cout<<"Secret number has been chosen\n";
	int num,num1,c=0;
	do{
	srand(time(NULL));
	cout<<"Guess the number(1 to 10):";
	cin>>num;
	num1=1+rand()%10;
	chekNum(num,num1);
	c=c+1;
	}while(num!=num1);
	cout<<"You made"<<" "<<c<<" "<<"guesses"<<endl;
	return(0);
}
int chekNum(int n,int n1)
{
	if(n<n1)
	{
		cout<<"The secret number is lower\n";
	}
	else if(n>n1)
	{
		cout<<"The secret number is higher\n";
	}
	else if(n==n1)
	{
		cout<<"Conggratulations!\n";
		cout<<"The secret number is"<<" "<<n1<<endl;
	}
	
	return(n,n1);
}