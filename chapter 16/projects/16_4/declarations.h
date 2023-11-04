
/*
 * declarations.h
 *
 *  Created on: Oct 31, 2023
 *      Author: Options
 */

#ifndef APPLICATION_DECLARATIONS_H_
#define APPLICATION_DECLARATIONS_H_

/* Macros */
#define struct_max_elements 50
#define EMPTY -1
#define name_size 25
#define INSERT  'i'
#define SEARCH  's'
#define UPDATE  'u'
#define PRINT   'p'
#define PRICE   'R'
#define CHANGE_PRICE 'C'
#define QUIT 'q'

/* functions declarations */
void insert();
void search();

void update();
void display_inventory();


/* Database declaration */
 typedef struct
{
    unsigned int part_number;
    char part_name[name_size];
    int quantity;
    float item_price;
}inventory;

/* Variables Declarations*/
int current_used_items;

#endif /* APPLICATION_DECLARATIONS_H_ */
