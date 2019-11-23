#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int countr,r,r1,count,i,n;
    int nature, people, military, money;
    float score;
    char choice;
    char playername[20];
    mainhome:
   
    printf("\n\t\t****************************************");
    printf("\n\t\t\t      WELCOME\n ");
    printf("\n\t\t\t        to\n ");
    printf("\n\t\t\t    THE REIGNS ");
    printf("\n\t\t");
    printf("\n\t\t****************************************");
    printf("\n\t\t > Press S to start the game");
    printf("\n\t\t > press Q to quit             ");
    printf("\n\t\t________________________________________\n\n");
    choice=toupper(getch());
        
	 
    if (choice=='Q')
	{
        exit(1);
    }    
    
    else if(choice=='S')
    {
        system("cls");
        printf("\n\n\n\t\t\t    THE REIGNS ");
        printf("\n\n\n\n\t\tResister your name:");
        gets(playername);

        system("cls");
        printf("\n\t\t *********** Welcome %s to THE REIGNS *****************",playername);
        printf("\n\n Here is an overview that you might wanna know before playing:");
        printf("\n\n >>  OVERVIEW: You are the leader of an nation amidst an environmental crisis");
        printf("\n               due to nuclear fallouts and wars in the year 3075.");
        printf("\n\n >>  Your goal is to make right decisions and lead your people and nation to prosperity.");
    
        printf("\n\n >>  For every decision, you have two options that would overall affect your four categories.");
        printf("\n     1. Radiation Control");
        printf("\n     2. People");
        printf("\n     3. Military Force");
        printf("\n     4. Money");
        
        printf("\n\n >>  You will be given 2 options and you have to press 1 or 2 for the");
        printf("\n     option you think is appropriate.");
        
        printf("\n\n >>  At the start of the game each category have 50 Points...");
        printf("\n     Your aim is to maintain these points between 0 and 100 to run your country peacefully.");
        printf("\n\n >>  Remember: Every decision you make have consequences. So think before making any decision.");
        printf("\n\n\t\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
        printf("\n\n\n Press Y to start the game!\n");
        printf("\n Press any other key to return to the main menu!");
    
    	if (toupper(getch())=='Y')
		{
            system("cls");
		    goto home;
        }
	
    	else
		{
            system("cls");
            goto mainhome;
        }

     
    home:
    system("cls");
    nature=50;
    military=50;
    people=50;
    money=50;
     
    for(i=1;i<=24;i++)
    {
       r1=i;
       switch(r1)
       {
            case 1:
            	printf("\n\n\t\t\t\t\t\tWEEK 1");
            	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
	        	printf("\n\n\n\tGENERAL RAMSEY:");
	        	printf("\n\n\tThe streets of the suburbs are unsafe. We need to increase the number of patrols.");
	        	printf("\n\n\t1.Yes do it\t\t2.Not required");
	        	if (toupper(getch())=='1')
	        	{
					printf("\n\n\n\tConsequences:");
					people=people+10;
	                money=money-20;
		           	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
				    getch();
				    system("cls");
				    break;
	            }
		
        		else
	  			{
	            	printf("\n\n\n\tConsequences:");
		            military=military-10;
					people=people-20;
	                money=money+20;
		            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
				    getch();
				    system("cls");
				    break;
	  	   		}
  	   		
           	case 2:
           		printf("\n\n\t\t\t\t\t\tWEEK 2");
            	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
				printf("\n\n\n\tAMBASSADOR ROSS:");
		    	printf("\n\n\tA violent earthquake has stuck one of the cities.");
				printf("\n\n\t1.Send military to help the victims \t\t2.Limit the economic damage");
	        	if (toupper(getch())=='1')
	        	{
				printf("\n\n\n\tConsequences:");
				people=people+10;
				military=military-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    break;
         		}      
      		 	else
       			{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    break;
            }
        case 3:
        	printf("\n\n\t\t\t\t\t\tWEEK 3");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tAMBASSADOR ROSS:");
			printf("\n\n\tThis year, the winter is particularly frigid and harvest have been limited.");
			printf("\n\tWe could import supplies from the western countries.");
			printf("\n\n\t1.Yes we'll ask for help \t\t2.I don't want to owe them");
		        
        	if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }			
			    break;
            }     
			 
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                 printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	               printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }            
            
                      
        case 4:
        	printf("\n\n\t\t\t\t\t\tWEEK 4");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tDIRECTOR OF INTELLIGENCE MOOSE:");
			printf("\n\n\tIt seems that some of our soldiers are involved in smuggling weapons. Should we intervene?");
			printf("\n\n\t1.Yes \t\t2.Ignore them");
		        
        	if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
                military=military+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
        	       	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
      	          	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                 printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	               printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
     	  	else
       		{
	    		printf("\n\n\n\tConsequences:");
                military=military-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                 printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	               printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
          
        case 5:
        	printf("\n\n\t\t\t\t\t\tWEEK 5");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGOVERNOR ARMSTRONG:");
			printf("\n\n\tDue to war, there are more than ten thousand homeless refugees seeking shelter in our ");
			printf("\n\tcountry. Should we take care of them?");
			printf("\n\n\t1.Yes \t\t2.We wont");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
                military=military-10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	   	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
			}
            
        
        case 6:
        	printf("\n\n\t\t\t\t\t\tWEEK 6");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tVICE-PRESIDENT ORVILLE:");
			printf("\n\n\tSome pharmaceutical companies ask for government approval to test their products on animals.");
			printf("\n\n\t1.They can do it \t\t2.Absolutely not");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people+10;
                nature=nature+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	               printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
    	
		case 7:
			printf("\n\n\t\t\t\t\t\tWEEK 7");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);	
			printf("\n\n\n\tRESEARCH OFFICER TORRIS:");
			printf("\n\n\tOur military technology is outdated and obsolete. We have to invest more in research.");
			printf("\n\n\t1.We'll do it \t\t2.Just suffice what you have");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				military=military+20;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
           	    	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }

		case 8:
			printf("\n\n\t\t\t\t\t\tWEEK 8");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tMINISTER OF ECONOMIC AFFAIRS DUGAN:");
			printf("\n\n\tThe black market is hindering the commercial activities of the state. Should we intervene using military?");
			printf("\n\n\t1.Yes \t\t2.No");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				military=military-10;
				money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
          	     	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                money=money-20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }

		case 9:
			printf("\n\n\t\t\t\t\t\tWEEK 9");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tMINISTER OF HEALTH GIBSON:");
			printf("\n\n\tSeveral hospitals in the smallest cities aren't following the health and hygeine standards.");
			printf("\n\tWe should intervene.");
			printf("\n\n\t1.Yes \t\t2.No");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature+10;
				people=people+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                nature=nature-10;
                people=people-20;
				money=money+20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
            
		case 10:
        	printf("\n\n\t\t\t\t\t\tWEEK 10");
        	printf("\n\n\n\tOne of the neighbouring country is becoming more and more powerful.");
        	printf("\n\n\tThey want us to give them our military force and money and are asking us to surrender.");
        	printf("\n\n\tYou refused their offer and this let to starting of a WAR.");
        	printf("\n\n\tNOTE: This war will affect your resources adversely.");
        	printf("\n\tTake your actions wisely");
        	getch();
			system("cls");
        	break;
        	
        case 11:
        	printf("\n\n\t\t\t\t\t\tWEEK 11- WAR (WEEK 1)");
        	nature=nature-5;
 			people=people-5;
			military=military-5;
        	money=money-5;
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tAMBASSADOR ROSS:");
			printf("\n\n\tWe should impose emergency in the country.");
			printf("\n\n\t1.Yes \t\t2.Don't");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				military=military-10;
				money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning.");
               	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	   	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
            	   	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
			}
        	
         case 12:
        	printf("\n\n\t\t\t\t\t\tWEEK 12- WAR (WEEK 2) ");
        	nature=nature-5;
        	people=people-5;
			military=military-5;
        	money=money-5;
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGENERAL RAMSEY:");
		   	printf("\n\n\tShould we recruit civilians in army?");
			printf("\n\n\t1.You do it \t\t2.Don't");
        	
        	if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people-10;
				military=military+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
             	  	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people+10;
				military=military-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
              	 	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }
        
        
        case 13:
        	printf("\n\n\t\t\t\t\t\tWEEK 13- WAR (WEEK 3) ");
        	nature=nature-5;
        	people=people-5;
        	military=military-5;
        	money=money-5;
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tRESEARCH OFFICER TORRES:");
		   	printf("\n\n\tShould we use nuclear weapons? This will give us a lead in war.");
			printf("\n\n\t1.Yes \t\t2.Don't");
        	
        	if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature-10;
				people=people-5;
				military=military+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
             	  	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people+10;
				military=military-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
              	 	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
				    return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }
            
        
        case 14:
        	printf("\n\n\t\t\t\t\t\tWEEK 14- WAR (WEEK 4) ");
        	nature=nature-5;
        	people=people-5;
        	military=military-5;
        	money=money-5;
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGENERAL RAMSEY:");
		   	printf("\n\n\tWe captured the president of enemy country. What should we do?");
			printf("\n\n\t1.Execute him \t\t2.Put him in jail");
        	
        	if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people-10;
				military=military+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
             	  	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-5;
				military=military-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
              	 	printf("\n\n\tYou lost the war.");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					printf("\n\n\tYou lost the war.");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    printf("\n\n\tYou lost the war.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	printf("\n\n\tYou lost the war.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
                	printf("\n\n\tYou lost the war.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                printf("\n\n\tYou lost the war.");
	                return 0;
			    }
			    break;
            }
        	
		case 15:
        	printf("\n\n\t\t\t\t\t\tWEEK 10");
        	printf("\n\n\n\t\t\t\t\t\tCongratulations!!");
        	printf("\n\n\tYou won the war. You are now amongst the most powerful nations of the world.");
        	printf("\n\n\tContinue serving your nation for a happy future.");
        	getch();
			system ("cls");
        	break;
		
		case 16:
			printf("\n\n\t\t\t\t\t\tWEEK 16");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGOVERNER ARMSTRONG:");
			printf("\n\n\tWorkers of the state factory refure to work any longer. They want a raise.");
			printf("\n\n\t1.Give them \t\t2.Don't");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                people=people-10;
				money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
         	      	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
            
		case 17:
			printf("\n\n\t\t\t\t\t\tWEEK 17");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tDIRECTOR OF INTELLIGENCE MOOSE:");
			printf("\n\n\tA criminal organisation is slowly taking possessions in peripheral areas of the cities.");
			printf("\n\n\t1.Take immediate action\t\t2.I don't care");
		        
	        if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
				military=military-10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	   	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
    	   	else
       		{
	    		printf("\n\n\n\tConsequences:");
                people=people-20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	  	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
            
		case 18:
			printf("\n\n\t\t\t\t\t\tWEEK 18");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tAMBASSADOR ROSS:");
			printf("\n\n\tForeign states in east suffer a terrible epidemic, which is decimating the population.");
			printf("\n\tSurvivors seek shelter.");
			printf("\n\n\t1.Welcome them \t\t2.Do not let them in");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature-10;
				people=people+20;
				military=military-10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                people=people-20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
       	        	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
            
		case 19:
			printf("\n\n\t\t\t\t\t\tWEEK 19");
			printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tRESEARCH OFFICER TORRES:");
			printf("\n\n\tForeign countries steal our inventions and patents. We must stand up to them.");
			printf("\n\n\t1.Yes \t\t2.No");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
				military=military-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			   	if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	     printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
                military=military+10;
				money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
            
        case 20:
        	printf("\n\n\t\t\t\t\t\tWEEK 20");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGOVERNER ARMSTRONG:");
			printf("\n\n\tCitizens of one city claim that the crops are infected by rodents.");
			printf("\n\tProbably just an excuse to pay fewer taxes.");
			printf("\n\n\t1.I believe them \t\t2.What nonsense!");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
				money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
                money=money+20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }

      		case 21:
        		printf("\n\n\t\t\t\t\t\tWEEK 21");
	        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
				printf("\n\n\n\tGOVERNER ARMSTRONG:");
				printf("\n\n\tA new addictive drug is being smuggled in and its use is spreading.");
				printf("\n\tWe should increase border control.");
				printf("\n\n\t1.Yes \t\t2.No");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
                military=military-10;
				money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
        	       	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
					return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                 	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
			
        case 22:
        	printf("\n\n\t\t\t\t\t\tWEEK 22");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGOVERNER ARMSTRONG:");
			printf("\n\n\tAn old contaminated building seems to be falling apart. Radioactive materials");
			printf("\n\tinside it may be soon exposed.");
			printf("\n\n\t1.Have it repaired. \t\t2.It can still hold a little");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature+10;
				money=money-20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
				if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	   	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
               		printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				nature=nature-20;
				people=people-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
        	}
            
		case 23:
			printf("\n\n\t\t\t\t\t\tWEEK 23");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tMINISTER OF HEALTH GIBSON:");
			printf("\n\n\tA serious plague hase broken out in one of our cities.");
			printf("\n\tDoctors say it could be contagious.");
			printf("\n\n\t1.Close the area \t\t2.Treat the population");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				nature=nature-10;
				people=people-20;
                printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
        	       	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
				}
				break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people+10;
                money=money-20;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
              	 	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                 	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	              	printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }

		case 24:
			printf("\n\n\t\t\t\t\t\tWEEK 24");
        	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d ", nature, people, military, money);
			printf("\n\n\n\tGOVERNOR ARMSTRONG:");
			printf("\n\n\tThe population is dissatisfied, they demand more money for recreational activities.");
			printf("\n\n\t1.Okay \t\t2.No");
		        
    	    if (toupper(getch())=='1')
	        {
				printf("\n\n\n\tConsequences:");
				people=people+10;
                money=money-10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			 	if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
           	    	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
             	    printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
				}
			break;
            }      
       		else
       		{
	    		printf("\n\n\n\tConsequences:");
				people=people-10;
                money=money+10;
	            printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
			    getch();
			    system("cls");
			    if(nature<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
       		       	printf("\n\n\n\tThe country is highly affected by radiation. You are among the first to die of radiation poisoning. ");
                	return 0;	
    			}
				else if(people<=0)
				{
                	printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
					printf("\n\n\n\tThere is a lot of discontent among people. They all turned against the government.");
					printf("\n\n\tThey revolted and publically executed you");
					return 0;     
   				}
				else if(military<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
            	    printf("\n\n\n\tNeighbouring countries are attacking us. Our army is no longer able to defend itself");
            	    printf("\n\tagainst the invaders!");
            	    printf("\n\n\tThe government falls into the enemy hands. You are captured and executed along with what");
            	    printf("\n\tremains of your army.");
            	    return 0;
			    }
			    else if(money<=0)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tMr. President, our state is poor and we are overwhelmed by debts with foreign countries.");
	                printf("\n\n\tThe government passes into their politicians' hands.");
	                return 0;
			    }
			    else if(nature>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
                	printf("\n\n\n\tThe country is finally clean and free of radiations. The Minister of Health took all the credit,");
                	printf("\n\tdeframed you and took all your powers. You were jailed and finally executed.");
                	return 0;
    			}
    			else if(people>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe people are finally happy and satisfied. The Pope influenced the people that all their");
                	printf("\n\thappiness was due to God's kindness and not because of the President. ");
                	printf("\n\n\tThe people made Pope the new leader. You were jailed and executed.");
					return 0;
			    }
			    else if(military>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tBlinded by greatness, the general assassinate's you and impose military rule over the country.");
	                return 0;
			    }
			    else if(money>=100)
				{
					printf("\n\n\tHP:\t Radiation Control: %d \t People: %d \t Military Force: %d \t Money: %d", nature, people, military, money);
	                printf("\n\n\n\tThe country is very rich. Seeing you vulnarable, the neighbouring countries joint forces");
	                printf("\n\tand attacked your country and eliminated you.");
	                return 0;
			    }
			    break;
            }
			
			 printf("\n\n\n\tCONGRATS!!! You brought everything in the country in order. Now everyone is happy and living a prosperous life.");
        }
    }
	}
}

	




