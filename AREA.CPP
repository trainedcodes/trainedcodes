#include<iostream.h>
#include<conio.h>
class circle
{
private:
int r;
float A;
public:
void getdata();
void display();
};
void circle::getdata()
{
cout<<"enter the value of r"<<endl;
cin>>r;
}
void circle::display()
{
A =3.14*r*r;
cout<<" area of circle is "<<A;
}
void main()
{
clrscr();
circle C;
C.getdata();
C.display();
getch();
}