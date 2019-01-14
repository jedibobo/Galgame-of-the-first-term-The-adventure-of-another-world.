#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
int main()
{
	char i,k;
	int j=0,a=0;
	int choice=0;
	printf("请选择一种方式：只能带走一个或者自己走。");
	printf("按上下键选择，");
	printf("按回车确认。\n");
	printf("->女仆\n  女主\n  自己走\n");
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
				printf("女仆立刻被处死!\n");
				printf("由于违背誓言‘我一定要保护女仆！’\n");
				printf("You die!\n");
				j=j+1;
				continue;
			}
			else
			continue;
			if(choice==0)
				{
					printf("请选择一种方式：只能带走一个或者自己走。");
					printf("按上下键选择，");
					printf("按回车确认。\n");
					printf("->女仆\n");
					printf("  女主\n");
					printf("  自己走\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("女仆立刻被处死!\n");
				    	printf("由于违背誓言‘我一定要保护女仆！’\n");
				    	printf("You die!\n");
					}
					else
					continue;
				}
				else if(choice==1)
				{
					printf("请选择一种方式：只能带走一个或者自己走。");
					printf("按上下键选择，");
					printf("按回车确认。\n");
					printf("  女仆\n");
					printf("->女主\n");
					printf("  自己走\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("女主因悲伤自杀!\n");
				    	printf("由于违背誓言‘我一定要保护女主！’\n");
				    	printf("You die!\n");
					}
					else
					continue;
				}
				else
				{
					printf("请选择一种方式：只能带走一个或者自己走。");
					printf("按上下键选择，");
					printf("按回车确认。\n");
					printf("  女仆\n");
					printf("  女主\n");
					printf("->自己走\n");
					i=getch();
				    if(i==13)
				    {
				    	system("cls");
				    	printf("答应两个人回安然无恙\n");
				    	printf("走之前对他们说些什么\n");
				    	printf("->死亡轮回\n");
				    	printf("  我无力回天!\n");
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
									printf("不想让她们被命运安排\n"); 
									printf("You die!\n");
									a=a+1;
									continue;
								}
								else
								continue;
								if(choice==0)
								{
									printf("答应两个人回安然无恙\n");
				   			 		printf("走之前对他们说些什么\n");
				    				printf("->死亡轮回\n");
				   				 	printf("  我无力回天!\n");
				   				 	i=getch();
				   				 	if(i==13)
				   				 	{
										system("cls");
										printf("不想让她们被命运安排\n"); 
										printf("You die!\n");
									}
								}
								else
								{
									printf("答应两个人回安然无恙\n");
				   			 		printf("走之前对他们说些什么\n");
				    				printf("  死亡轮回\n");
				   				 	printf("->我无力回天!\n");
				   				 	i=getch();
				   				 	if(i==13)
				   				 	{
										system("cls");
										printf("由于违背誓言‘坚持不懈’\n"); 
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
	printf("再见!\n");
	
	return 0;
}
