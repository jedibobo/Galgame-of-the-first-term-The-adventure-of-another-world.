#include<stdio.h>
#include<stdlib.h>
#include<Windows.h> 
#include<conio.h>
//Ϊ���㣬��#define����ظ���������滻 
#define P printf("��ѡ����Ҫ�����£�\n�����¼�ѡ�񣬰��س���ȷ�ϡ�\n");								
#define P0 printf("->�ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P1 printf("  �ӽ�Ů�����һ���\n->�ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P2 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n->ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P3 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n->�������˸�ù�ϵ��ȡ������\n");
/*
˵��
�ú���ʵ��section2
������ֵΪ0������section3������ֵΪ1.�ص���Ϸ��ͷ
�ϲ�ʱȥ��main()��
*/
int section2(int flag2);//�ϲ�ʱȥ��int main()�� 
int main()
{
	
	while (1) 
	{
		int flag2=0;
		//int n=section2(flag2);
		//printf("%d",section2(flag2));
		if (section2(flag2)==1)
		{
		
			continue;
		}
		else
		{
			break;
		}
    }
	return 0;
	
} 
int section2(int flag2)
{
	char k=0;
	int choice=0;
	P
	P0
	while(1)
	{
		if(kbhit()){
			k=getch();
			system("cls");
			if(k==80)
			{
				choice+=145;
			}
			else if(k==72)
			{
				choice+=3;
			}
			choice=(choice)%4;
			if(choice==0)
			{
				system("cls");
				P			//Ϊ���㣬����#define����ظ���������滻(��ͬ) 
				P0
				if(getch()==13)
				return 1;//����ֵΪ1��ʾ������Ϸ��ʼ 
				else continue;
			}
			else if(choice==1){
				if(k==80)
			{
				choice+=1;
			}
			else if(k==72)
			{
				choice+=3;
			}
				choice=(choice)%4;
				P
				P1
				if(getch()==13)
				return 1;
				else continue; 
			}
			else if(choice==2)
			{
				if(k==80)
			{
				choice+=1;
			}
			else if(k==72)
			{
				choice+=3;
			}
			choice=(choice)%4;
				P
				P2
				if(getch()==13)
				return 1;
				else continue;
			}
			else if(choice==3)
			{
				if(k==80)
			{
				choice+=1;
			}
			else if(k==72)
			{
				choice+=3;
			}
				choice=(choice)%4;
				P
				P3
				if(getch()==13){
					if(flag2==2) return 1;
					else return 0;
				}
				continue;
				
			}
		}
	}
	return 0;
 } 
