#include<stdio.h>
#include<stdlib.h>
#include<windows.h> 
#include<conio.h>
#define P printf("请选择你要做的事：\n按上下键选择，按回车键确认。\n");								
#define P0 printf("->接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P1 printf("  接近女主，找机会\n->接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P2 printf("  接近女主，找机会\n  接近女仆一\n->什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P3 printf("  接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n->跟所有人搞好关系，取得信任\n");
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
				P			//为方便，已用#define命令将重复的输出简化替换(下同) 
				P0
				if(getch()==13)
				return 1;//返回值为1表示返回游戏开始 
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
