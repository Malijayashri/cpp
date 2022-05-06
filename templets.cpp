include<iostream.h>
#include<conio.h>
template <class T>
T max(T a, T b)
{
	if(a>b)
		return a;
	else
		return b;
}
void main()
{
	clrscr();
	char ch1,ch2,ch3;
	cout<<"\n Enter two characters:";
	cin>>ch1>>ch2;
	cout<<"\n-------------------------------\n";
	cout<<"\n Maximum Character is :\n";

	ch3=max(ch1,ch2);

	cout<<"\nch3:\t"<<ch3;

	cout<<"\n--------------------------------\n";
	int a,b,c;
	cout<<"\n Enter two integers:\n";
	cin>>a>>b;
	cout<<"\n-------------------------------\n";
	cout<<"\n Maximum integer is :\n";

	c=max(a,b);

	cout<<"\nC:\t"<<c;
	getch();
}

