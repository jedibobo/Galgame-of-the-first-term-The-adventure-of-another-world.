#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
int main()
{
	char i,k;
	int j=0,a=0;
	int choice=0;
	printf("��ѡ��һ�ַ�ʽ��ֻ�ܴ���һ�������Լ��ߡ�");
	printf("�����¼�ѡ��");
	printf("���س�ȷ�ϡ�\n");
	printf("->Ů��\n  Ů��\n  �Լ���\n");
	while(1)
	{
		
///		k=getch();
//		printf("%d\n",k);
 //       if(k==80)
 //       return 0;
 //		int choice=0;
		if(kbhit())
		{
			
			k=getch();
//			printf("%d",k);
			system("cls");
//			if(k==80)
//			continue;
			if(k==80)
			{
				if(choice==2)
				{
					choice=0;
				}
				else
				{
					choice+=1;
				}
			}
			else if(k==72)
			{
				if(choice==0)
				{
					choice=2;
				}
				else
				{
					choice-=1;
				}
			}
			else if(k==13&&j==0)
			{
				system("cls");
				printf("Ů�����̱�����!\n");
				printf("����Υ�����ԡ���һ��Ҫ����Ů�ͣ���\n");
				printf("You die!\n");
				j=j+1;
				continue;
			}
			else
			continue;
			if(choice==0)
				{
					printf("��ѡ��һ�ַ�ʽ��ֻ�ܴ���һ�������Լ��ߡ�");
					printf("�����¼�ѡ��");
					printf("���س�ȷ�ϡ�\n");
					printf("->Ů��\n");
					printf("  Ů��\n");
					printf("  �Լ���\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("Ů�����̱�����!\n");
				    	printf("����Υ�����ԡ���һ��Ҫ����Ů�ͣ���\n");
				    	printf("You die!\n");
					}
					else
					continue;
				}
				else if(choice==1)
				{
					printf("��ѡ��һ�ַ�ʽ��ֻ�ܴ���һ�������Լ��ߡ�");
					printf("�����¼�ѡ��");
					printf("���س�ȷ�ϡ�\n");
					printf("  Ů��\n");
					printf("->Ů��\n");
					printf("  �Լ���\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("Ů��������ɱ!\n");
				    	printf("����Υ�����ԡ���һ��Ҫ����Ů������\n");
				    	printf("You die!\n");
					}
					else
					continue;
				}
				else
				{
					printf("��ѡ��һ�ַ�ʽ��ֻ�ܴ���һ�������Լ��ߡ�");
					printf("�����¼�ѡ��");
					printf("���س�ȷ�ϡ�\n");
					printf("  Ů��\n");
					printf("  Ů��\n");
					printf("->�Լ���\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("��Ӧ�����˻ذ�Ȼ���\n");
				    	printf("��֮ǰ������˵Щʲô\n");
				    	printf("->�����ֻ�\n");
				    	printf("  ����������!\n");
				    	choice=0;
				    	while(1)
				    	{
				    		if(kbhit())
				    		{
				    			k=getch();
				    			
				    			system("cls");
				    			if(k==80)
				    			{
				    				if(choice==1)
				    				{
				    					choice=0;
									}
									else
									{
										choice+=1;
									}
								}
								else if(k==72)
				    			{
				    				if(choice==0)
				    				{
				    					choice=1;
									}
									else
									{
										choice-=1;
									}
								}
								else if(k==13&&a==0)
								{
									system("cls");
									printf("���������Ǳ����˰���\n"); 
									printf("You die!\n");
									a=a+1;
									continue;
								}
								else
								continue;
								if(choice==0)
								{
									printf("��Ӧ�����˻ذ�Ȼ���\n");
				   			 		printf("��֮ǰ������˵Щʲô\n");
				    				printf("->�����ֻ�\n");
				   				 	printf("  ����������!\n");
				   				 	i=getch();
				   				 	if(i==13)
				   				 	{
										system("cls");
										printf("���������Ǳ����˰���\n"); 
										printf("You die!\n");
									}
								}
								else
								{
									printf("��Ӧ�����˻ذ�Ȼ���\n");
				   			 		printf("��֮ǰ������˵Щʲô\n");
				    				printf("  �����ֻ�\n");
				   				 	printf("->����������!\n");
				   				 	i=getch();
				   				 	if(i==13)
				   				 	{
										system("cls");
										printf("����Υ�����ԡ���ֲ�и��\n"); 
										printf("You die!\n"); 
									}
								}
							}
						}
					}
					else
					continue;
				}
     
		}
	}
	getchar();
	system("cls");
	Sleep(1000);
	printf("�ټ�!\n");
	
	return 0;
}
