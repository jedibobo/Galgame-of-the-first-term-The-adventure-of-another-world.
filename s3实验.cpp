#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int choice4,flag3,dead4,goback4;
	char j;
	while(1)
	{
		printf("�����ѡ��\n");
		printf("1���Լ��ߣ����������ܵ��ˡ�\n");
		printf("2���Լ�����ս����\n");
		printf("������ѡ������Ӧ������\n");
		scanf("%d",&choice4); 
		if(choice4==1)
		{
			dead4=1;
			printf("Ů�ͱ�һȺ��Χ����\n���ͷ��������Ҫ����ɱ����һĻ��\n");
	 		printf("����Ȼ��Ц�ŵġ�\n������ȴ�̲�ס���е�ʹ����˻�ȥ��\n"); 
			while (1)
			{
				if(kbhit())
				{
					j=getch();
					system("cls");
					break;
				}	
			} 
			break;   	//���ڷ��س����� 
		}
		else if(choice4==2)
		{
			dead4=1;
			printf("���˳�Ц�ţ����еĵ��л������㡣\n");
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
		printf("��...�Ҹ���ô�죿\n");Sleep(3000);system("cls");
		printf("���ڽ�����·������Զ����������Σ�յ�Ů��...\n");Sleep(5000);
		printf("��...�Ҹ���ô�죿\n");Sleep(3000);
		printf("��...�Ҹ���ô�죿\n");Sleep(1000);
		printf("��...�Ҹ���ô�죿\n");Sleep(5000);
		printf("...��������������ô���¡�\n");Sleep(1000);
		system("cls");
		printf("�����ѡ��\n");
		printf("1���Լ��ߣ����������ܵ��ˡ�\n");
		printf("2���Լ�����ս����\n");
		printf("3�����������ֻذ����ҳ����˵�����\n");
		printf("������ѡ������Ӧ������\n");
		scanf("%d",&choice4); 
		if(choice4==1||choice4==2)
		{
			if(choice4==1)
			{
				dead4=1;
				printf("Ů�ͱ�һȺ��Χ����\n���ͷ��������Ҫ����ɱ����һĻ��\n");
	 			printf("����Ȼ��Ц�ŵġ�\n������ȴ�̲�ס���е�ʹ����˻�ȥ��\n"); 
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				} 
				   	//���ڷ��س����� 
			}
			else if(choice4==2)
			{
				dead4=1;
				printf("���˳�Ц�ţ����еĵ��л������㡣\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}    	//���ڷ��س����� 
			}
			continue;
		}
		else if(choice4==3)
		{
			printf("�Ƿ��¶�����һ��Ҫ����Ů�ͣ�\n��������1����������2\n");
	 		int protect;
	 		scanf("%d",&protect);
	 		printf("\n");
	        if(protect==1)
	        {
	       		flag3=1;
		    }
		   else
		   flag3=0;  //��flag3 ��
		   printf("���������������Ȼ������һ�δ��������ֻصĿ־塣���㲢�����£�ֻΪ���Ů������������ȫ����Ů�͵Ĺ�ϵ���.\n");
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
	
	printf("�ϵ��ʳǣ�����Ů����\n��֪����ʥ��ʿ�ȼ�ŷ���ȡ�\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}	
	}  		
	printf("�󳼸��µ�Ŀ�꣺��ܸ�������ɲ���������xx�ĺ�ѡ�˿��Եõ���λ��");
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
	
	while(1)
	{
		//system ("cls"); 
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
	   {
	   		case 1 :
	   		{
	   			system("cls");
			    printf("ͻȻ���޳���Ů����Ů�͡�\n����������ȥ����Ҫ����Ů����Ů�͡�\n");Sleep(2000);
			    printf("������ʲô����ͽ�ͣ�������һ�ж��ǰ��źõ�һ����\n");Sleep(2000);
			    printf("������֮ǰ�����ԡ�\n"); Sleep(2000);
				printf("......\n\n");
			    while (1)
				{
					if(kbhit())
					{
						j=getch();
						break;
					}	
				}  	
			    
				printf("�������ֻ��л���������������ܲ�������Ҫ�Ľ����\n");
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
				printf("Ů�Ϳ��㱣����Ů������Ϊ�����Ը�ǰ�Ů���õ���λ��\n��Ϊ��ʵ�������Ը��������޷��𹥻�������Լ����롣\n");
				Sleep(3000);
				printf("Ů�ͱ��������һ�̿������㣬���������Ц�ˡ�\n");
				printf("��������������ΪʲôЦ��\n");
				Sleep(3000);
				printf("ǰЩ����������ʱ��ƴ���������һĻ���֣���Ҳ�������Ǹ�Լ����\n\n");
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
				printf("�������ֻ��л���������������ܲ�������Ҫ�Ľ����\n"); 
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
				printf("\nŮ�����ڵõ���λ�������Լ�����ǰȥ��\n���ｫ���ɱ��\n");
				printf("���㿴����һĻ��ʱ��һ�ж��Ѿ����ˡ�\n\n");
				while (1)
				{
					if(kbhit())
					{
						j=getch();
						system("cls");
						break;
					}	
				}  	
				printf("�ѵ��Լ��ʼ��ʱ��û�г�ŵҪ��������\n\n");Sleep(3000);
				printf("֮ǰ��һ��һĻĻ�ظ��֣�\n�������ʶ��������������������\n");Sleep(2000);
				printf("�������Լ�ᣬΪ�˸���һ�д��ۡ�\n�����������ֻصĿ־塣\n\n");Sleep(4000);
				printf("�����ڽ��ȴ������......\n");
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
				printf("�������ֻ��л���������������ܲ�������Ҫ�Ľ����\n"); 
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
				printf("���ｫĿ����Ϊ�������㡣\n\n����������ǰdeethar�����㡣����ѡ��\n");
	        	printf("1ȥ\n");  
	        	printf("2��ȥ\n");  
	        	int choice43;
	        	scanf("%d",&choice43);
				if(choice43==1)
				{
					dead4=1;
					printf("���ｫĿ����Ϊ�������㡣\n\n");
					printf("�㱻��ɱ��\n"); 
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
	   		if(goback4==0)
			break;
		}	 
	} 
	return 0;
}
