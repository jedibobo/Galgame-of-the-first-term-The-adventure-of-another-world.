#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h> 
int main()
{
	char j;
	int flag1=1,flag2=1,flag3=1;
	system("cls"); 
	printf("Ӯ�û�λ��,һ��ħ��ʦ���ɺں�̷������塣\n�Ѿ���ɱ���ա�\n�����ɳ��۹���ǰ����ѹ��\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("�������������ħ��ʦ�ǽڽڰ��ˣ��ۿ��������ʤ����\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("�ʳ�ͻȻ��������ĺں�̵ķ�ʦ����Χ��������ȡ��λ��������deetharЧ�ҡ�\n");
	printf("��һ�еĳ���̫��ͻȻ�������˶�û���ϵ���\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	int end,choiceend;
	int ce1,ce2,ce3;
	printf("Deethar����֮ǰ������Ϊ��ֻ��Ϊ��ȡ��������Ρ�\n");
	printf("���ҵ��������Ӱ��Ǳ��е��˶�����жϡ�\n�����ڳǱ�����Ż�������������Ϊ��ȡ��������æ���ҵ���������һ����Ȥ��\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			break;
		}
	}
	printf("���ǲ��Ǿ���ֻ�����Լ�֪�������ֻأ�\n��ô����ֻ��˵��Ҳӵ������������\n��ֻ��װ����֪�����ѡ�\n");
	printf("��Ҳ�����������ֻز����˽������������ݡ�\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls"); 
			break;
		}
	}
	printf("����������ȡ�����ε�ԭ�򣬾�������Ҫһ������ͬ����������Ϊ��Ʒ��\n�����Ҿ��п�����������������Ҳ��������һֱ�ֻ���ȥ�ˡ�\n"); 
	printf("�������ڸ���һ�����᣺�ҿ��ԷŹ�һ����ָ�����ˡ�\n����������ص��˶�ֻ������\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	while (1)
	{
		system("cls");
		printf("������������ѡ��\n");
		printf("1.�Ź�Ů��\n");
		printf("2.�Ź�Ů��\n");
		printf("3.����ѡ��:���������졣\n");
		scanf("%d",&choiceend);
		switch (choiceend)
		{
			case 1:
				{
					ce1+=1;
					printf("Ů�ͱ����̴�����\n");
					if(flag3==1)
					{
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
						printf("���������ߣ���֮ǰ�������أ�����\n���Ƿ���Ҫ����Ů�͵���\n");
						
					}
					else if(flag3==0)
					{
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
					}
					while (1)
						{
							if(kbhit())
							{
								j=getch();
								system("cls");
								break;
							}
						}
				}
				break;
			case 2:
				{
					ce2+=1;
					printf("Ů������������\n");
					if(flag1==1)
					{
						printf("Ů������Ȼһֱ��������ƭ�ҡ�\n");
						printf("��֮ǰ�ĳ�ŵ�أ�����\n");
						
					}
					while (1)
						{
							if(kbhit())
							{
								j=getch();
								system("cls");
								break;
							}
						}
				}
				break;
			case 3:
				{
					ce3+=1;
					if(flag1==1&&flag3==1&&flag2==1)
					{
						printf("Ů������Ȼһֱ��������ƭ�ҡ�\n");
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
						Sleep(1000);
						while (1)
						{
							if(kbhit())
							{
								j=getch();
								break;
							}
						} 
						printf("���������ߣ���֮ǰ�������أ�����\n���Ƿ���Ҫ����Ů������\n���Ƿ���Ҫ����Ů�͵���\n�����¶�����������������\n");
						while (1)
						{
							if(kbhit())
							{
								j=getch();
								break;
							}
						} 
					}
				}
				break;
			default :
			{
				continue;
			}
			break;
		}
		if(ce1>2&&ce2>2&&ce3>1)
		{
			break;
		}
		
	}
	system("cls");
	printf("�������ѡ�� deethar˵������˴�������������ﰡ��\n���һ��ʼ���Ǽ�Ʒ�������ֻ�Ҳ��ֹͣ��������ȥ���ˡ�\n");
	printf("������û�����ܾ����ҵ����ˣ��Ҿ�����ǧ�ٴ��ֻ�ǧ�ٴΣ�ҲҪ�������������˵Ĳٿء�\n"); 
	Sleep(4000);
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("section 4 ends\n");
	printf("section 5:back\n");
	Sleep(4000);
	
	//0005
	system("cls");
	printf("��Խ�������Լ������ڲ����ϡ��������Աߴ�ޣ�˵�Ѿ�û��������һ���ˡ�\n������������á�"); 
	return 0;
}
