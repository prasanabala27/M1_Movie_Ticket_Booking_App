#include<stdio.h>
#include"func.h"
int first = 5, second = 5, third = 5;
struct node
{
    int ticketno;
    int phoneno;
    char name[100];
    char address[100];
    int price;
} s;
void mainmenu(){

int n;
    printf("\n");
        printf("\n=======================================================================");

    printf("\n\t\t********** movieticketbooking.com **********");
        printf("\n=======================================================================");

    printf("\t\t\n1.ShowDetails\t\t \n2.Book now\t\t\n3.cancel\n=======================================================================\n\t\tEnter your option:");
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

    default:
        break;
    }
    getch();

}
void show()
{
    int c;
    printf("\nAvailability cheking\n");
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
    printf("\n \t\tTicket price \n");
    printf("\n \t\t 1.RS-150 \t\t 2.RS-200\n");
    printf("\t\tEnter ticket price:");
        scanf("%d", &s.price);
         printf("\n\t\t ****** successfully booked ******\n");
         



            printf("\t----------------- TICKET DETAILS----------------\n");
        printf("\t============================================================\n");
        printf("\t Booking ID : %d \t\t\t\tShow Name :  Beast \n");
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
