//Question Print all possible subset using recursion

#include <iostream>
using namespace std;

void subset(string in, string op){
   if(in.length()==0){
       cout<<op<<" ";
       return;
   }
   
   string op2=op+in[0];
   
   in.erase(in.begin()+0);
   
   subset(in,op);
   subset(in,op2);
}

int main()
{
    string ip,op="";
    cin>>ip;
    subset(ip,op);
    return 0;
   
}