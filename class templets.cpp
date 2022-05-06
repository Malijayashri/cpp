#include<iostream.h>
#include<conio.h>

template<class T1, class T2>
class Test
{
public:
Test(T1 a, T2 b)//constructor
{
	cout<<a<<"\t"<<b;
}

void swap(T1 x, T2 y)
{
	T1 t;
	t=x;
	x=y;
	y=t;
	cout<<"\nx :"<<x<<"\t y :"<<y;
}
};

void main()
{
	clrscr();
	
	int p,q;
	cout<<"\n Enter two integer for swap x & y:";
	cin>>p>>q;
	cout<<"\n Before swap x & y :\n";
	Test<int,int>test1(p,q);
	cout<<"\n After swap x & y: \n";
	test1.swap(p,q);

	char a,b;
cout<<"\n Enter two Character for swap x & y:";
	cin>>a>>b;
	cout<<"\n Before swap x & y :\n";
	Test<char,char>test2(a,b);
	cout<<"\n After swap x & y: \n";
	test2.swap(a,b);
	getch();
}
