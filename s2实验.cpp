#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
#define P printf("��ѡ����Ҫ�����£�\n�����¼�ѡ�񣬰��س���ȷ�ϡ�\n");								
#define P0 printf("->�ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P1 printf("  �ӽ�Ů�����һ���\n->�ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P2 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n->ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P3 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n->�������˸�ù�ϵ��ȡ������\n");
int section2(int flag2); 
int main()
{
	int flag2=0;
	char k=0;
	int choice=0;
	P
	P0
	while(1)
	{
		if(kbhit())
		{
			k=getch();
			if (k==-32)  continue;
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
			if(choice==0){
				P			//Ϊ���㣬����#define����ظ���������滻(��ͬ) 
				P0
				if(getch()==13)
				return 1;//����ֵΪ1��ʾ������Ϸ��ʼ 
				else continue;
			}
			else if(choice==1){
				P
				P1
				if(getch()==13)
				return 1;
				else continue; 
			}
			else if(choice==2){
				P
				P2
				if(getch()==13)
				return 1;
				else continue;
			}
			else if(choice==3){
				P
				P3
				if(getch()==13){
					if(flag2==2) return 1;
					else return 0;
				}
				else continue;
				
			}
		}
	}
	
	return 0 ;
}
