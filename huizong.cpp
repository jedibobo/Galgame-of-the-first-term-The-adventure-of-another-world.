#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<conio.h>
#define P printf("��enter����ѡ��\n��ѡ����Ҫ�����£�\n�����¼�ѡ�񣬰��س���ȷ�ϡ�\n");								
#define P0 printf("->�ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P1 printf("  �ӽ�Ů�����һ���\n->�ӽ�Ů��һ\n  ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P2 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n->ʲô�˶������������\n  �������˸�ù�ϵ��ȡ������\n");
#define P3 printf("  �ӽ�Ů�����һ���\n  �ӽ�Ů��һ\n  ʲô�˶������������\n->�������˸�ù�ϵ��ȡ������\n");
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
	printf("��������һ���󲡣����ղ��ˣ��о��Լ�Ҫdie�ˣ������з�����Խ������������������ʱ����������еĲ��ϣ�һ��ͷʹ�����޲�ʹ��");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("�ߵ����ϣ�������Χȫ�����ˡ�\n�Լ�Ҳ��ɺ�����һ��������ʮ�����������о���Щ���ڲ�ͬ��\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("��֪Ϊ�������ͱ������۸������������Щ�����챻���˴�ɣ���\n����һ���£���ô���˸��ط���Ҫ���ˣ�����");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("����ħ���������ը����������Χ�����ˡ�\n"); 
	printf("һ���׷���Ů���ֲ������������Ͱ׷���Ůһ����ֵĻ��н�Deethar��è���顣\n��Χ�˷���Ӵܡ�"); 
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("�򵥽�����֪������Ҫ��һ���ǳ���Ҫ�Ķ�����Ϊ�˱�������������Ҫ��������\nȻ������һ���·��\n") ;
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
	printf("section 1 :�����ֻ�");
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
	printf("��ѡ���·��ʽ��");
	printf("�����¼�ѡ�񣬰��س���ȷ��\n");
	printf("->������·\n  ��һ��·������·\n");
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
					printf("��ѡ���·��ʽ��");
					printf("�����¼�ѡ�񣬰��س���ȷ��\n");
					printf("->������·\n  ��һ��·������·\n");
					if(getch()==13)
					{
						system("cls");
						printf("��Ͱ׷���Ůһ����һ����·������ˣ�����һ�������ùݣ��ù���ܾ���ͻȻ��һ��紵�����㱻�̴������ࡣ\n");
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
				printf("��ѡ���·��ʽ��");
				printf("�����¼�ѡ�񣬰��س���ȷ��\n");
				printf("  ������·\n->��һ��·������·\n");
				if(getch()==13)
				{
					system("cls");
					printf("����·�ܰ�ȫ���㵽��һ����ׯ��ס�£��ڶ����뿪���ã���·�������˴��ӵķ���һ��ը����Ȼ�󿴵����ӻ����죬������������������㣬��ײ������\n");
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
	
	printf("��������ʹ��������������������ǵĲ��ϡ�\n");
	printf("��������������");printf("Ϊʲô��������ط���");
	printf("�ߵ����ϣ�������Χȫ�����ˡ�\n�Լ�Ҳ��ɺ�����һ��������ʮ�����������о���Щ���ڲ�ͬ��\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("��֪Ϊ�����ֱ�ͬ���������۸���\n����һ���£���ô��Ҫ���ˣ�����");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}

	printf("����ħ���������ը����������Χ�����ˡ�\n"); 
	printf("һ���׷���Ů���ֲ������������Ͱ׷���Ůһ����ֵĻ��н�Deethar��è���顣\n��Χ�˷���Ӵܡ�");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	
	printf("xxx,���������Ľг��׷���Ů�����֡�\n");printf("�׷���Ů������˭����������ʶ��\n"); 
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			system("cls");
			break;
		}
	}
	printf("Ϊʲô������ʶ���ˣ�����\n����һ���������Σ�\n���������ȴ��ô��ʵ�����ˣ������ˡ�\n");
	while (1)
	{
		if(kbhit())
		{
			k=getch();
			break;
		}
	}
	printf("���������������ٴμ򵥽�����֪������Ҫ��һ���ǳ���Ҫ�Ķ�����Ϊ�˱����������·��ٴη���Ҫ��������\nȻ������һ���·��\n") ;
		while (1)
		{
			if(kbhit())
			{
				k=getch();
				system("cls");
				break;
			}
		}
	
	printf("��ѡ���·��ʽ��");
	printf("�����¼�ѡ�񣬰��س���ȷ��\n");
	printf("->������·\n  ��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
	
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
					printf("��ѡ���·��ʽ��");
					printf("�����¼�ѡ�񣬰��س���ȷ��\n");
					printf("->������·\n  ��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
					if(getch()==13)
					{
						system("cls");
						printf("��Ͱ׷���Ůһ����һ����·������ˣ�����һ�������ùݣ��ù���ܾ���ͻȻ��һ��紵�����㱻�̴������ࡣ\n");
						printf("You die!\n");
					}
			}
			else if(choice==1)
			{
				printf("��ѡ���·��ʽ��");
				printf("�����¼�ѡ�񣬰��س���ȷ��\n");
				printf("  ������·\n->��·�ߵ�һ��ʱ����\n  ��һ��·������·\n");
				if(getch()==13)
				{
					system("cls");
					printf("�ڶ��쵽����У���֪���˰׷���Ů����λ�ĺ�ѡ�ˣ���Ҿ���ǰ����֧���ߵĳǱ�\n");
					break;
				}
			}
			else if(choice==2)
			{
				printf("��ѡ���·��ʽ��");
				printf("�����¼�ѡ�񣬰��س���ȷ��\n");
				printf("  ������·\n  ��·�ߵ�һ��ʱ����\n->��һ��·������·\n");
				if(getch()==13)
				{
					system("cls");
					printf("����·�ܰ�ȫ���㵽��һ����ׯ��ס�£��ڶ����뿪���ã���·�������˴��ӵķ���һ��ը����Ȼ�󿴵����ӻ����죬������������������㣬��ײ������\n");
					printf("You die!");	
				} 
			}
		}
	} 
	printf("section 1 ends.\n");
	printf("section 2 :��������\n");
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
	printf("����ƽ���������У���Ů����Լ���ٽ���ȴ��֪Ϊ���Զ������������ع顣(�ع���ڳǱ���)\n");
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			printf("����Ϊ���������������ĵ�һ���Σ���һ�μ���ǰ��ļƻ�������ִ����������ع顣\n");
			break;
		}
	}
	
	while (1)
	{
	 	if (kbhit())
		{
		    h=getch();
			printf("��һ�μ���ǰ��ļƻ�������ִ����������ع顣\n��ǰ�����˷�ĺ�Х���Լ������µ��䡣\n��һ�δ���������������Ϥ�ķ�ɫ��\n");
			break;
		}
	}
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			printf("�������Ҿ�Ȼ�Ǳ��Ǳ��������ڡ���Ҫ�ı���һ�����\n");
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
	printf("������ô��������ҲŲ��������\n"); 
	int flag2=1;
	printf("����������Ҫ���˽�һ�³Ǳ��е��ˣ�\n");
	while (1)
	{
		if(kbhit())
		{
			h=getch();
			system("cls");
			break;
		}
	}
	printf("--------------�Ǳ��е�����--------------\n");
	printf("1.���ˣ�������ǿ���ħ��ʦ\n 2.Ů��һblue\n 3.Ů�Ͷ�red\n 4.bookeeper��Ҳ��ǿ���ħ��ʦ\n\n");
	

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
	printf("section 3 :��Ȩ֮ս");
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
	printf("��������Զ��������ʣ�����Ů�������������ˡ�\n");
	printf("Ȼ���Ů��һ�����ǰ����\n·�ϣ�����һ���ưܵĴ�ׯ��ԭ������ͣ����������ִ������ȫ����ɱ��");
	printf("��·��������������");
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
		printf("��...�Ҹ���ô�죿\n");Sleep(1000);
		while (1)
		{
			if(kbhit())
			{
				j=getch();
				system("cls");
				break;
			}	
		}  
		printf("...��������������ô���¡�\n");Sleep(3000);
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
	printf("��·������װ������ǰ�����޳��ֵĵط���\n");
	printf("·��һƬ����ʮ���쳣������û���˶Դ˹���ע�⡣\n");
	printf("һ˲�䣬����ͻȻ���֣����������ڵ�С�ӷ����˹���������ʱ���ں��ţ�\n"); 
	Sleep(5000);
	while(1)
	{
		system ("cls"); 
    	printf("��֪�Լ��������ֻأ������Լ�ʵ��̫�������������ѡ��\n");
    	printf("1����\n");
    	printf("2��Ů��\n");
    	printf("3��Ů��\n");
    	printf("4�Լ�����ȥ����������������ִ��ȥ\n");
    	printf("5ȥ��ĵط���æ\n");
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
				printf("���¶������������ֻػ�������Ҫ�Ľ�֡�\n"); 
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
				printf("���¶������������ֻػ�������Ҫ�Ľ�֡�\n"); 
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
				printf("���¶������������ֻػ�������Ҫ�Ľ�֡�\n"); 
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
	printf("part 4:ʲô���Σ�\n");
	
	
	//0004
	system("cls"); 
	printf("Ӯ�û�λ��,һ��ħ��ʦ���ɺں�̷������塣\n�Ѿ���ɱ���ա�\n�����ɳ��۹���ǰ����ѹ��\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("�������������ħ��ʦ�ǽڽڰ��ˣ��ۿ��������ʤ����\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls");
			break;
		}
	}
	printf("�ʳ�ͻȻ��������ĺں�̵ķ�ʦ����Χ��������ȡ��λ��������deetharЧ�ҡ�\n");
	printf("��һ�еĳ���̫��ͻȻ�������˶�û���ϵ���\n"); 
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
	printf("Deethar����֮ǰ������Ϊ��ֻ��Ϊ��ȡ��������Ρ�\n");
	printf("���ҵ��������Ӱ��Ǳ��е��˶�����жϡ�\n�����ڳǱ�����Ż�������������Ϊ��ȡ��������æ���ҵ���������һ����Ȥ��\n");
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			break;
		}
	}
	printf("���ǲ��Ǿ���ֻ�����Լ�֪�������ֻأ�\n��ô����ֻ��˵��Ҳӵ������������\n��ֻ��װ����֪�����ѡ�\n");
	printf("��Ҳ�����������ֻز����˽������������ݡ�\n"); 
	while (1)
	{
		if(kbhit())
		{
			j=getch();
			system("cls"); 
			break;
		}
	}
	printf("����������ȡ�����ε�ԭ�򣬾�������Ҫһ������ͬ����������Ϊ��Ʒ��\n�����Ҿ��п�����������������Ҳ��������һֱ�ֻ���ȥ�ˡ�\n"); 
	printf("�������ڸ���һ�����᣺�ҿ��ԷŹ�һ����ָ�����ˡ�\n����������ص��˶�ֻ������\n");
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
		printf("������������ѡ��\n");
		printf("1.�Ź�Ů��\n");
		printf("2.�Ź�Ů��\n");
		printf("3.����ѡ��:���������졣\n");
		scanf("%d",&choiceend);
		switch (choiceend)
		{
			case 1:
				{
					ce1+=1;
					printf("Ů�ͱ����̴�����\n");
					if(flag3==1)
					{
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
						printf("���������ߣ���֮ǰ�������أ�����\n���Ƿ���Ҫ����Ů�͵���\n");
						
					}
					else if(flag3==0)
					{
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
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
					printf("Ů������������\n");
					if(flag1==1)
					{
						printf("Ů������Ȼһֱ��������ƭ�ҡ�\n");
						printf("��֮ǰ�ĳ�ŵ�أ�����\n");
						
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
						printf("Ů������Ȼһֱ��������ƭ�ҡ�\n");
						printf("Ů�ͣ�Ϊ��������ĸ���Ը��\n");
						Sleep(1000);
						while (1)
						{
							if(kbhit())
							{
								j=getch();
								break;
							}
						} 
						printf("���������ߣ���֮ǰ�������أ�����\n���Ƿ���Ҫ����Ů������\n���Ƿ���Ҫ����Ů�͵���\n�����¶�����������������\n");
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
	printf("�������ѡ�� deethar˵������˴�������������ﰡ��\n���һ��ʼ���Ǽ�Ʒ�������ֻ�Ҳ��ֹͣ��������ȥ���ˡ�\n");
	printf("������û�����ܾ����ҵ����ˣ��Ҿ�����ǧ�ٴ��ֻ�ǧ�ٴΣ�ҲҪ�������������˵Ĳٿء�\n"); 
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
	printf("��Խ�������Լ������ڲ����ϡ��������Աߴ�ޣ�˵�Ѿ�û��������һ���ˡ�\n������������á�"); 
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
				P			//Ϊ���㣬����#define����ظ���������滻(��ͬ) 
				P0
				if(getch()==13)
				{
					system("cls");
					printf("�㱻������ʵ��Ů�Ͷ����ˣ�����������˺�Ů����\n\n"); 
					printf("�û�Enter�ٴ˽���ѡ��"); 
					return 1;//����ֵΪ1��ʾ������Ϸ��ʼ 
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
					printf("�㱻���������ˣ�����������˺�Ů�͡�\n\n"); 
					printf("�û�Enter�ٴ˽���ѡ��");
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
					printf("��һ��������ݺ���ͼ��\n\n");
					printf("�û�Enter�ٴ˽���ѡ��");
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
