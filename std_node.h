#ifndef node_h
#define node_h

struct std_node
{
    int id;
    char name[30]
    struct std_node *next;
};
typedef struct std_node Node;
typedef STD NodePtr;
#endif
