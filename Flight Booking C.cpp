#include <stdio.h>
#include <string.h>
float comboAPrice = 12.50;
float comboBPrice = 13.00;

char name[20], pnum[10], pic[14], selectedCodes[6];
int lengthnum, lengthic, totalQuantity,quantities[6],day,month,year,numDestinations=0,quantityPillow=0,quantityBlanket=0,quantityCap=0,quantityClothes=0;
float totalPrice,foodPrice,itemsPrice,totalPayment,merchanprice;

//function prototype
void bookDestination();
void info(int user);
int choice(int buy);
int findDestinationIndex(char code);
void displayBookingDetails();
void displayFull();
void foodToBeServed();
void comboA();
void comboB();
void extraItems();
void Pillow();
void Blanket();
void buyMerchandise();
void buyCap();
void buyClothes();
void buyBoth();
void displayStocks();
void updatefoodP();
void updateDestinationPrices();

char destinationCodes[] = {'A', 'B', 'C', 'D', 'E', 'F'};
char destinationNames[][20] = {"Kuantan", "Kuala Terengganu", "Kota Bharu", "Johor Bharu", "Penang", "Alor Setar"};
float destinationPrices[] = {185.50, 190.50, 210.00, 185.50, 190.50, 210.00};
char destinationDepartures[][10] = {"9:30 am", "10:30 am", "11:30 am", "10:00 am", "11:00 am", "12:00 pm"};
char destinationArrivals[][10] = {"10:40 am", "12:00 pm", "1:30 pm", "11:15 am", "12:30 pm", "2:00 pm"};

int main()
{
	int menuChoice;
;
	do
	{
	printf("\n\n\t                                    |\n");
    printf("\t                                    |\n");
    printf("\t                                  .-'-.\n");
    printf("\t                                 ' ___ '\n");
    printf("\t                       ---------'  .-.  '---------\n");
    printf("\t      ______________________ ___'  '-'  '_________________________\n");
    printf("\t       ''''''-|---|--/    \\==][^',___,'^][==/    \\--|---|-''''''\n");
    printf("\t                     \\    //  //         \\  \\    /\n");
    printf("\t                      '--'   OO         OO   '--'\n\n");
    printf(" \t\tWelcome To Selangor Airline. To Fly. To serve.");

		printf("\n\n\n\t*******************************************************************");
		printf("\n\t                 SELANGOR AIRLINE BOOKING SYSTEM                  ");
		printf("\n\t*******************************************************************");
		printf("\n\n\n\t\t Please enter your choice from below (1-4):");
		printf("\n\n\t\t 1. Book Destination(s)");
		printf("\n\n\t\t 2. Purchase food to be serve");
		printf("\n\n\t\t 3. Add extra item(s)");
		printf("\n\n\t\t 4. Update stocks of extra items");
		printf("\n\n\t\t 5. Update food prices");
		printf("\n\n\t\t 6. Update Destination Prices");
		printf("\n\n\t\t 7. Purchase merchandise");
		printf("\n\n\t\t 8. View full booking details");
		printf("\n\n\t\t Enter your choice :");
		scanf ("%d",&menuChoice);

		switch (menuChoice)
		{
		case 1:
			bookDestination();
			break;
		case 2:
			foodToBeServed();
			break;
		case 3:
			extraItems();
			break;
		case 4:
		
		   displayStocks();
			break;
		case 5:
		updatefoodP();
	     	break;
		case 6:
		updateDestinationPrices();
	     	break;
		case 7:
		buyMerchandise();
	     	break;		
		case 8:
			 displayFull();
			break;
		
	
		
		default:
			printf("\n\n\t SORRY INVALID CHOICE!");
			printf("\n\n\t PLEASE CHOOSE FROM 1-6");
			printf("\n\n\t Do not forget to chose from 1-6");
		}
		
	} while (menuChoice != 7);
}


