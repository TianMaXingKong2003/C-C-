#include<stdio.h>

 int JiaMi(char ch[])
 {
 	printf("\t\t��������Ҫ���ܵ����,�ո����á�X����ʾ,��������á�0����β \n\n");
 	char sh[10000];scanf("%s",&sh);ch=sh;
 	for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	 	
	printf("\n");
 	for(int i=0;ch[i]!='\0';i++)
 	{
 		ch[i]=ch[i]*19;	
	 }
	 for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	 	
	printf("������\n"); 	
	for(int i=0;ch[i]!='\0';i++)
 	{
 		ch[i]=ch[i]/19;	
	 }
	 for(int i=0;ch[i]!='\0';i++)
	 	printf("%d ",ch[i]);
	printf("\n�������\n\n");
 }
 
 int JieMi(char ch[])
 {
 	int s;scanf("%d",&s);
 	printf("\t\t��������Ҫ���ܵ���䣬��������á�0����β \n\n");
 	int sh[100000];
 	for(int i=0;sh[i]!='\0';i++)
	 {
	 	scanf("%d",&sh[i]);
	 	sh[i]=sh[i]/193937;
	 	i++; 
	 	scanf("%d",&sh[i]);
	 	sh[i]=sh[i]/193937;
	 	printf("%c%c",sh[i-1],sh[i]);
	 }
	 
	printf("\n�������\n\n");
 }
 
 int Case(char ch[])
 {
 	char sh[10000];
 	printf("����\n");
 	scanf("%s",&sh);
 	ch=sh;
 	if(ch[0]==0)printf("1\n");
 	if(ch[0]=='0')printf("2\n");
 	else
 	printf("%s\n",ch);
 	printf("%d %d\n",ch[0],ch[1]);
 	printf("%c%c%c%c%c%c%c%c\n",ch[0],ch[1],ch[2],ch[3],ch[4],ch[5],ch[6],ch[7]);
 }
 
 int main()
 {
 	printf("##################################################################\n\n\n");
 	printf("\t\t   �ǶԳ�ʽ����ϵͳ��������\n\n\n");
 	printf("##################################################################\n\n\n");
 	
 	for(;;)
 	{
 		for(;;)
 		{
		 
 		
	 		printf("\n\t\t������Ϣ����룺1 \t������Ϣ�����2\t\t");
	 		int x;char ch[10000];
	 		scanf("%d",&x);printf("\n\n");
	 		
	 		switch(x)
	 		{
	 			case 1:JiaMi(ch);break;
	 				
	 			case 2:JieMi(ch);break;
	 			
	 			case 3:Case(ch);break;
			 }
		}
	 }
	 	
 }
