#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#include<conio.h>
#include<time.h>

#define time 300			//���÷��������ʱ���� 
using namespace std;

int Fkuai(){
							//��һ�� 
	printf("EEEE");
	
	printf(" E");
	printf(" E");
	printf(" E");
	printf(" E");
	
							//�ڶ��� 
	printf("EE");
	printf("EE");
	
							//������	4�ֱ仯 
	printf("  E"); 
	printf("EEE"); 
	
							//������	4�ֱ仯
	printf(" E "); 
	printf("EEE");
	
							//������	4�ֱ仯
	printf("E  "); 
	printf("EEE");						 
}  

int jiemian()
{
	
}

int weilan()
{
	printf("0 #                  #");
	printf("1 #                  #");
	printf("2 #                  #");
	printf("3 #                  #");
	printf("4 #                  #");
	printf("5 #                  #");
	printf("6 #                  #");
	printf("7 #                  #");
	printf("8 #                  #");
	printf("9 #                  #");
	printf("10#                  #");
	printf("11#                  #");
	printf("12#                  #");
	printf("13#                  #");
	printf("14#                  #");
	printf("15#                  #");
	printf("16####################");
 } 
int main()
{
	
	int k[100][100]={0};			//���ò���ʼ����Ϸ���� 
	
	int z=0;					//ѡ����ַ��� 
	int x=0; 					//ѡ����ַ���
	int y=0;					//����ֵ 
	int i=0;int j=0; 			//���� 
	int pz=0; 						//��ײ���� 0Ϊ��ײ 
	int f1x,f1y,f2x,f2y,f3x,f3y,f4x,f4y;
	 
	 for(;;)					//��Ϸ��ʼ 
	 {
	 	for(i=0;i<16;i++)
		{
			k[i][0]='#';
			k[i][21]='#';
		}
		for(j=0;j<22;j++)
			k[16][j]='#';
	 	
		if(pz==0)
		{
	
			z=rand()%5+1;				//����������� 
			
		 	switch(z)
		 	{
		 		case 1:{x=rand()%2+1;
		 			switch(x)
		 			{
		 				case 1:{
		 					f1x=0;f1y=9;f2x=0;f2y=10;f3x=0;f3y=11;f4x=0;f4y=12;
		 					
		 					k[f1x][f1y]='E';k[f2x][f2y]='E';
							k[f3x][f3y]='E';k[f4x][f4y]='E';
							break;
						 }	
						 case 2:{
						 	f1x=0;f1y=11;f2x=1;f2y=11;f3x=2;f3y=11;f4x=3;f4y=11;
						 	k[f1x][f1y]='E';k[f2x][f2y]='E';
							k[f3x][f3y]='E';k[f4x][f4y]='E';
							break;
						 }
					 }
					break;
				 }
		 			
		 		case 2:{
			 				f1x=0;f1y=10;f2x=0;f2y=11;f3x=1;f3y=10;f4x=1;f4y=11;
							k[f1x][f1y]='E';k[f2x][f2y]='E';
							k[f3x][f3y]='E';k[f4x][f4y]='E';
					break;
				 }
		 			
		 		case 3:{x=rand()%4+1;
		 				switch(x)
		 				{
		 					case 1:{
		 						f1x=0;f1y=11;f2x=1;f2y=9;f3x=1;f3y=10;f4x=1;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
		 						
								break;
							 }
							 case 2:{
							 	f1x=0;f1y=10;f2x=0;f2y=11;f3x=1;f3y=11;f4x=2;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 3:{
							 	f1x=0;f1y=10;f2x=0;f2y=11;f3x=0;f3y=12;f4x=1;f4y=10;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 4:{
							 	f1x=0;f1y=10;f2x=1;f2y=10;f3x=2;f3y=10;f4x=2;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
						 }
					break;
				 }
		 			
		 		case 4:{x=rand()%4+1;
		 			switch(x)
		 				{
		 					case 1:{
		 						f1x=0;f1y=9;f2x=1;f2y=9;f3x=1;f3y=10;f4x=1;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
		 						
								break;
							 }
							 case 2:{
							 	f1x=0;f1y=11;f2x=1;f2y=11;f3x=2;f3y=10;f4x=2;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 3:{
							 	f1x=0;f1y=10;f2x=0;f2y=11;f3x=0;f3y=12;f4x=1;f4y=12;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 4:{
							 	f1x=0;f1y=10;f2x=0;f2y=11;f3x=1;f3y=10;f4x=2;f4y=10;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
						 }
					break;
				 }
		 			
		 		case 5:{x=rand()%4;
		 			switch(x)
		 				{
		 					case 1:{
		 						f1x=0;f1y=11;f2x=1;f2y=10;f3x=1;f3y=11;f4x=1;f4y=12;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
		 						
								break;
							 }
							 case 2:{
							 	f1x=0;f1y=11;f2x=1;f2y=10;f3x=1;f3y=11;f4x=2;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 3:{
							 	f1x=0;f1y=10;f2x=0;f2y=11;f3x=0;f3y=12;f4x=1;f4y=11;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
							 case 4:{
							 	f1x=0;f1y=10;f2x=1;f2y=10;f3x=2;f3y=10;f4x=1;f4y=10;
								k[f1x][f1y]='E';k[f2x][f2y]='E';
								k[f3x][f3y]='E';k[f4x][f4y]='E';
								break;
							 }
						 }
					break;
					break;
				 }
		 			
			 }	
			pz=1;
		} 
								   //����׹�� 
			k[f1x][f1y]=0;k[f2x][f2y]=0;
			k[f3x][f3y]=0;k[f4x][f4y]=0;					   
								   
			k[f1x+1][f1y]='E';k[f2x+1][f2y]='E';
			k[f3x+1][f3y]='E';k[f4x+1][f4y]='E';
			
		  	f1x++;f2x++;f3x++;f4x++;
		  	
	 	
	 	
	 	if(kbhit()!=0)			//����ϡ��¡����� 
		{
			getch();y=getch();
			switch(y)
			{
				case 72:{							//printf("��\n");
					switch(z)
					{
						case 1:{
							switch(x){
								case 1:{
									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;
									
									k[f3x-1][f3y]='E';k[f3x][f3y]='E';
									k[f3x+1][f3y]='E';k[f3x+1][f3y]='E';
									
									f1x=f3x+2;f1y=f3y;f2x=f3x+1;f2y=f3y;
									f4x=f3x-1;f4y=f3y;
									
									x=2;
									break;
								}
								case 2:{
									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;
									
									k[f3x][f3y-2]='E';k[f3x][f3y-1]='E';
									k[f3x][f3y]='E';k[f3x][f3y+1]='E';
									
									f1x=f3x;f1y=f3y-2;f2x=f3x;f2y=f3y-1;
									f4x=f3x;f4y=f3y+1;
									
									x=1;
									break;
								}
							}
							
							break;
						}
						case 2:{
							 
							break;
						}
						case 3:{
							switch(x){
								case 1:{
									

									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;k[f4x][f4y]=0;
									
									k[f4x-1][f4y]='E';k[f4x][f4y]='E';
									k[f4x+1][f4y]='E';k[f4x-1][f4y-1]='E';
									
									f1x=f4x-1;f1y=f4y-1;f2x=f4x-1;f2y=f4y;
									f3x=f4x;f3y=f4y;f4x=f4x+1;f4y=f4y;
									
									x=2;
									break;
								}
								case 2:{
									
									
									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;k[f4x][f4y]=0;
									
									k[f2x][f2y-1]='E';k[f2x][f2y]='E';
									k[f2x][f2y+1]='E';k[f2x+1][f2y-1]='E';
									
							
									f3x=f2x;f3y=f2y+1;f4x=f2x+1;f4y=f2y-1;
									
									x=3;
									
									break;
								}
								case 3:{
									
									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;k[f4x][f4y]=0;
									
									k[f1x][f1y]='E';k[f1x+1][f1y]='E';
									k[f1x+2][f1y]='E';k[f1x+2][f1y+1]='E';
									
									f2x=f1x+1;f2y=f1y;
									f3x=f1x+2;f3y=f1y;f4x=f1x+2;f4y=f1y+1;
									
									x=4;
									
									break;
								}
								case 4:{
									
									
									k[f1x][f1y]=0;k[f2x][f2y]=0;
									k[f4x][f4y]=0;k[f4x][f4y]=0;
									
									k[f2x][f2y]='E';k[f2x][f2y-1]='E';
									k[f2x][f2y+1]='E';k[f2x-1][f2y+1]='E';
									
									f1x=f1x;f1y=f1y+1;f2x=f2x;f2y=f2y-1;
									f3x=f3x-1;f3y=f3y;f4x=f4x-1;f4y=f4y;
									
									x=1;
									
									break;
								}
							}
							break;
						}
						case 4:{
							
							break;
						}
						case 5:{
							
							break;
						}
					}
					break;
				}
				
				case 80:{							//printf("��\n");
					switch(z)
					{
						case 1:{
							
							break;
						}
						case 2:{
							
							break;
						}
						case 3:{
							
							break;
						}
						case 4:{
							
							break;
						}
						case 5:{
							
							break;
						}
					}
					break;
				}
				
				case 75:{							//printf("��\n");
					k[f1x][f1y]=0;k[f2x][f2y]=0;
					k[f3x][f3y]=0;k[f4x][f4y]=0;					   
										   
					k[f1x][f1y-1]='E';k[f2x][f2y-1]='E';
					k[f3x][f3y-1]='E';k[f4x][f4y-1]='E';
					
				  	f1y--;f2y--;f3y--;f4y--;
					break;
				}
				
				case 77:{							//printf("��\n");
					k[f1x][f1y]=0;k[f2x][f2y]=0;
					k[f3x][f3y]=0;k[f4x][f4y]=0;
										   
					k[f1x][f1y+1]='E';k[f2x][f2y+1]='E';
					k[f3x][f3y+1]='E';k[f4x][f4y+1]='E';
			
		  			f1y++;f2y++;f3y++;f4y++;
					break;
				}
			}
		 } 
	 
	 													//��ײ���	
	 													
	 	if(k[f1x+1][f1y]=='#'||k[f2x+1][f2y]=='#'||k[f3x+1][f3y]=='#'||k[f4x+1][f4y]=='#')
		 {
		 	k[f1x][f1y]='#';k[f2x][f2y]='#';
			k[f3x][f3y]='#';k[f4x][f4y]='#';
			pz=0;
		 }				 
	 
	 	for(i=0;i<25;i++)			//��ʾ��Ϸ 
	 		for(j=0;j<25;j++)
	 		{
	 			if(j==21)
	 			{
	 					printf("%c\n",k[i][j]);break;	
				 }
				else
					printf("%c",k[i][j]);
					
			 }
			 
		//printf("%d %d %d %d %d %d %d %d			%d\n",f1x,f1y,f2x,f2y,f3x,f3y,f4x,f4y,pz);	 
		//printf("%c%c%c%c\n",k[f1x][f1y],k[f2x][f2y],k[f3x][f3y],k[f4x][f4y]);	 
		//printf("\n\n\t%d  %d\n",z,x);
	 	Sleep(time);if(k[f1x+1][f1y]=='#'||k[f2x+1][f2y]=='#'||k[f3x+1][f3y]=='#'||k[f4x+1][f4y]=='#')
			{
		
				Sleep(time);Sleep(time);Sleep(time);Sleep(time);Sleep(time);Sleep(time);Sleep(time);Sleep(time);
			}
	 	system("cls");
	 }
	 
	
 } 
