#include<iostream.h>
#include<conio.h>
class student
{
 private:
   int rollno;
   char name[15];
 public:
  void getinfo();	
  void show();
};
class mark:public student
{
 private:
   int m1,m2,m3;
 public:
  void getdata();
  void display();
};

void student::getinfo()
{
cout<<"enter Roll number of student";
cin>>rollno;
cout<<"enter name of student ";
cin>>name;
}
void mark::getdata()
{
cout<<"enter marks of three subject "<<endl;
cout<<"enter marks of first subject";
cin>>m1;
cout<<"enter marks of second subject";
cin>>m2;
cout<<"enter marks of third subject";
cin>>m3;
}
void student::show()
{
cout<<"\n\nRoll number of Student is:- "<<rollno<<endl;
cout<<"Name of Strudent is:- "<<name<<endl;
}
void mark::display()
{
cout<<"Marks of Three subjects are"<<endl;
cout<<"Marks of First subject is:-  "<<m1<<endl;
cout<<"Marks of Second subject is:-  "<<m2<<endl;
cout<<"Marks of Third subject is:-  "<<m3;

}
void main()
{
clrscr();
mark m;
m.getinfo();
m.getdata();
m.show();
m.display();
getch();
}