void bookDestination ()
{
	int buy;
    //table
    printf("\n\n------------------------------------------------------------------------------------------------------");
    printf("\n|Destination Code       \t|Destination\t        |Depature Time\t|Arrivel Time\t|Ticket Price|");
    printf("\n|\tA\t\t\t|%s\t        |9:30 a.m\t|10:00 p.m\t|RM %.2f    |", destinationNames[0],destinationPrices[0]);
    printf("\n|\tB\t\t\t|Kuala Terengganu\t|10:30 a.m\t|12:00 p.m\t|RM %.2f    |",destinationPrices[1]);
    printf("\n|\tC\t\t\t|Kota Bharu\t        |11:30 a.m\t|1:30 p.m\t|RM %.2f    |",destinationPrices[2]);
    printf("\n|\tD\t\t\t|Johor Bharu\t        |10:00 a.m\t|11:15 p.m\t|RM %.2f    |",destinationPrices[3]);
    printf("\n|\tE\t\t\t|Penang\t                |11:00 a.m\t|12:30 p.m\t|RM %.2f    |",destinationPrices[4]);
    printf("\n|\tF\t\t\t|Alor Setar\t        |12:00 p.m\t|2:00 p.m\t|RM %.2f    |",destinationPrices[5]);
    printf("\n------------------------------------------------------------------------------------------------------");
    
     do
    {
        printf("\nPlease Enter '1' to continue or '2' to exit: ");
        scanf("%d", &buy);
        choice(buy);
    } while (buy != 1 && buy != 2);

}

void info(int user)
{
    int edit;


    printf("\nUsername: ");
    scanf("%s", name);

    do
    {
        printf("Enter a 9-digit phone number (+60): ");
        scanf("%s", pnum);
        lengthnum = strlen(pnum);
        if (lengthnum != 9)
        {
            printf("Invalid input, please try again.\n");
        }
    } while (lengthnum != 9);
    
    do {
        printf("Enter a 12-digit identity card number (MY): ");
        scanf("%s", pic);
        lengthic = strlen(pic);
        if (lengthic != 12) {
            printf("Invalid input, please try again.\n");
        }
    } while (lengthic != 12);
    printf ("Enter date of departure (DD-MM-YYYY):");
    scanf ("%d-%d-%d",&day,&month,&year);
    
    printf("\n\nYou are done!");
    printf("\nUsername: %s \nPhone Number: %s \nIdentity Card Number: %s",name,pnum,pic);
    printf ("\nDeparture date : %02d-%02d-%d",day,month,year);
    printf("\n\n\nEnter Destination Code (s) you want and press q to proceed into payment");
    while (1) {
    char code;
    printf("\n\nCode: ");
    scanf(" %c", &code);

    if (code == 'q') {
      break;
    }

    int index = findDestinationIndex(code);
    if (index == -1) {
      printf("Invalid destination code.\n");
      continue;
    }

    selectedCodes[numDestinations] = code;
    numDestinations++;
  }
  
 displayBookingDetails();

}

int choice(int buy)
{
	if (buy == 2) {
      printf("Exiting..");
      return 0;
   }
   else if (buy < 1 || buy > 2) {
      printf("Invalid input,try again");
      return 1;
   }
   else 
    {
      printf("\nDo fill all these information");
      if(buy == 1) 
        info(1);  
	}
      return 0;
   }


// Search for a destination 
int findDestinationIndex(char code) {
  for (int i = 0; i < 6; i++) {
    if (destinationCodes[i] == code) {
      return i;
    }
  }
  return -1;
}

void foodToBeServed() //foodsection
{
	int option;
	int n=1;
	int numCombo;
	
	printf("\n\n-------------------------Choose your food to be served-----------------------------");
	printf("\n\n-------------------------Choose your food to be served-----------------------------");
    printf("\n\n1. Combo A (Rice) RM %.2f", comboAPrice);
    printf("\n2. Combo B (Noodles) RM %.2f", comboBPrice);

	do
    {
    	printf("\n\nEnter how many combo you want to purchase (press 0 to exit):");
    	scanf ("%d",&numCombo);
    }while (numCombo<0);
    
    while (n<=numCombo)
    {
    printf("\nChoose 1 or 2 :");
	scanf ("%d", &option);
	if (option==1)
	comboA();
	if (option==2)
	comboB();
	if((option<1||option>2))
	printf("Invalid Input");
     
	 n++;	
	}
	
	printf("Total price of food :%.2f",foodPrice);

}

