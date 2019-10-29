#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
int a,b,c,d,jumlah,hasil,punya;
cout<<"masukan ribuan = ";
cin>>a;
jumlah=a/1000;
cout<<"masukan ratusan = ";
cin>>b;
hasil=b/100;
cout<<"masukan puluhan = ";
cin>>c;
punya=c/10;
cout<<"masukan satuan = ";
cin>>d;

cout<<"hasil  "<<jumlah<<hasil<<punya<<d;
 
 return 0;
}
