/*
 * 16_5.c
 *
 *  Created on: Nov 5, 2023
 *      Author: Hossam
 */

#include<stdio.h>
#include<stdlib.h>
#define time_table_elements 8
typedef struct{
	unsigned int departure_time;
	unsigned int arrival_time;
}time_table;
time_table flight[time_table_elements]={ {480, 616}, {583, 712}, {679,811}, {1487,800},{840,968},{945,1075},{1140,1280},{1305,1438} };
unsigned int change_to_minute(unsigned int time);
unsigned int change_to_hour(unsigned int time);
unsigned char get_nearst_index(unsigned int user_time);
void main()
{
	unsigned int hour,minute;
	unsigned int converted_input_format;
	unsigned char index;
	printf("Enter time in 24h format\nhour= ");
	scanf("%d",&hour);

	printf("minute= ");
	scanf("%d",&minute);
	index=get_nearst_index(hour*60+minute); // hour*60+minute expression converts time to minutes form
    hour=change_to_hour(flight[index].departure_time);
    if(hour>12)
    {
        printf("closest departure time:%d:%dpm\n",hour-12, change_to_minute(flight[index].departure_time));
    }
    else
    {
        printf("closest departure time:%d:%dam\n",hour, change_to_minute(flight[index].departure_time));
    }

	hour=change_to_hour(flight[index].arrival_time);
    if(hour>12)
    {
        printf("closest departure time:%d:%dpm\n",hour-12, change_to_minute(flight[index].arrival_time));
    }
    else
    {
        printf("closest departure time:%d:%dam\n",hour, change_to_minute(flight[index].arrival_time));
    }

} //end main function

unsigned int change_to_hour(unsigned int time)
{
    return ( time/60);
}
unsigned int change_to_minute(unsigned int time)
{
    return (time%60);
}
unsigned char get_nearst_index(unsigned int user_time)
{
   unsigned int time_deviation; // time eifference between input time and nearest time
   unsigned char index; // used in loop
   unsigned char minimum_time_deviation_index;

   time_deviation=abs( (flight[0].departure_time )- user_time ); // abs(): absolute value of a given number
   minimum_time_deviation_index=0;
   for(index=1; index<time_table_elements;index++)
   {
       if(abs( (flight[index].departure_time )- user_time ) < time_deviation )
       {
           time_deviation=abs( ( flight[index].departure_time )- user_time );
           minimum_time_deviation_index=index;
       }
   }

   return minimum_time_deviation_index;
}
