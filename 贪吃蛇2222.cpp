#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<windows.h>
#define time 150
int main()
{
	int tangx,tangy;
	tangx=29;tangy=32; 
	int n=4;int tx,ty,wx,wy;								//�ߵĳ�ʼ���� ,t ͷ��w β 
	int x=77;
	char k[41][51]={0};
	int i,j,m,p;
	int a,b;a=25;b=26;
	k[a][b]='#';k[a][b-1]='#';k[a][b-2]='#';k[a][b-3]='#';	//̰���߳�ʼ��λ�� 
	tx=25;ty=26;wx=25;wy=23;
	for(;;)
	{
		
		for(i=0;i<40;i++)
			for(j=0;j<50;j++)								//��ӡ��ά�����ȫ��Ԫ��
			{
				if(j==49)
					printf("%c\n",k[i][j]);
				else
					printf("%c",k[i][j]);	
			 }												
			  
		Sleep(time);
		
		if(wx==tangx&&wy==tangy)
		{
			k[tangx][tangy]='#';
			if(k[wx-1][wy]=='#')
				wx=wx+1;
			else if(k[wx+1][wy]=='#')
				wx=wx-1;
				else
					if(k[wx][wy-1]=='#')
						wy=wy+1;
					else
						wy=wy-1;
			tangx=rand()%40;
			tangy=rand()%40;
			k[tangx][tangy]='@'; 
		}
										
		if(kbhit()!=0)										//����ϡ��¡����� 
		{
			getch();x=getch();
			
			k[tangx][tangy]='@'; 
		}
		else
		{
			switch(x)
			{
				case 72:
				{
					k[tx-1][ty]='#';
					k[wx][wy]=0;
					tx=tx-1;
					if(k[wx][wy+1]=='#')
						wy=wy+1;
					else
					{
						if(k[wx][wy-1]=='#')
							wy=wy-1;
						else
						{
							if(k[wx-1][wy]=='#')
								wx=wx-1;
							else
								wx=wx+1;
						}
					}
								
					break;
				}
				case 80:
				{
					k[tx+1][ty]='#';
					k[wx][wy]=0;
					tx=tx+1;
					if(k[wx][wy+1]=='#')
						wy=wy+1;
					else
					{
						if(k[wx][wy-1]=='#')
							wy=wy-1;
						else
						{
							if(k[wx-1][wy]=='#')
								wx=wx-1;
							else
								wx=wx+1;
						}
					}
								
					break;
				}					
				case 75:
				{
					k[tx][ty-1]='#';
					k[wx][wy]=0;
					ty=ty-1;
					if(k[wx][wy+1]=='#')
						wy=wy+1;
					else
					{
						if(k[wx][wy-1]=='#')
							wy=wy-1;
						else
						{
							if(k[wx-1][wy]=='#')
								wx=wx-1;
							else
								wx=wx+1;
						}
					}
								
					break;
				}
				case 77:
				{
					k[tx][ty+1]='#';
					k[wx][wy]=0;
					ty=ty+1;
					if(k[wx][wy+1]=='#')
						wy=wy+1;
					else
					{
						if(k[wx][wy-1]=='#')
							wy=wy-1;
						else
						{
							if(k[wx-1][wy]=='#')
								wx=wx-1;
							else
								wx=wx+1;
						}
					}					
					break;
				}
			}
		}
		
		system("cls"); 
	}
}
