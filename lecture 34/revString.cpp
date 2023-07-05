#include<iostream>
using namespace std ;

void revString(string &str, int i,int j)
{
    cout<<str<<" "<<i<< " "<<j<<endl;
  if(i>j)
  {
      return ;
  }
  swap(str[i],str[j]);

  revString(str, i+1, j-1);
  cout<<"byy shiv"<<endl;
}


int main(){
 string str = "abcdef";

 revString(str,0, str.size()-1);
 cout<<endl<<str<<endl;
 
}