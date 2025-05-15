#include<stdio.h>
#include "graph.h"



#include "bst.h"

int main()
{

    // int n;
    // int e;
    // printf("Number of vertex: , edge: \n");
    // scanf("%d %d",&n,&e);
    // adjacencyList(n,e);
    // printf("%d %d\n",n,e);
    // adjacencyMatrix(n,e);
    int n;
    scanf("%d",&n);
    node* bst = NULL;
    for(int i = 0; i < n; i++)
    {
        int x;
        scanf("%d",&x);
        bst = insertBST(bst,x);
    }
    printf("Printing...........\n");
    inOrderTraversal(bst);
    
    

}

// insertStack(25);
    // insertStack(70);
    // insertStack(36);
    // printf("%d\n",peak());
    // deleteStack();
    // printf("%d\n",peak());
    // deleteStack();
    // deleteStack();
    // deleteStack();
    // queueInsert(5);
    // queueInsert(6);
    // queueInsert(3);
    // queueInsert(4);
    // queueInsert(4);
    // queueInsert(4);
    
    // queueDelete();
    // queueDelete();
    // queueDelete();
    // queueDelete();
    // queueDelete();
    // printQueue();
    // int x = queueFront();
    // printf("%d\n",x);


    // int n;
    // int e;
    // printf("Number of vertex: , edge: \n");
    // scanf("%d %d",&n,&e);
    // adjacency list representation using link list
    // adjacencyList(n,e);
    // printf("%d %d\n",n,e);
    // adjacencyMatrix(n,e);
    // end