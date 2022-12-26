#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int login(int name, int pwd);
int homepage();
int admin();
int varify();
int sceam();
int pay();

int login(int name, int pwd)
{
	int len, n=1;
	char ch;
	int a[10], b[10];
	printf("\nYou shoud enter same User ID and Password\n");
	printf("\nEnter Your User ID : \n");
	scanf("%s",&a);
	printf("\nEnter Your Password : \n");
	scanf("%s",&b);
	len=strcmp(a,b);
	do
	{
		if(len==0)
		{
			homepage();
			break;
		}
		else
		{
			printf("\nYoudidn't Enter correct User ID or Password; so, You cannot enter. Please try again...");
			break;
		}
	}
	while(ch=='Y' || ch=='y');
}

int homepage()
{
	int choice;
	printf("\n==============================================================================\n");
	printf("\nPress <1> for Admin File.\n");
	printf("Press <2> for Verify Your Details.\n");
	printf("Press <3> for Payment Process.\n");
	printf("\nEnter Your Choice : ");
	scanf("%d",&choice);
	printf("\n==============================================================================\n");
	if(choice==1)
	{
		admin();
	}
	else if(choice==2)
	{
		varify();
	}
	else if(choice==3)
	{
		sceam();
	}
}

char i, details[20], name[20], email[20], mobile[20], vehical[20], address[30], entry[10], out[10];
int admin()
{
	char ch;
     do{
		printf("\n==> Please Enter Your Valid Details...\n");
		gets(details);
		fflush;
	
		printf("\nEnter your Good Name : ");
		gets(name);
		fflush;
	
		printf("Enter your Email ID : ");
		gets(email);
		fflush;
	
		printf("Enter your Mobile No. : ");
		gets(mobile);
		fflush;
		
		printf("Enter your Vehical No. : ");
		gets(vehical);
		fflush;
		
		printf("Enter your location Address : ");
		gets(address);
		fflush;
		
		printf("Enter your Entry Date & Time : ");
		gets(entry);
		fflush;
		
		printf("Enter your Exit Date & Time : ");
		gets(out);
		fflush;
		
	    printf("Do you want to add another admin file ??");
	    printf("Press 'Y' for Yes and 'N' for No : ");
	    scanf("%c",&ch);
	}
	while(ch=='Y'||ch=='y');
	printf("\nPlease varify your details to press number two.\n");
	homepage();
}
 
int varify()
{
		printf("\nName : %s\n",&name[i]);
		fflush;
		printf("Email ID : %s\n",&email[i]);
		fflush;
		printf("Mobile No. : %s\n",&mobile[i]);
		fflush;
		printf("Vehical Number : %s\n",&vehical[i]);
		fflush;
		printf("Location Address : %s\n",&address[i]);
		fflush;
		printf("Entry Date & Time : %s\n",&entry[i]);
		fflush;
		printf("Exit Date & Time : %s\n",&out[i]);
		fflush;
		homepage();
}

int pay()
{
	printf("\n******************************************************************************\n");
	printf("\n                        Your Process is completeted....                       \n");
	printf("                   Your nearest Parking area is Ganesh Meridian               \n");
	printf("               Please Pay Your Fees on the bellow contact Number...           \n");
	printf("                                    9879617351                                \n");
	printf("\n                                  Thank You !!!                                 \n");
	printf("\n******************************************************************************\n");
	printf("==============================================================================\n");
}

int sceam()
{
	int scm, a, b, c;
	printf("\na. ==> If you want to park your car everyday, you should pay Rs.1200 per month.\n");
	printf("b. ==> If you want to park your car for some days, you should pay Rs.200 per day.\n");
	printf("c. ==> If you want to park your car only for today, you should pay Rs.20 per hover.\n");
	printf("\nTell us your choice : ");
	scanf("%d",&scm);
	pay();
}

int main()
{
	int x[10], y[10];
	printf("==============================================================================\n");
	printf("******************************************************************************\n");
	printf("\n                                  PID - 496                                     \n");
	printf("                          Pay & Park Facility Locator                         \n");
	printf("                          Developed by : Princy Patel                         \n");
	printf("                            For the Academic Year :                           \n");
	printf("                                  2022-2023                                   \n");
	printf("                            Branch : Cyber Security                           \n");
	printf("                             Enrollment No. : CS37                            \n");
	printf("\n******************************************************************************\n");
	printf("==============================================================================\n");
	login(&x,&y);
	return 0;
}
