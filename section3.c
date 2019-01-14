#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice4,flag3,dead4,goback4;
	while  (1)
	{	printf("请进行选择：\n");
		printf("1、自己走，相信她会存活。\n");
		printf("2、自己参与战斗\n");
		printf("3、利用死亡轮回帮助找出敌人的弱点\n");
		printf("请输入选项所对应的数字\n");
		scanf("%d",&choice4); 
		if(choice4==1||choice4==2)
		{
			printf("you dead\n");
			dead4=1;    //用于返回出生点 
		}
		else if(choice4==3)
		{
			printf("多次死亡，最终胜利。和女仆的关系变好.\n");
			printf("是否说出我一定要保护女仆！是请输入1，否则输入2\n");
	 		int protect;
	 		scanf("%d",&protect);
	       	if(protect==1)
		   	flag3=1;
		   	else
		   	flag3=0;  //立flag3 
		} 
	}
	
	do{
	system ("cls"); //清屏 
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
	   {case 1 :{printf("女仆女主双战死\n");
	          dead4=1;}
	          break;
	         
        case 2 :{printf("女仆战死\n");
	          dead4=1; }
	          break;
	        
        case 3 :{printf("女主战死\n");
	          dead4=1;
	          
	         }break;
	    case 4 :printf("You win!\n");break;
	          
	         
	    case 5 :{printf("被攻击死亡前deethar救了他。请再选择\n");
	          printf("1去\n");  
	          printf("2不去\n");  
	          int choice43;
	          scanf("%d",&choice43);
			  if(choice43==2)
			  goback4=1; 
	          else
	          dead4=1;
	         }
			 break;
	   }
	   if(goback4==1)
			 continue;
	   
	} 
	while(1);
	
	return 0;
}
