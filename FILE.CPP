#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
ofstream out;
int a[10]={1,2,3,4,5,6,7,8,9,0},b[10];
out.open("circle.cpp");
out.write((char*)&a,sizeof(a));
out.close();
ifstream in;
ofstream fp1,fp2;
in.open("circle.cpp");
in.read((char*)&b,sizeof(b));
fp1.open("even.txt");
fp2.open("odd.txt");
for(int i=0;i<10;i++)
{
if(b[i]%2==0)
fp1<<b[i]<<"";
else
fp2<<b[i]<<"";
}
in.close();
fp1.close();
fp2.close();
ifstream fp;
char ch;
fp.open("even.txt");
cout<<"the even content are" ;
while (fp)
{
fp.get(ch);
cout<<ch;
}
while (fp)
{
fp.get(ch);
cout<<ch;
}
fp.close();
getch();
}
