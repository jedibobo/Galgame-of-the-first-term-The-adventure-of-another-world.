#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
 int main(){
 	char k;
	int j=0,a=0;
	int choice=0;
	printf("��ѡ���·��ʽ��");
	printf("�����¼�ѡ�񣬰��س���ȷ��\n");
	printf("->������·\n  ��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
	while(1)
	{
	if(kbhit())
	{
			k=getch();
			if (k==-32)  continue;
			system("cls");
			choice=(choice+1)%3;
			if(choice==0)
			{
					printf("��ѡ���·��ʽ��");
					printf("�����¼�ѡ�񣬰��س���ȷ��\n");
					printf("->������·\n  ��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
					if(getch()==13)
					{
						system("cls");
						printf("��Ͱ׷���Ůһ����һ����·������ˣ�����һ�������ùݣ��ù���ܾ���ͻȻ��һ��紵�����㱻�̴������ࡣ\n");
						printf("You die!\n");break;
					}
				
			}
			else if(choice==1)
			{
				printf("��ѡ���·��ʽ��");
				printf("�����¼�ѡ�񣬰��س���ȷ��\n");
				printf("  ������·\n->��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
				if(getch()==13)
				{
					system("cls");
					printf("�ڶ��쵽����У���֪���˰׷���Ů����ݣ�����ǰ����֧���ߵĳǱ�\n");break;
				}
			}
			else if(choice==2)
			{
				printf("��ѡ���·��ʽ��");
				printf("�����¼�ѡ�񣬰��س���ȷ��\n");
				printf("  ������·\n  ��·�ߵ�һ��ʱ����\n->��һ��·������·\n");
				if(getch()==13)
				{
					system("cls");
					printf("����·�ܰ�ȫ���㵽��һ����ׯ��ס�£��ڶ����뿪���ã���·�������˴��ӵķ���һ��ը����Ȼ�󿴵����ӻ����죬������������������㣬��ײ������\n");
					printf("You die!");	break;
				} 
			
			}
			
		}
	}
	return 0; 
}
