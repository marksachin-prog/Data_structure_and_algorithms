#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout<<"enter string"<<endl;
    getline(cin,str);
    int len=str.length();
    string temp;
    temp.resize(len);
    int i,j;
    for(i=0,j=len-1;i<len,j>=0;i++,j--)
    {
        temp[i]=str[j];
    }
    if(temp.compare(str)==0)
    {
    cout<<temp<<" "<<"palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    
    return 0;
}