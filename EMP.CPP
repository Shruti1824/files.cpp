#include<iostream.h>
#include<conio.h>
class emp
{
int eno;
char enm[10];
float sal;
public:
void accept()
{
cout<<"employee info";
cout<<"\n Emp no:";
cin>>eno;
cout<<"\n emp no";
cin>>enm;
cout<<"\n Emp salary";
cin >>sal;
}

void putdata()
{
cout<<"eployee info";
cout<<"\n ent no:";
cout<<eno;
cout<<"\n emp name:";
cout<<enm;
cout<<"\n emp salary";
cout<<sal;
}
};
int main()
{
emp e[20];
int n,i;
cout <<"how many employee";
cin>>n;
for(i=0;i<n;i++)
{
e[i].accept();
}
for(i=0;i<n;i++)
{
e[i].putdata();
}
getch();
return 0;
}

