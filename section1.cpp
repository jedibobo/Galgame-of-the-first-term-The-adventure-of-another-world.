#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
 int main(){
 	char k;
	int j=0,a=0;
	int choice=0;
	printf("请选择赶路方式：");
	printf("按上下键选择，按回车键确认\n");
	printf("->继续赶路\n  赶路走到一半时返回\n  换一条路继续赶路\n");
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
					printf("请选择赶路方式：");
					printf("按上下键选择，按回车键确认\n");
					printf("->继续赶路\n  赶路走到一半时返回\n  换一条路继续赶路\n");
					if(getch()==13)
					{
						system("cls");
						printf("你和白发少女一行人一起上路，天黑了，到了一家乡下旅馆，旅馆里很静，突然有一阵风吹过，你被刺穿了心脏。\n");
						printf("You die!\n");break;
					}
				
			}
			else if(choice==1)
			{
				printf("请选择赶路方式：");
				printf("按上下键选择，按回车键确认\n");
				printf("  继续赶路\n->赶路走到一半时返回\n  换一条路继续赶路\n");
				if(getch()==13)
				{
					system("cls");
					printf("第二天到达城中，你知道了白发少女的身份，决定前往她支持者的城堡\n");break;
				}
			}
			else if(choice==2)
			{
				printf("请选择赶路方式：");
				printf("按上下键选择，按回车键确认\n");
				printf("  继续赶路\n  赶路走到一半时返回\n->换一条路继续赶路\n");
				if(getch()==13)
				{
					system("cls");
					printf("这条路很安全，你到达一个村庄并住下，第二天离开不久，在路上听到了村子的方向一阵爆炸声，然后看到村子火光冲天，你觉得有死亡凝视着你，你撞上树。\n");
					printf("You die!");	break;
				} 
			
			}
			
		}
	}
	return 0; 
}
