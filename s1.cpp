#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
int section1(int flag1);
int main(){
	
	//0001
	char i,k;
	int j=0,a=0;
	int choice=0;
	printf("请选择赶路方式：");
	printf("按上下键选择，按回车键确认\n");
	printf("->继续赶路\n  换一条路继续赶路\n");
	while(1)
	{
		if(kbhit())
		{
			k=getch();
			if (k==-32)  continue;//为了防止回车造成的换行。 
			system("cls");
			choice=(choice+1)%2;
			if(choice==0)
			{
				printf("请选择赶路方式：");
				printf("按上下键选择，按回车键确认\n");
				printf("->继续赶路\n  换一条路继续赶路\n");
				if(getch()==13)
				{
					system("cls");
					printf("你和白发少女一行人一起上路，天黑了，到了一家乡下旅馆，旅馆里很静，突然有一阵风吹过，你被刺穿了心脏。\n");
					printf("You die!\n");Sleep(4000);break;
				}
			}
			else if(choice==1)
			{
				printf("请选择赶路方式：");
				printf("按上下键选择，按回车键确认\n");
				printf("  继续赶路\n->换一条路继续赶路\n");
				if(getch()==13)
				{
					system("cls");
					printf("这条路很安全，你到达一个村庄并住下，第二天离开不久，在路上听到了村子的方向一阵爆炸声，然后看到村子火光冲天，你觉得有死亡凝视着你，你撞上树。\n");
					printf("You die!");	Sleep(4000);break;
				} 
			}
			
		}
	}
	Sleep(1500);
	system ("cls");
	printf("刺眼阳光使男主醒来，他又躺在马厩的草上。\n");
	printf("我这是在做梦吗？");printf("为什么又是这个地方？");
	printf("走到街上，发现周围全是兽人。\n自己也变成和他们一样，而且十分瘦弱（但感觉有些与众不同）\n");Sleep(4000);
	printf("不知为何上又被同样的兽人欺负。\n男主一脸懵：怎么又要死了？？！");Sleep(4000);
	system ("cls");
	printf("数个魔法球飞来，炸飞了男主周围的兽人。\n"); 
	printf("一个白发少女出现并救了男主，和白发少女一起出现的还有叫Deethar的猫精灵。\n周围人疯狂逃窜。"); Sleep(4000);
	system ("cls");
	printf("xxx,男主激动的叫出白发少女的名字。\n");printf("白发少女：你是谁啊？我们认识吗？\n"); Sleep(4000);system ("cls");
	printf("为什么她不认识我了？？？\n我这一定是在做梦！\n梦里的事情却那么真实，算了，不管了。\n");Sleep(4000);
	printf("在男主眼中他们再次简单交流，知道了她要找一件非常重要的东西。为了报答她，他仿佛再次发誓要保护她。\n然后他们一起赶路。\n") ;Sleep(5000);system ("cls");
	
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
			if(k==80)
			{
				choice=(choice+1);
			}
			else if (k==72)
			{
				choice=choice+2;
			}
			choice=(choice)%3;
			if(choice==0)
			{
					printf("请选择赶路方式：");
					printf("按上下键选择，按回车键确认\n");
					printf("->继续赶路\n  赶路走到一半时返回\n  换一条路继续赶路\n");
					if(getch()==13)
					{
						system("cls");
						printf("你和白发少女一行人一起上路，天黑了，到了一家乡下旅馆，旅馆里很静，突然有一阵风吹过，你被刺穿了心脏。\n");
						printf("You die!\n");
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
					printf("第二天到达城中，你知道了白发少女的身份，决定前往她支持者的城堡\n");
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
					printf("You die!");	
				} 
			
			}
			
		}
	} 
	return 0; 
}	 
