#include<stdio.h>
#include<stdlib.h>
#include "declarations.h"

int main(void)
{
	char choice_input;
	while(choice_input != 't')
	{

		printf("i: Insert ... s: search ... p: print ... u: update ...  q: terminate program \n");
		fflush(stdout);
		scanf("%s",&choice_input);

		switch(choice_input)
		{
		case INSERT:
			insert();
			break;

		case SEARCH:
			search();
			break;

		case PRINT:
			display_inventory();
			break;
		case UPDATE:
			update();
			break;
        case QUIT:
            break;

		default:
			printf("Invalid Input .. plz try again\n");
			break;

		}// end switch

	}// end while(1)
}
