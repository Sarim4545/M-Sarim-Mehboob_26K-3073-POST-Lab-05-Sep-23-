#include <stdio.h>

int main() {
    int restaurantOpen, itemAvailable, balanceSufficient;

    printf("Is the Restaurant Open? (1 = Yes, 0 = No)\n");
    scanf("%d", &restaurantOpen);
    
    if (restaurantOpen == 1) {
        printf("Yes! Restaurant is Ready to Take Orders.\n\n");
        
    
        printf("Is the Customer's Selected Item Available? (1 = Yes, 0 = No)\n");
        scanf("%d", &itemAvailable);
        
        if (itemAvailable == 1) {
            printf("Item is in stock!\n\n");
            
         	printf("Is the Customer's Balance Sufficient? (1 = Yes, 0 = No)\n");
       		scanf("%d", &balanceSufficient);
         
	          if (balanceSufficient == 1) {
                printf("Order placed successfully.\n");
            } else {
                printf(" Balance Not Sufficient.\n");
            }
            
        } else {
            printf("\nSorry! Customer's Item is not in Stock.\n");
        }
        
    } else {
        printf("\nSorry! Restaurant is closed at the moment.\n");
    }
    
    return 0;
}

