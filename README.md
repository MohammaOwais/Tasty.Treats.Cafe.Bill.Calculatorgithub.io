# Tasty.Treats.Cafe.Bill.Calculatorgithub.io


Q1---Develop below scenario program and take all the input from the user by using scanf().



Title: "Tasty Treats Cafe: Bill Calculator"



Introduction:

Welcome to Tasty Treats Cafe! We provide a delightful selection of beverages and snacks to satisfy your cravings. Today, you are our esteemed customer, and we are eager to serve you! Let's calculate your bill based on your preferences.



Question:

How many cups of tea, cups of coffee, and biscuits would you like to order?



Instructions:



Each cup of tea costs ₹15, each cup of coffee costs ₹25, and each biscuit costs ₹10.

Please provide the quantity for each item you wish to order.

Example:

Customer: "I'd like to have 2 cups of tea, 1 cup of coffee, and 3 biscuits, please."



Bill Calculation:



2 cups of tea × ₹15 = ₹30

1 cup of coffee × ₹25 = ₹25

3 biscuits × ₹10 = ₹30

Total Bill:

₹30 (Tea) + ₹25 (Coffee) + ₹30 (Biscuits) = ₹85



Input as :

-------------

Welcome to Tasty Treats Cafe!

How many cups of tea would you like to order? : 2

How many cups of coffee would you like to order? : 1

How many biscuits would you like to order? : 3



Output as :

-----------------

2 cups of tea

1 cup of coffee

3 biscuits

Total Bill Amount: ₹85

Thank you for choosing Tasty Treats Cafe! Please let us know your order, and we will be more than happy to serve you.




ANSWER ---

#include<stdio.h>
int main(){
    
 int tea,coffee,biscuits;  
 int Tprise=15,Cprise=25,Bprise=10;
 
 printf("Welcome to Tasty Treats Cafe!\n");
 printf("How many cups of tea would you like to order? :\n");
 scanf("%d",&tea);
 
 printf("How many cups of coffee would you like to order? :\n ");
 scanf("%d",&coffee);
 
 printf("How many biscuits would you like to order? :\n ");
 scanf("%d",&biscuits);
 
 printf("%d cup of tea\n",tea);
 printf("%d cup of coffee\n",coffee);
 printf("%d biscuits\n",biscuits);
 
 int ToTea=tea*Tprise;
 int ToCoff= coffee *Cprise;
 int ToBis = biscuits * Bprise;
 
 int total = ToTea + ToCoff + ToBis;
 printf("Total Bill Amount : %d",total);
 
 
    
    return 0;
}



















Q-2--
Description:

You are the owner of a bakery shop and need to create a program to generate invoices for your customers. The program should prompt the user to enter the item they want to buy, the quantity they wish to purchase, and the price of the item. Based on this input, the program should calculate the total cost and display an invoice with all the details, including the item, quantity, price per item, and total cost. At the end of the invoice, don't forget to thank the user for shopping at your bakery shop. Your task is to write a C program that accomplishes this.



Instructions:

----------------

-> Display a welcome message along with a separator line to greet the customer.

-> Prompt the customer to enter the quantity they wish to purchase and store it in an integer variable.

-> Get the price of the item from the customer and store it in a floating-point variable.

-> Calculate the total cost by multiplying the price with the quantity.

-> Display the invoice with all the details, including item, quantity, price per item, and total cost.

-> Make sure the total cost is displayed with two decimal places.

-> End the invoice with a thank-you message for shopping at your bakery shop.



Example Output:

------------------



Welcome to My Bakery Shop!

----------------------------

Available Item is : Chocolate Cake

Enter the quantity you want to purchase: 2

Enter the price of Chocolate Cake: 250



------ Invoice ------

Quantity: 2

Price per item: Rs.250

Total cost: Rs.500



Thank you for shopping at My Bakery Shop! Have a nice day!



You can start by defining the necessary variables and then implement the user interactions using printf and scanf functions. Calculate the total cost and display the invoice accordingly. Finally, remember to thank the customer at the end of the program.


Answer--

#include<stdio.h>
int main(){
    int CQuantity,CPrice;
    
    printf("Welcome to My Bakery Shop!\n");
    printf("----------------------------\n");
    printf("Available Item is : Chocolate Cake\n");
    printf("Enter the quantity you want to purchase: ");
    scanf("%d",&CQuantity);
    printf("Enter the price of Chocolate Cake: ");
    scanf("%d",&CPrice);
    
    printf("------ Invoice ------\n");
    
    printf("Quantity: %d\n",CQuantity);
    printf("Price per item: Rs.%d\n",CPrice);
    int total = CPrice*CQuantity;
    printf("Total cost: Rs:%d",total);
    
   
    
    return 0;
}
