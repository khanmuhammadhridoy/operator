#include<bits/stdc++.h>
using namespace std;
int main()
{
string s;
char c;
cin>>c;
getline(cin,s);
s=c+s;
string st="";
for(int i=0;i<s.size();i++)
{
if(s[i]=='/' || s[i]=='*')
{
continue;
} else st+=s[i];
}
cout<<st<<endl;
return 0;
}