#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
//Ϊ���㣬��#define����ظ���������滻 
#define P printf("��ѡ����Ҫ�����£�\n�����¼�ѡ�񣬰��س���ȷ�ϡ�\n");								
#define P0 printf("->�ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P1 printf("  �ӽ�Ů�����һ���\n->�ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P2 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n->ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P3 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n->�������˸�ù�ϵ��ȡ������\n");
int section2(int flag2);
int main()
{
	char k;
	printf("����ƽ���������У���Ů����Լ���ٽ���ȴ��֪Ϊ���Զ������������ع顣(�ع���ڳǱ���)\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			printf("����Ϊ���������������ĵ�һ���Σ���һ�μ���ǰ��ļƻ�������ִ����������ع顣\n");
			break;
		}
	}
	
	while (1)
	{
	 	if (kbhit())
		{
		    k=getch();
			printf("��һ�μ���ǰ��ļƻ�������ִ����������ع顣\n��ǰ�����˷�ĺ�Х���Լ������µ��䡣\n��һ�δ���������������Ϥ�ķ�ɫ��\n");
			 
		
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			k=getch();printf("�������Ҿ�Ȼ�Ǳ��Ǳ��������ڡ���Ҫ�ı���һ�����");
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	//Sleep(4000);
	//system("cls");
	printf("����������Ҫ���˽�һ�³Ǳ��е��ˣ�\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("--------------�Ǳ��е�����--------------\n");
	printf("1.���ˣ�������ǿ���ħ��ʦ\n 2.Ů��һblue\n 3.Ů�Ͷ�red\n 4.bookeeper��Ҳ��ǿ���ħ��ʦ\n\n");
	
	int flag2=0;
	while (1) 
	{
		
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
	//printf("%d",section2(flag2));
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
		if(kbhit())
		{
			k=getch();
			system("cls");
			if(k==80)
			{
				choice+=1;
			}
			else if(k==72)
			{
				choice+=3;
			}
			choice=(choice)%4;
			if(choice==0)
			{
				P			//Ϊ���㣬����#define����ظ���������滻(��ͬ) 
				P0
				if(getch()==13)
				{
					system("cls");
					printf("�㱻������ʵ��Ů�Ͷ����ˣ�����������˺�Ů����\n\n"); 
					return 1;//����ֵΪ1��ʾ������Ϸ��ʼ 
				}
				else continue;
			}
			else if(choice==1)
			{
				P
				P1
				if(getch()==13)
				{
					system("cls");
					printf("�㱻���������ˣ�����������˺�Ů�͡�\n\n"); 
					return 1;
				}
				else continue; 
			}
			else if(choice==2){
				P
				P2
				if(getch()==13)
				{
					system("cls");
					printf("��һ��������ݺ���ͼ��\n\n");
					return 1;
				}
				else continue;
			}
			else if(choice==3){
				P
				P3
				if(getch()==13)
				{
					if(flag2==2)
					{
						system("cls");return 1;
					} 
					else return 0;
				}
				else continue;
				
				
			}
		}
	}
	return 0;
 } 
