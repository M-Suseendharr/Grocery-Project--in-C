/*Grocery app*/

#include<stdio.h>
int main()
{
    int section,vegetable,fruit,juice ;
    float grand_total = 0;
    float Amount, Quantity , x;
    start_menu :
    printf("WELCOME TO SS GROCERIES\n"
    "1.Vegetables\n"
    "2.Fruits\n"
    "3.Fresh Juice\n");
    printf("Enter your prefered section no. : ");
    scanf("%d",&section);
    
    switch(section)
    {
        case 1:
        printf("Available Vegetables\n"
        "1.Tomato - ₹50/kg \n"
        "2.Potato-₹45/kg\n"
        "3.Spinach-₹20/bunch\n"
        "4.Ginger-₹20/bag [each bag 100g]\n"
        "5.Chilli-₹15/bag [each bag 250g] \n"
        "6.Onion-₹55/bag [each bag 1kg]\n");
        printf("Enter your Prefered Vegetable no.:");
        scanf("%d",&vegetable);
        switch(vegetable)
        {
            case 1 :
            printf("Enter the quantity[kgs only] :");
            scanf("%f",&x);
            int Tomato = 50;
            Amount = x*50 ;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 2 :
            printf("Enter the quantity[kgs only] :");
            scanf("%f",&x);
            int Potato = 45;
            Amount= x*45;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 3 :
            printf("Enter the quantity[bunches only] :");
            scanf("%f",&x);
            int Spinach=20;
            Amount=x*20;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 4:
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Ginger=20;
            Amount=x*20;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 5 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Chilli=15;
            Amount=x*15;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 6 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Onion=55 ;
            Amount = x*55;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
        }
        break;
        
        
        case 2 :
        printf("Available Fruits\n"
        "1.Apple - ₹55/bag [each bag 250g]\n"
        "2.Pomegranate -₹70/bag [each bag 250g]\n"
        "3.Orange -₹50/bag [each bag 250g]\n"
        "4.Banana-₹25/bag [each bag 250g]\n"
        "5.Dragon Fruit -₹200/bag [each bag 1kg] \n"
        "6.Grapes-₹55/bag [each bag 250g]\n");
        printf("Enter your Prefered Fruit no.:");
        scanf("%d",&fruit);
        switch(fruit)
        {
            case 1 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Apple = 55;
            Amount = x*55 ;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 2 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Pomegranate = 70;
            Amount= x*70;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 3 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Orange=50;
            Amount=x*50;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 4:
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Banana=25;
            Amount=x*25;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 5 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Dragon_Fruit=200;
            Amount=x*200;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 6 :
            printf("Enter the quantity[in bags only] :");
            scanf("%f",&x);
            int Grapes=55 ;
            Amount = x*55;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
        }
        break;
        
        case 3 :
        printf("Available Fresh Juice \n"
        "NOTE:EACH PET BOTTLE CONTAINS 250ML OF JUICE\n"
        "1.Fresh Lime  - ₹40\n"
        "2.Pomegranate Juice  -₹120\n"
        "3.Lemon juice[salt/sweet] -₹50\n"
        "4.Mint Lime -₹90\n"
        "5.Shamam Juice -₹80 \n"
        "6.Musambi -₹75\n");
        printf("Enter your Prefered Fresh Juice no.:");
        scanf("%d",&juice);
        switch(juice)
        {
            case 1 :
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Fresh_Lime = 40;
            Amount = x*40 ;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 2 :
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Pomegranate_Juice = 120;
            Amount= x*120;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 3 :
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Lemon_Juice =50;
            Amount=x*50;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 4:
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Mint_Lime=90;
            Amount=x*90;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 5 :
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Shamam_Juice=80;
            Amount=x*80;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
            case 6 :
            printf("Enter the quantity:");
            scanf("%f",&x);
            int Musambi=75 ;
            Amount = x*75;
            grand_total += Amount;
            printf("Amount =%f",Amount);
            
            break;
            
        }
        break;
        
        default :
        printf("invalid entry");
    }
    
    char choice , y ,Y;
    printf("\nDo you wish to continue shopping ?(y/n)");
    scanf("%s",&choice);
    if (choice=='y' || choice=='Y')
    {
        goto start_menu ;
    }
    
    else
    {
        printf("THANK YOU FOR SHOPPING");
        printf("\nTotal Amount to be paid : %f",grand_total);
    }
    return 0;
}
