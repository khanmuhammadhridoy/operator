#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
char c;
cin>>c;
getline(cin,s);
s=c+s;
int count=0;
for(int i=0;i<s.size();i++)
{
if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='>' || 
s[i]=='<' || s[i]=='=')
{
count++;
}
}
cout<<"Total number of operator : "<<count<<endl;
return 0;
}
