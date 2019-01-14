#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
//为方便，用#define命令将重复的输出简化替换 
#define P printf("请选择你要做的事：\n按上下键选择，按回车键确认。\n");								
#define P0 printf("->接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P1 printf("  接近女主，找机会\n->接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P2 printf("  接近女主，找机会\n  接近女仆一\n->什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P3 printf("  接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n->跟所有人搞好关系，取得信任\n");
int section2(int flag2);
int main()
{
	char k;
	printf("看似平静的生活中，和女主的约会临近。却不知为何自动触发了死亡回归。(回归后还在城堡中)\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			printf("他以为这是他在这里做的第一场梦，再一次继续前面的计划，结果又触发了死亡回归。\n");
			break;
		}
	}
	
	while (1)
	{
	 	if (kbhit())
		{
		    k=getch();
			printf("再一次继续前面的计划，结果又触发了死亡回归。\n死前听到了风的呼啸，自己从悬崖跌落。\n再一次触发，他看到了熟悉的发色。\n");
			 
		
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			k=getch();printf("男主：我竟然是被城堡里的人灭口。我要改变这一结果。");
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
	printf("男主：我需要先了解一下城堡中的人！\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("--------------城堡中的人物--------------\n");
	printf("1.主人：王城最强大的魔法师\n 2.女仆一blue\n 3.女仆二red\n 4.bookeeper：也是强大的魔法师\n\n");
	
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
				P			//为方便，已用#define命令将重复的输出简化替换(下同) 
				P0
				if(getch()==13)
				{
					system("cls");
					printf("你被城主忠实的女仆盯上了，她觉得你会伤害女主。\n\n"); 
					return 1;//返回值为1表示返回游戏开始 
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
					printf("你被城主盯上了，他觉得你会伤害女仆。\n\n"); 
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
					printf("大家怀疑你的身份和意图。\n\n");
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
