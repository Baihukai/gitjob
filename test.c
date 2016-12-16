#include<string>
#include<iostream>
using namespace std;
int main(void){
string st,s;
int i,j,ln,sum;
char ch;
cout <<"Please enter an English sentence...\n";
while(s+=(ch=cin.get()),ch!='\n');
cout <<endl;
for(sum=i=0,ln=s.length();i<ln;i++){
if (s[i]>='A'&& s[i]<='Z'||s[i]>='a'&& s[i]<='z'||s[i]=='-')
st+=s[i];
else if(st!=""){
cout<<st<<endl;
sum++;
st="";
}
}
cout<<"\nA total of"<<sum<<"word(s).\n";
return 
}