void comboA()
{
	int quantityComboA;

		printf ("Enter quantity:");
		scanf("%d",&quantityComboA);
		foodPrice+=quantityComboA*comboAPrice;
	
 } 
 
 void comboB()
 {
 	int quantityComboB;
		printf ("Enter quantity:");
		scanf("%d",&quantityComboB);
		foodPrice+=quantityComboB*comboBPrice;
 }
 
 //extra needs
 
void extraItems() 
{
	int a;
	int n=1;
	int numItems;
	
	printf("\n\n-------------------------Extra Items-----------------------------");
	printf ("\nYou need to add RM5 for each extra needs.");
	printf ("\n\n1.Pillow");
	printf ("\n2.Blanket");
	
	do
    {
    	printf("\n\nEnter how many items you want to purchase (press 0 to exit):");
    	scanf ("%d",&numItems);
    }while (numItems<0);
    
    while (n<=numItems)
    {
    printf("\nChoose 1 or 2 :");
	scanf ("%d", &a);
	if (a==1)
	Pillow();
	if (a==2)
	Blanket();
	if((a<1||a>2))
	printf("Invalid Input");
     
	 n++;	
	}
	
	printf("Total price of items added :%.2f",itemsPrice);

}

void buyMerchandise() {
    int merchandiseChoice;
    printf("\n\n\n\t*******************************************************************");
    printf("\n\t                 SELANGOR AIRLINE MERCHANDISE STORE                  ");
    printf("\n\t*******************************************************************");
    printf("\n\n\n\t\t Please select the merchandise you want to buy:");
    printf("\n\n\t\t 1. Cap");
    printf("\n\n\t\t 2. Clothes");
    printf("\n\n\t\t 3. Cap and Clothes");
    printf("\n\n\t\t Enter your choice: ");
    scanf("%d", &merchandiseChoice);

    switch (merchandiseChoice) {
        case 1:
            buyCap();
            break;
        case 2:
            buyClothes();
            break;
        case 3:
        	buyBoth();
        default:
            printf("\n\n\t SORRY INVALID CHOICE!");
            printf("\n\n\t PLEASE CHOOSE FROM 1-2");
            printf("\n\n\t Do not forget to choose from 1-2");
    }
}

void buyBoth()
{
	printf("\nWe brought you the latest airlines cap that come with blue colour ");
	printf ("\nEnter quantity:");
	scanf("%d",&quantityCap);
	printf("\nWe brought you the latest airlines clothes that come with green airline logo colour ");
	printf ("\nEnter quantity:");
	scanf("%d",&quantityClothes);
	merchanprice+=quantityCap*20+quantityClothes*50;
	
}
void buyCap()
{
	printf("\nWe brought you the latest airlines cap that come with blue colour ");
	printf ("\nEnter quantity:");
	scanf("%d",&quantityCap);
	merchanprice+=quantityCap*20;
}
void buyClothes()
{

	printf("\nWe brought you the latest airlines clothes that come with green airline logo colour ");
	printf ("\nEnter quantity:");
	scanf("%d",&quantityClothes);
	merchanprice+=quantityClothes*50;
	
}
void Pillow()
{
		printf ("Enter quantity:");
		scanf("%d",&quantityPillow);
		itemsPrice+=quantityPillow*5;
	
 } 
 
 void Blanket()
 {
 	
		printf ("Enter quantity:");
		scanf("%d",&quantityBlanket);
		itemsPrice+=quantityBlanket*5;
 }
 
 void updatefoodP()
 {
 
    printf("\n\nEnter the new price for Combo A (Rice): ");
    scanf("%f", &comboAPrice);

    printf("Enter the new price for Combo B (Noodles): ");
    scanf("%f", &comboBPrice);

    printf("Prices updated successfully!\n");


 }
 
 void displayStocks() 
 {
 	int pillowStock=100,blanketStock=100,addPillow,addBlanket,capStock=100,clothesStock=100,addCap,addClothes;
 	
    printf("\n\nStock of Extra Items:");
    printf("\nInitial stock of pillow: %d",pillowStock);
    printf("\nNumber of Pillows Left: %d", pillowStock-quantityPillow);
    printf("\nEnter number of pillow to update stock: ");
    scanf ("%d",&addPillow);
    printf("Latest stock: %d",((pillowStock-quantityPillow)+addPillow));
    printf("\n\nInitial stock of blanket: %d",blanketStock);
    printf("\nNumber of Blankets Left: %d", blanketStock-quantityBlanket);
    printf("\nEnter number of blanket to update stock: ");
    scanf ("%d",&addBlanket);
    printf("Latest stock: %d",((blanketStock-quantityBlanket)+addBlanket));
    
    printf("\nInitial stock of cap: %d",capStock);
    printf("\nNumber of cap Left: %d", capStock-quantityCap);
    printf("\nEnter number of cap to update stock: ");
    scanf ("%d",&addCap);
    printf("Latest stock: %d",((capStock-quantityCap)+addCap));
    
    printf("\nInitial stock of clothes: %d",clothesStock);
    printf("\nNumber of clothes Left: %d", clothesStock-quantityClothes);
    printf("\nEnter number of clothes to update stock: ");
    scanf ("%d",&addClothes);
    printf("Latest stock: %d",((clothesStock-quantityClothes)+addClothes));
}

 
// Display the booking details 
void displayBookingDetails()
 {
   totalQuantity = 0;
   totalPrice = 0;

  printf("\nYour destination(s) details:\n");

  for (int i = 0; i < numDestinations; i++) {
    int index = findDestinationIndex(selectedCodes[i]);

    printf("\n%d. Destination: %s\n", i+1, destinationNames[index]);
    printf("\n   Departure Time: %s", destinationDepartures[index]);
    printf("\n   Arrival time: %s", destinationArrivals[index]);

    printf("\n   Enter quantity of tickets: ");
    scanf("%d", &quantities[i]);

    // Update total quantity and price
    totalQuantity += quantities[i];
    totalPrice += destinationPrices[index] * quantities[i];
  }
}

