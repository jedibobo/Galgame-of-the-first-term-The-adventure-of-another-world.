#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>

int main()
{
	int dead4,goback4;
	char j; 
	while(1)
	{
		//system ("cls"); 
    	printf("已知自己有死亡轮回，但是自己实力太弱，但是帮还是不帮\n");
    	printf("1后退\n");
    	printf("2帮女主\n");
    	printf("3帮女仆\n");
    	printf("4去别的地方帮忙\n");
    	printf("5自己冲上去（有人阻拦），还执意去\n");
    	printf("请输入选择对应的数字：\n");
    	int choice42;
		scanf("%d",&choice42); 
    	switch(choice42)
	   {
	   		case 1 :
	   		{
	   			system("cls");
			    printf("突然怪兽冲向女主和女仆。\n你向那里跑去，想要保护女主和女仆。\n");Sleep(2000);
			    printf("可你做什么都是徒劳，好像这一切都是安排好的一样。\n");Sleep(2000);
			    printf("你想起之前的誓言。\n"); Sleep(2000);
				printf("......\n\n");
			    while (1)
				{
					if(kbhit())
					{
						j=getch();
						break;
					}	
				}  	
			    
				printf("从死亡轮回中回来的你明白这可能不是你想要的结果。\n");
				Sleep(3000);
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				system("cls");continue;
				dead4=1;
			}
	        break;
	        
			case 2 :
			{	
				system("cls");
				printf("女仆看你保护了女主，认为你的心愿是帮女主得到王位。\n她为了实现你这个愿望，向怪兽发起攻击，结果自己被秒。\n");
				Sleep(3000);
				printf("女仆被击落的那一刻看向了你，心满意足地笑了。\n");
				printf("可你根本不理解她为什么笑。\n");
				Sleep(3000);
				printf("前些天遇到困难时她拼命保护你的一幕浮现，你也想起了那个约定。\n\n");
				printf("......\n\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				printf("从死亡轮回中回来的你明白这可能不是你想要的结果。\n"); 
				Sleep(3000);
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				system("cls");continue;
	        	dead4=1; 
			}
	    	break;
	        
        	case 3 :
			{
				system("cls");
				printf("\n女主急于得到王位，于是自己冲上前去。\n怪物将其击杀。\n");
				printf("当你看到这一幕的时候一切都已经晚了。\n\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				printf("难道自己最开始的时候没有承诺要保护她吗？\n\n");Sleep(3000);
				printf("之前的一切一幕幕地浮现：\n你和她相识，决定跟随她保护她。\n");Sleep(2000);
				printf("你想和她约会，为此付出一切代价。\n忘记了死亡轮回的恐惧。\n\n");Sleep(4000);
				printf("可现在结果却是这样......\n");
				printf("......\n"); 
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				printf("从死亡轮回中回来的你明白这可能不是你想要的结果。\n"); 
				Sleep(3000);
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				system("cls");continue;
	    		dead4=1;
	    	}
			break;
	    	
			case 4 :
			{
				system("cls");
				printf("You win!\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						break;
					}	
				}  	
				goback4=0;
			}
			break;
		
	    	case 5 :
			{
				system("cls");
				printf("怪物将目标设为最弱的你。\n\n被攻击死亡前deethar救了你。请再选择\n");
	        	printf("1去\n");  
	        	printf("2不去\n");  
	        	int choice43;
	        	scanf("%d",&choice43);
				if(choice43==1)
				{
					dead4=1;
					printf("怪物将目标设为最弱的你。\n\n");
					printf("你被击杀。\n"); 
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
				else
	        	{
	        		dead4=1;
	        		while (1)
					{
						if(kbhit())
						{
							j=getch();
							system("cls");
							break;
						}
	        		}
	        		goback4=1;
	        	}
				break;
			}
	   		
		}
		if(goback4==0)
			break;	 
	} 
	return 0;
} 
