#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int choice4,flag3,dead4,goback4;
	while  (1)
	{	printf("�����ѡ��\n");
		printf("1���Լ��ߣ����������\n");
		printf("2���Լ�����ս��\n");
		printf("3�����������ֻذ����ҳ����˵�����\n");
		printf("������ѡ������Ӧ������\n");
		scanf("%d",&choice4); 
		if(choice4==1||choice4==2)
		{
			printf("you dead\n");
			dead4=1;    //���ڷ��س����� 
		}
		else if(choice4==3)
		{
			printf("�������������ʤ������Ů�͵Ĺ�ϵ���.\n");
			printf("�Ƿ�˵����һ��Ҫ����Ů�ͣ���������1����������2\n");
	 		int protect;
	 		scanf("%d",&protect);
	       	if(protect==1)
		   	flag3=1;
		   	else
		   	flag3=0;  //��flag3 
		} 
	}
	
	do{
	system ("cls"); //���� 
    printf("��֪�Լ��������ֻأ������Լ�ʵ��̫�������ǰﻹ�ǲ���\n");
    printf("1����\n");
    printf("2��Ů��\n");
    printf("3��Ů��\n");
    printf("4ȥ��ĵط���æ\n");
    printf("5�Լ�����ȥ����������������ִ��ȥ\n");
    printf("������ѡ���Ӧ�����֣�\n");
    int choice42;
	scanf("%d",&choice42); 
    
	   switch(choice42)
	   {case 1 :{printf("Ů��Ů��˫ս��\n");
	          dead4=1;}
	          break;
	         
        case 2 :{printf("Ů��ս��\n");
	          dead4=1; }
	          break;
	        
        case 3 :{printf("Ů��ս��\n");
	          dead4=1;
	          
	         }break;
	    case 4 :printf("You win!\n");break;
	          
	         
	    case 5 :{printf("����������ǰdeethar������������ѡ��\n");
	          printf("1ȥ\n");  
	          printf("2��ȥ\n");  
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
