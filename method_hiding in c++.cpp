#include<bits/stdc++.h>
using namespace std;
 class parent
 {
    public:
	
	int fun(int a)
	{
		cout<<"parent"<<endl;
	}	
	
	int fun()
	{
		cout<<"parent 2"<<endl;
	}	
	
 };
 
 class child : public parent
 {  
 public:
 //	using parent:: fun;
      int fun(char ch)
	  {
	  	cout<<"child"<<endl;
	  }	
 };
 
int main()
{
	child obj;
	obj.fun();
	obj.fun('e');
	 return 0;
}
