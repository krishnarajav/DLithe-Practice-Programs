/*Shobi owns a garment factory. She gives special offers to her customers for all occasions.  
She wants to give special discounts to her esteemed customers for this Christmas and New Year. 
The discount ranges from 0% to 40%, it depends upon the customer’s bill amount. 
She categorizes the discount details as follows:

< 5000 ===> No discount
5000 to 10000 ===> 10%
10001 to 50000 ===> 20%
50001 to 100000 ===> 30 %
> 100000 ===> 40%.

And she is not good at Mathematics. You are a Software Engineer and she contacts you for support. Kindly help her to develop to calculate the bill amount and print the bill in the following format

Bill Amount :  XXXXXXX.XX
Discount (-) :    XXXX.XX
             ************
               XXXXXXX.XX
	         ************


*/

#include<stdio.h>
int main()
{
    float bill_amount, discount, nett_amount;
    printf("Bill Amount : ");
    scanf("%f", &bill_amount);
    if(bill_amount<5000)
    {
        discount = 0.00;
    }
    else if(bill_amount>=5000  && bill_amount<=10000)
    {
        discount = bill_amount*10/100;
    }
    else if(bill_amount>=10001  && bill_amount<=50000)
    {
        discount = bill_amount*20/100;
    }
    else if(bill_amount>=50001  && bill_amount<=100000)
    {
        discount = bill_amount*30/100;
    }
    else if(bill_amount>100000)
    {
        discount = bill_amount*40/100;
    }
    nett_amount = bill_amount - discount;
    printf("Discount (-): %.2f\n", discount);
    printf("            ***********\n");
    printf("              %.2f\n", nett_amount);
    printf("            ***********\n");
    return 0;
}