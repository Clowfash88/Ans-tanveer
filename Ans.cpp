#include<iostream>
using namespace std;
int main()
{
	int Arr[5]={20,4,16,8,10};
	int i,j,tem;
	cout<<"Array the Number\n";
	for(i=0;i<5;i++){
	 for(j=i;j<5;j++){
	  if(Arr[i]>Arr[j+1]){
	   tem=Arr[i];
	   Arr[i]=Arr[j+1];
	   Arr[j+1]=tem;
     }}}
	 for(i=1;i<5;i++)
	  cout<<Arr[i]<<endl;
	   return 0;
	}
