/**
 * @file Movieticketbooking_operations.h
 * @author Balaji NS
 * @brief Header file for Movieticketbooking application
 *
 */

#ifndef __MOVIETICKETBOOKING_OPERATIONS_H__
#define __MOVIETICKETBOOKING_OPERATIONS_H__

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>



  
struct node
{
    int ticketno;
    int phoneno;
    char name[100];
    char address[100];
    int price;
    char m[100];
    
} s;

void mainmenu()
{

int n;
   do{
    printf("\n");
        printf("\n=======================================================================");

    printf("\n\t\t********** movieticketbooking.com **********");
        printf("\n=======================================================================");

    printf("\t\t\n1.ShowDetails\t\t \n2.Book now\t\t\n3.cancel the tickets\t\t\n4.order snacks\n0.exit\n=======================================================================\n\t\tEnter your option:");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        show();
        break;
    case 2:
         booking();     
        break;
    case 3:
        cancel();
        break; 
    case 4:
        snk();
        break;

            case 0:
    		exit(0);
    		break;
  

    default:
        break;
    }
    getch();


}while(n!=0);


}

void show()
{
    int c;
    printf("\n Show Details");
    printf("\n\t\t***********************************************\n");
    printf("\t\t 1.Beast-showtime(9.30am-12.30pm-3.30pm-7pm-10pm)\n");
    printf("\n");
    printf("\t\t2.Valimai-showtime(10.30am-1.30pm-4.30pm-8pm-11pm)\n");
    printf("\n\t\t***********************************************");   
 mainmenu();
}
void booking()
{

     
    printf("\n====================================================================");
	printf("\n");	
	printf("\t\t *****Moive Ticket booking***** ");
	printf("\n");
	printf("\n====================================================================");   
    printf("\n enter your details");
    printf("\n \t\tname:");
    scanf("%s", &s.name);
    printf("\n \t\tphonenumber:");
    scanf("%d", &s.phoneno);
    printf("\n \t\t Number of seats 1-100:");
    scanf("%d", &s.ticketno);
    printf("\n \t\t select movie 1.Beast\t\t 2.valimai");
    printf("\t\tEnter the movie name:");
    scanf("%s", &s.m);
    printf("\n \t\tTicket price \n");
    printf("\n \t\t 1.RS-150 \t\t 2.RS-200\n");
    printf("\t\tEnter ticket price:");
        scanf("%d", &s.price);
         printf("\n\t\t ****** successfully booked ******\n");
         



            printf("\n\t\t----------------- TICKET DETAILS----------------\n");
        printf("\t============================================================\n");
        printf("\t                    \t\t\t\tShow Name :%s\n",s.m);
        printf("\t Customer  : %s\n",s.name);
        printf("\t                                              NO of tickets:%d \n",s.ticketno);
        printf("\t                                              Time      : 10:00pm\n");
        printf("\t                                              Hall      : 01\n");
        printf("\t                                              price     : %d  \n\n",s.price);
        printf("\t============================================================\n");    

        mainmenu();

}
 
      

  
void cancel()
{
    int c;
    printf("cancel\n");
    printf("which class you want to cancel");
    printf("\n1.Beast\n2.valimai\n");
    printf("enter the option");
    scanf("%d", &c);
    switch (c)
    {
    case 1:
        
        break;
    case 2:
    
        break;
    
    default:
        break;
    }
    printf("ticket is canceled");
        mainmenu();

}
void snk()
{
    int c;
printf("MENU\n1.icecream(vanila)-100rs\n2.fries-80rs\n3.popcorn-120rs\n4.pepsi-70rs");
printf("\nenter the item number");
scanf("%d", &c);
    switch (c)
    {
    case 1:
        printf("\t\t***icecream");
        break;
    case 2:
        printf("\t\t***fries");
        break;
    case 3:
        printf("\t\t***popcorn");
        break;
    case 4:
        printf("\t\t***pepsi");
        break;    
    default:
        break;
    }
    printf(" is ordered successfully***");
        mainmenu();

}





 


#endif  