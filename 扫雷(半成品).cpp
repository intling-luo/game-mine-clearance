#include<stdio.h>
#include<stdlib.h>
#include<time.h> 
#define ROW 10//�� 
#define COL 10//�� 
#define NUM 10//�� 
int map[ROW+2][COL+2];

void GameInit()//��ʼ�� 
{
	srand((unsigned int )time(NULL));
	for(int i=0;i<=ROW+2;i++)
	{
		for(int j=0;j<COL+2;j++)
		{
			map[i][j]=0;
		}
	}
	for(int n=0;n<NUM;n++)//������ 
	{
		int r=rand()%ROW+1;//����� 
		int c=rand()%COL+1;//����� 
		
		if(map[r][c]==0)
		{
			map[r][c]=-1;
		}
	}
}

void GameNum()//ɨ��������
{
	for(int i=1;i<ROW+1;i++)
	{
		for(int j=1;j<COL+1;j++)
		{
			if(map[i][j]!=-1)
			{
				for(int m=i-1;m<=i+1;m++)
				{
					for(int n=j-1;n<=j+1;n++)
					{
						if(map[m][n]==-1)
						{
							map[i][j]++;
						}
					}
				}
			}
		}
	}
} 

void GameDraw()//��ӡ 
{
	for(int i=1;i<=ROW;i++)
	{
		for(int j=1;j<=COL;j++)
		{
			printf("%2d",map[i][j]);
		}
		printf("\n"); 
	}
}



int main()
{	
	GameInit();
	GameNum();
	GameDraw();
	
}
