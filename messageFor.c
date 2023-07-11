#include <stdio.h>
#define message_for(a, b) \
printf(#a " and " #b " loves Nigeria!\n")

int main(void)
{
	message_for(Carole, Debra);
	return (0);
}
