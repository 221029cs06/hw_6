#include<iostream>
using namespace std; 
main() 
{  
      int  m1[5][5], m2[5][5], m3[5][5];
      int  i, j, r, c;
      
      cin>>r;
     
      cin>>c;
      
   
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  	
	  		cin>>m1[i][j];
		}
	  } 
	  
	 
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  	
	  		cin>>m2[i][j];
		}
	  } 
	  
	
	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		m3[i][j]=m1[i][j]+m2[i][j];
		}
	  } 
	  


	  for(i=0;i<r;i++)
	  {
	  	for(j=0;j<c;j++)
	  	{
	  		cout<<"\t"<<m3[i][j];
		}
		
	  } 
	  
} 
