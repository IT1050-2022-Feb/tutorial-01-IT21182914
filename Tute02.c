/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{

  
    int carKM;
    int distance;
    int outOfKM;


    printf("Enter Your Distance: ");
    scanf("%d",&carKM);



   outOfKM = carKM - 30;

    if (carKM<=30)

    {
        printf("\n\nFees for %dkm : Rs.%d",carKM,carKM * 50);
    }

    else if (30<carKM)
    {
        printf("Your %dkm fee is : Rs.%d " ,carKM,30*50 + outOfKM*40 );

    }


printf("\n\n");

  
  return 0;
}
