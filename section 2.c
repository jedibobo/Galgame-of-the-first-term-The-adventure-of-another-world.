#include<stdio.h>
#include<stdlib.h>
#include<Windows.h> 
#include<conio.h>
//为方便，用#define命令将重复的输出简化替换 
#define P printf("请选择你要做的事：\n按上下键选择，按回车键确认。\n");								
#define P0 printf("->接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P1 printf("  接近女主，找机会\n->接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P2 printf("  接近女主，找机会\n  接近女仆一\n->什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P3 printf("  接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n->跟所有人搞好关系，取得信任\n");
/*
说明
用函数实现section2
若返回值为0，进入section3；返回值为1.回到游戏开头
合并时去掉main()段
*/
int section2(int flag2);//合并时去掉int main()段 
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
				P			//为方便，已用#define命令将重复的输出简化替换(下同) 
				P0
				if(getch()==13)
				return 1;//返回值为1表示返回游戏开始 
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
