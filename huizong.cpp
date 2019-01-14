#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#define P printf("按enter进入选择。\n请选择你要做的事：\n按上下键选择，按回车键确认。\n");								
#define P0 printf("->接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P1 printf("  接近女主，找机会\n->接近女仆一\n  什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P2 printf("  接近女主，找机会\n  接近女仆一\n->什么人都不理，在这里混\n  跟所有人搞好关系，取得信任\n");
#define P3 printf("  接近女主，找机会\n  接近女仆一\n  什么人都不理，在这里混\n->跟所有人搞好关系，取得信任\n");
int section2(int flag2);
int main()
{
	char i,k;
	
	//0000 

	printf("      **\n");
	printf("    *    *\n");
	printf("          *\n");
	printf("       *\n");
	printf("          *\n");
	printf("   *     *\n");
	printf("      **\n");
	Sleep(1000);
	system("cls");
	printf("      **\n");
	printf("    *    *\n");
	printf("   *      *\n");
	printf("         *\n");
	printf("        *\n");
	printf("       *\n");
	printf("    ********\n");
	Sleep(1000);
	system("cls");
	printf("       *\n");
	printf("     * *\n");
	printf("    *  *\n");
	printf("       *\n");
	printf("       *\n");
	printf("       *\n");
	printf("     ******\n");
	Sleep(1000);
	system("cls");
	printf("男主得了一场大病，高烧不退（感觉自己要die了）昏迷中发生穿越，当他从异世界醒来时，躺在马厩中的草上（一阵头痛，但无病痛）");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("走到街上，发现周围全是兽人。\n自己也变成和他们一样，而且十分瘦弱（但感觉有些与众不同）\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("不知为何上来就被兽人欺负，（大概是这些人天天被别人打吧）。\n男主一脸懵：怎么换了个地方又要死了？？！");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("数个魔法球飞来，炸飞了男主周围的兽人。\n"); 
	printf("一个白发少女出现并救了男主，和白发少女一起出现的还有叫Deethar的猫精灵。\n周围人疯狂逃窜。"); 
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("简单交流后，知道了她要找一件非常重要的东西。为了报答她，他发誓要保护她。\n然后他们一起赶路。\n") ;
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	} 
	int flag1=1;
	printf("section 0 ends.\n");
	printf("section 1 :死亡轮回");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	
	
	
	//0001
	
	int a=0;
	int choice=0;
	printf("请选择赶路方式：");
	printf("按上下键选择，按回车键确认\n");
	printf("->继续赶路\n  换一条路继续赶路\n");
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
					printf("->继续赶路\n  换一条路继续赶路\n");
					if(getch()==13)
					{
						system("cls");
						printf("你和白发少女一行人一起上路，天黑了，到了一家乡下旅馆，旅馆里很静，突然有一阵风吹过，你被刺穿了心脏。\n");
						printf("You die!\n");
						while (1)
						{
							if(kbhit())
							{
								k=getch();
								system("cls");
								break;
							}
						}
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
					printf("You die!");	
					while (1)
					{
						if(kbhit())
						{
							k=getch();
							system("cls");
							break;
						}
					}
				} 
			}
		}
	}
	
	printf("刺眼阳光使男主醒来，他又躺在马厩的草上。\n");
	printf("我这是在做梦吗？");printf("为什么又是这个地方？");
	printf("走到街上，发现周围全是兽人。\n自己也变成和他们一样，而且十分瘦弱（但感觉有些与众不同）\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("不知为何上又被同样的兽人欺负。\n男主一脸懵：怎么又要死了？？！");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}

	printf("数个魔法球飞来，炸飞了男主周围的兽人。\n"); 
	printf("一个白发少女出现并救了男主，和白发少女一起出现的还有叫Deethar的猫精灵。\n周围人疯狂逃窜。");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	
	printf("xxx,男主激动的叫出白发少女的名字。\n");printf("白发少女：你是谁啊？我们认识吗？\n"); 
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("为什么她不认识我了？？？\n我这一定是在做梦！\n梦里的事情却那么真实，算了，不管了。\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			break;
		}
	}
	printf("在男主眼中他们再次简单交流，知道了她要找一件非常重要的东西。为了报答她，他仿佛再次发誓要保护她。\n然后他们一起赶路。\n") ;
		while (1)
		{
			if(kbhit())
			{
				k=getch();
				system("cls");
				break;
			}
		}
	
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
					printf("第二天到达城中，你知道了白发少女是王位的候选人，大家决定前往她支持者的城堡\n");
					break;
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
	printf("section 1 ends.\n");
	printf("section 2 :永无明日\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	
	//0002
	char h;
	printf("看似平静的生活中，和女主的约会临近。却不知为何自动触发了死亡回归。(回归后还在城堡中)\n");
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			printf("他以为这是他在这里做的第一场梦，再一次继续前面的计划，结果又触发了死亡回归。\n");
			break;
		}
	}
	
	while (1)
	{
	 	if (kbhit())
		{
		    h=getch();
			printf("再一次继续前面的计划，结果又触发了死亡回归。\n死前听到了风的呼啸，自己从悬崖跌落。\n再一次触发，他看到了熟悉的发色。\n");
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			printf("男主：我竟然是被城堡里的人灭口。我要改变这一结果。\n");
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			system("cls");
			break;
		}
	}
	printf("不就这么点绝望吗，我才不会放弃。\n"); 
	int flag2=1;
	printf("男主：我需要先了解一下城堡中的人！\n");
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			system("cls");
			break;
		}
	}
	printf("--------------城堡中的人物--------------\n");
	printf("1.主人：王城最强大的魔法师\n 2.女仆一blue\n 3.女仆二red\n 4.bookeeper：也是强大的魔法师\n\n");
	

	while (1) 
	{
		if (section2(flag2)==1)
		{
			continue;
		}
		else
		{
			break;
		}
    }
    system("cls");
    printf("section 2 ends.\n");
	printf("section 3 :王权之战");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	
	//0003	
	int choice4,dead4,goback4;
	int flag3;
	char j;
	printf("男主听闻远方发生变故，担心女主在争夺中受伤。\n");
	printf("然后和女仆一起出发前往。\n路上，遇上一个破败的村庄，原本打算停留，结果发现村里的人全被屠杀。");
	printf("赶路过程遇到伏击。");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}	
	}  
	while(1)
	{
		printf("请进行选择：\n");
		printf("1、自己走，相信她会打败敌人。\n");
		printf("2、自己参与战斗。\n");
		printf("请输入选项所对应的数字\n");
		scanf("%d",&choice4); 
		if(choice4==1)
		{
			dead4=1;
			printf("女仆被一群人围攻。\n你回头看见她快要被人杀害的一幕。\n");
	 		printf("她虽然是笑着的。\n可是你却忍不住心中的痛苦冲了回去。\n"); 
			while (1)
			{
				if(kbhit())
				{
					j=getch();
					system("cls");
					break;
				}	
			} 
			break;   	//用于返回出生点 
		}
		else if(choice4==2)
		{
			dead4=1;
			printf("敌人嘲笑着，手中的刀刃挥向了你。\n");
	 		while (1)
			{
				if(kbhit())
				{
					j=getch();
					system("cls");
					break;
				}	
			}  
			break;
		}
	} 
	while (1)
	{
		printf("我...我该怎么办？\n");Sleep(3000);system("cls");
		printf("现在进退无路，还有远方可能遇到危险的女主...\n");Sleep(5000);
		printf("我...我该怎么办？\n");Sleep(3000);
		printf("我...我该怎么办？\n");Sleep(1000);
		printf("我...我该怎么办？\n");Sleep(1000);
		while (1)
		{
			if(kbhit())
			{
				j=getch();
				system("cls");
				break;
			}	
		}  
		printf("...或许死亡不是那么可怕。\n");Sleep(3000);
		system("cls");
		printf("请进行选择：\n");
		printf("1、自己走，相信她会打败敌人。\n");
		printf("2、自己参与战斗。\n");
		printf("3、利用死亡轮回帮助找出敌人的弱点\n");
		printf("请输入选项所对应的数字\n");
		scanf("%d",&choice4); 
		if(choice4==1||choice4==2)
		{
			if(choice4==1)
			{
				dead4=1;
				printf("女仆被一群人围攻。\n你回头看见她快要被人杀害的一幕。\n");
	 			printf("她虽然是笑着的。\n可是你却忍不住心中的痛苦冲了回去。\n"); 
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				} 
				   	//用于返回出生点 
			}
			else if(choice4==2)
			{
				dead4=1;
				printf("敌人嘲笑着，手中的刀刃挥向了你。\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}    	//用于返回出生点 
			}
			continue;
		}
		else if(choice4==3)
		{
			printf("是否下定决心一定要保护女仆！\n是请输入1，否则输入2\n");
	 		int protect;
	 		scanf("%d",&protect);
	 		printf("\n");
	        if(protect==1)
	        {
	       		flag3=1;
		    }
		   else
		   flag3=0;  //立flag3 。
		   printf("多次死亡，男主虽然经历着一次次死亡与轮回的恐惧。可你并不惧怕，只为你和女仆能脱困并保全。和女仆的关系变好.\n");
		   while (1)
			{
				if(kbhit())
				{
					j=getch();
					system("cls");
					break;
				}	
			}  
		   break;
		} 
	}
	
	printf("赶到皇城，遇到女主。\n得知她被圣骑士尤吉欧所救。\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}	
	}  		
	printf("大臣给下的目标：打败给人们造成不安的异兽xx的候选人可以得到皇位。");
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
	printf("各路人马都整装待发，前往怪兽出现的地方。\n");
	printf("路上一片白雾，十分异常，可是没有人对此过多注意。\n");
	printf("一瞬间，怪兽突然出现，对你们所在的小队发起了攻击。（此时你在后排）\n"); 
	Sleep(5000);
	while(1)
	{
		system ("cls"); 
    	printf("已知自己有死亡轮回，但是自己实力太弱。请做出你的选择。\n");
    	printf("1后退\n");
    	printf("2帮女主\n");
    	printf("3帮女仆\n");
    	printf("4自己冲上去（有人阻拦），还执意去\n");
    	printf("5去别的地方帮忙\n");
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
				printf("你下定决定用死亡轮回换来你想要的结局。\n"); 
				Sleep(2000);
				while (1)
				{
					if(kbhit())
					{
						j=getch();
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
				printf("你下定决定用死亡轮回换来你想要的结局。\n"); 
				Sleep(2000);
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
				printf("你下定决定用死亡轮回换来你想要的结局。\n"); 
				Sleep(1000);
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
	        		goback4=1;
	        	}
				break;
			}
	    	
			case 5 :
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
		}	
		if(goback4==0)
		break; 
	} 
	printf("part 3 ends\n");
	printf("part 4:什么是梦？\n");
	
	
	//0004
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
	int ce1=0,ce2=0,ce3=0;
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
					printf("敲击Enter再此进入选择。"); 
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
					printf("敲击Enter再此进入选择。");
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
					printf("敲击Enter再此进入选择。");
					return 1;
				}
				else continue;
			}
			else if(choice==3)
			{
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
