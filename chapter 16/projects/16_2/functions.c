
#include<stdio.h>
#include<stdlib.h>
#include "declarations.h"

/* Create database*/
inventory item[struct_max_elements];
current_used_items=EMPTY;
void insert()
{
	/* check if inventory is full or not */
   if(  current_used_items<struct_max_elements ) //if( ( current_used_items >= EMPTY ) &&  (current_used_items<struct_max_elements) )
   {
	   /* inventory not full */
	current_used_items++;
   printf("Enter part number: ");
   fflush(stdout);
   scanf("%d",( (&item[current_used_items].part_number) ) );
   printf("Enter part name: ");
   fflush(stdout);
   scanf("%s",( (&item[current_used_items].part_name) ) );
   printf("Enter quantity on hand: ");
   fflush(stdout);
   scanf("%d",( (&item[current_used_items].quantity) ) );
   }// end if
   else
	   printf(" Inventory is full !!!!\n");
}// end insert function

void search()
{
	unsigned int inquired_part_number;
	int index=EMPTY;
	int counter;
	/* check if inventory is empty or not */
	if(  current_used_items > EMPTY  )  //if( ( current_used_items > EMPTY ) &&  (current_used_items<struct_max_elements) )
	{
		/* inventory not full */
		printf("Enter Part Number: ");
		fflush(stdout);
		scanf("%d",&inquired_part_number);
		/* Now, obtaining the location of the required input part number*/
		for ( counter=0; counter<=current_used_items; counter++)
		{
			if( item[counter].part_number == inquired_part_number )
			{ // begin inner if 1
				index=counter; // now index holds the location of the required part number
				break;
			} // end inner if 1
		}//end for

        /* check if the required part number exists or not */
		if(index != EMPTY) // means we found part number in the data base
		  { // begin inner if 2
			  printf("Part name     : %s\n",item[index].part_name);
			  printf("Part number   : %d\n",item[index].part_number);
			  printf("Part Quantity : %d\n",item[index].quantity);
		  } // end inner if 2
		else printf("Part number not found!!!!\n"); // we didn't find the part number in the data base
	} // end outer if

	else printf("Inventory is empty !!!\n");

}//end search function

void display_inventory()
{
    int counter;
    /* check if inventory is full ot not */
	if( ( current_used_items > EMPTY ) &&  (current_used_items<struct_max_elements) )
	 {
		for ( counter=0; counter<=current_used_items; counter++)
				{
					printf("Part Number:%d",item[counter].part_number);
					printf("		Part Name:%s",item[counter].part_name);
					printf("		Part Quantity:%d\n",item[counter].quantity);
				}// end for
	 } // end if
	else
	{
		printf("Inventry Empty\n");
	}
}// end display inventiry function

void update()
{
	    unsigned int inquired_part_number;
		int index=EMPTY;
		int counter, data_input;


 if( ( current_used_items > EMPTY ) &&  (current_used_items<struct_max_elements) ) // if Inventory not empty
	{
			printf("Enter Part Number: ");
			fflush(stdout);
			scanf("%d",&inquired_part_number);
			/* now getting the index of the required part time */
			for ( counter=0; counter<=current_used_items; counter++)
			{
				if( item[counter].part_number == inquired_part_number )
				{ // begin inner if 1
					index=counter; // now i have the index of the required part number
					break; // end for loop
				} // end inner if 1
			}//end for

			if(index != EMPTY)
			{
	             printf("Enter change in quality on hand plz ");
	             fflush(stdout);
	             scanf("%d",&data_input);
	             /*check error: if user wants to delete quantity bigger than what exists */
	             if( (item[index].quantity+ data_input) < 0 ) printf("input not valid! you have quantity less than number U entered!\n");
	             else  item[index].quantity+=data_input;
			}
			else
			{
				printf("Part number doesn't exist in Inventory!!\n");
			}

	} // end outer if

	else // if inventory is empty
		{
		printf("Inventory is empty !!!\n");
		}
}










