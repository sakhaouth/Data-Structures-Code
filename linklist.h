
typedef struct list
{
    int value;
    struct list *next;
} list;
list* insertFirst(list* front,int v);
list* deleteFirst(list* front);
list* insertLast(list* front, int v);