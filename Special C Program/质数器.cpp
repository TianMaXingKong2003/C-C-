#include<stdio.h>
int main()
{
	//������
	int x=0;
	
	
	printf("������������\n");
	scanf("%d",&x); 
	
	int i;
	for(i=x-1;i>=1;)
	{
		
		if(x%i==0)printf("\n����Ϊ��%d\n%d = %d * %d\n",i,x,i,x/i);
			
			i--;
	}	
 }
  
