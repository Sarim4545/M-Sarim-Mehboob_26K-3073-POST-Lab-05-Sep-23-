#include <stdio.h>
int main ()
{
	int user_balance;
	
	printf("Enter User Balance:\t\n");
	scanf("%d",&user_balance);
	
	if (user_balance < 500){
	
	printf("Low Balance\n");}
	else 
	if (user_balance >= 500 && user_balance <=2000)
	{
	printf("Sufficient Balance\n");
	}
	else 
	if (user_balance > 2000){
		
	printf("Premium Balance\n");}
	return 0;
}
