#include<stdio.h>
#include<stdlib.h>
struct userinfo{
	int passno;
	char[20] name;
	int flightno;
	int seatno;
};
struct flightinfo{
	int flightno;
	char departure[20];
	char destination[20];
	int seats[100];
	int ticketprice;
};
struct flightinfo[25];
struct userinfo[1000];
int fno=0;
int psno=0;
void addflight(char[20] dept,char[20] desti,int tp)
{
	flightinfo[fno].flightno=fno;
	flightinfo[fno].departure=dept;
	flightinfo[fno].destination=desti;
	flightinfo[fno].ticketprice=tp;
	for(int i=0;i<100;i++)
	{
		flightinfo[fno].seats[i]=0;
	}
	fno++;
}
void reserveseat()
{
	int pasno;
	char[20] uname;
	printf("Enter Name- ");
	scanf("%s",uname);
	printf("Enter Passport Number- ");
	scanf("%d",pasno);
	int fnu,seatnu;
	printf("Enter Flight Number- ");
	scanf("%d",fnu);
	printf("Enter Seat Number- ");
	scanf("%d",seatnu);
	if(flightinfo[fnu].seats[seatnu-1]==0)
	{
		char ans;
		printf("Seat Available.Press Y to book. \n");
		scanf("%c",ans);
		if(c=='Y')
		{
	     flightinfo[fnu].seats[seatnu-1]=1;		
		}
		userinfo[psno].flightno=fnu;
		userinfo[psno].passno=pasno;
		userinfo[psno].name=uname;
		userinfo[psno].seatno=seatnu;
		psno++;
	}
	else
	{
		printf("Seat NOT Available.\n");
	}	
}
void userticket()
{
   printf("Your Ticket is booked.Ticket details:- \n");
   printf("Flight number- ",userinfo[psno-1].flightno);
   printf("\n");   
   printf("Flight departure- ",flightinfo[userinfo[psno-1].flightno].departure);
   printf("\n");   
   printf("Flight destination- ",flightinfo[userinfo[psno-1].flightno].destination);
   printf("\n");   
   printf("Seat number- ",userinfo[psno-1].seatno);
   printf("\n");	
}
void flightschedule()
{
	int fnu;
	printf("Enter flight number- ");
	scanf("%d",fnu);
	printf("Flight Departure- ",flightinfo[fnu].departure);
	printf("\n");
}
void displaypassenger()
{
	
}
void flightdetails()
{
  for(int i=0;i<fno;i++)
	{
		printf("Flight number- ",fno);
		printf("\n");
		printf("Flight destination- ",flightinfo[fno].destination);
		printf("\n");
		printf("Flight departure- ",flightinfo[fno].departure);
		printf("\n");
		printf("Flight ticket price- ",flightinfo[fno].ticketprice);
		printf("\n");
	}	
}
int main()
{
	addflight("21.6.2020 SUNDAY,12:30 p.m.","London,U.K.",35000);
	addflight("21.6.2020 SUNDAY,2:30 p.m.","Massachusets,USA",45000);
	addflight("21.6.2020 SUNDAY,4:30 p.m.","Yorkshire,U.K.",35000);
	addflight("21.6.2020 SUNDAY,6:30 p.m.","Liverpool,U.K.",45000);
	addflight("21.6.2020 SUNDAY,10:30 p.m.","New York,USA",51000);
	printf("Welcome to Airline Reservation System \n");
	printf("Airline Reservation System Menu\n");
	printf("1.Reserve Seat. \n");
	printf("2.User Ticket. \n");
	printf("3.File Schedule. \n");
	printf("4.Display passenger. \n");
	printf("5.Flight Details. \n");
	printf("6.Exit Program. \n");
    printf("Choose one. \n");
    int choice;
    scanf("%d",choice);
    switch(choice)
    {
    	case 1:
    		reserveseat();
    		break;
    	case 2:
    		userticket();
    		break;
    	case 3:
    		flightschedule();
    		break;
    	case 4:
    		displaypassenger();
    		break;
    	case 5:
    		flightdetails();
    		break;
        case 6:
        	exit(0);
	}
    	
	
	
}
