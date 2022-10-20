#ifndef LISTS
#define LISTS

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_n
{
	char *s;
	unsigned int l;
	struct list_n *nxt;
} list_t;

size_t print_list(const list_t *h);

#endif
