#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h> 
int main()
{
	char j;
	int flag1=1,flag2=1,flag3=1;
	system("cls"); 
	printf("赢得皇位后,一个魔法师教派黑红教发动起义。\n叛军屠杀百姓。\n王宫派出帝国军前往镇压。\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("本来势如破竹的魔法师们节节败退，眼看即将获得胜利。\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("皇城突然出现数万的黑红教的法师，包围王宫并夺取皇位，誓死向deethar效忠。\n");
	printf("这一切的出现太过突然，所有人都没有料到。\n"); 
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
	printf("Deethar：我之前所作作为，只是为了取得你的信任。\n");
	printf("以我的身份足以影响城堡中的人对你的判断。\n所以在城堡中你才会多次死亡，看你为了取得信任手忙脚乱的样子真是一种乐趣。\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			break;
		}
	}
	printf("你是不是觉得只有你自己知道死亡轮回？\n那么，我只能说我也拥有这种能力！\n我只是装作不知道而已。\n");
	printf("我也是利用死亡轮回才有了今天的势力和身份。\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls"); 
			break;
		}
	}
	printf("而我致力获取你信任的原因，就是我需要一个有相同能力的人作为祭品。\n这样我就有控制生死的能力，我也不会这样一直轮回下去了。\n"); 
	printf("所以现在给你一个机会：我可以放过一个你指定的人。\n其他和你相关的人都只能死。\n");
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
		printf("那你现在作出选择：\n");
		printf("1.放过女主\n");
		printf("2.放过女仆\n");
		printf("3.放弃选择:我无力回天。\n");
		scanf("%d",&choiceend);
		switch (choiceend)
		{
			case 1:
				{
					ce1+=1;
					printf("女仆被立刻处死！\n");
					if(flag3==1)
					{
						printf("女仆：为你而死我心甘情愿。\n");
						printf("（来自作者）你之前的誓言呢？？？\n不是发誓要保护女仆的吗？\n");
						
					}
					else if(flag3==0)
					{
						printf("女仆：为你而死我心甘情愿。\n");
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
					printf("女主伤心至极！\n");
					if(flag1==1)
					{
						printf("女主：果然一直以来都在骗我。\n");
						printf("你之前的承诺呢？？？\n");
						
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
						printf("女主：果然一直以来都在骗我。\n");
						printf("女仆：为你而死我心甘情愿。\n");
						Sleep(1000);
						while (1)
						{
							if(kbhit())
							{
								j=getch();
								break;
							}
						} 
						printf("（来自作者）你之前的誓言呢？？？\n不是发誓要保护女主的吗？\n不是发誓要保护女仆的吗？\n不是下定决心永不放弃的吗？\n");
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
	printf("无论如何选择 deethar说你的命运从来不在你的手里啊。\n你从一开始就是祭品，死亡轮回也该停止，你该真的去死了。\n");
	printf("男主：没有人能决定我的命运，我就算死千百次轮回千百次，也要让她们逃脱命运的操控。\n"); 
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
	printf("穿越回来，自己还躺在病床上。家人在旁边大哭，说已经没有心跳好一会了。\n男主：活着真好。"); 
	return 0;
}
