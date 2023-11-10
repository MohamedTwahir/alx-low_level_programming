# 0x17. C - Doubly linked lists
lists.h - contains all the the prototypes for the functions to be created in different tasks.
* The main.c files are used for testing the created functions
* the data structure used was provided as per the task requirements
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 * 
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
* The above was the data structure used in the tasks.