void updateDestinationPrices() {
	int option;
	do {
    printf("\n\nEnter the destination (press 0 to update prices): ");
    scanf("%d", &option);

    if (option == 0) {
        printf("Enter the new price for each destination:\n");
        for (int i = 0; i < sizeof(destinationPrices) / sizeof(destinationPrices[0]); i++) {
        printf("Destination %c: ", 'A' + i);
        scanf("%f", &destinationPrices[i]);
    }
        continue;
    }
} while (option < 1 || option > 6);
    printf("Destination prices updated successfully!\n");
}


//display final booking details
void displayFull()
{
    printf("\n\n---------------------------------Final Booking Details---------------------------------------");
    printf("\nUsername: %s", name);
    printf("\nPhone number: %s", pnum);
    printf("\nIdentity Card Number: %s", pic);
    printf("\nDeparture date: %02d-%02d-%d", day, month, year);

    printf("\nYour destination(s) details:\n");

    for (int i = 0; i < numDestinations; i++)
    {
        int index = findDestinationIndex(selectedCodes[i]);

        printf("\n%d. Destination: %s\n", i + 1, destinationNames[index]);
        printf("\n   Departure Time: %s", destinationDepartures[index]);
        printf("\n   Arrival time: %s", destinationArrivals[index]);
        printf("\n   Quantity of tickets: %d\n", quantities[i]);
    }
    printf("\nTotal quantity of tickets: %d", totalQuantity);
    printf("\nTotal price of tickets: RM%.2f", totalPrice);
    // Apply discount if eligible
    if (totalPrice > 500.00) {
    float discount = totalPrice * 0.1;
    totalPrice -= discount;
    printf("\n\nYou are eligible for a 10%% discount as your ticket purchase exceeds RM500 \nDiscount amount: RM%.2f\n", discount);
  }
    printf("\nTotal quantity of tickets: %d\n", totalQuantity);
    printf("Total price of tickets: RM%.2f\n", totalPrice);
    printf("\nTotal price of food :RM%.2f",foodPrice);
    printf("\nTotal price of items added :RM%.2f",itemsPrice);
    printf("\nTotal price of merchandise added :RM%.2f",merchanprice);
    totalPayment=totalPrice+foodPrice+itemsPrice+merchanprice;
    printf("\nTotal payment : RM%.2f",totalPayment);
}
