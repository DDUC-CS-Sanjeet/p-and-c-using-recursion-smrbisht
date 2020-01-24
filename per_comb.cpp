#include<iostream>
using namespace std;
int permutation(int n, int r)
{
   if(r==0)
  {
  return 1;}
  else
 {
   return (1.0*n)*permutation(n-1,r-1);
}
}
                                                                                                                                                                                                     
  
int combination(int n, int r)

{
	if(r==0)
	{
	return 1;
}

  	else
  {
	  	return ((1.0*n)*combination(n-1,r-1))/r;
}
}


int main()
{
   try
   {
	int n,r;
	cout<<" ENTER VALUES IN :";
	cout<<"\n N = ";
	cin>>n;
	cout<<" ENTER VALUES IN R :";
	cout<<"\n R = ";
	cin>>r;
	if(n<0||r<0)
	throw 18;
	else
	if(n<r)
	throw 18;
	else
	{
	float p=permutation(n,r);
	cout<<" PERMUTATION : "<<p;
	double c=combination(n,r);
	cout<<"\n COMBINATION : "<<c;
    }
    }
    catch(int i)
    {
	cout<<" CAUGHT AN EXCEPTION !!! ARGUMENT NOT DEFINE ";
}
  return 0;

}
