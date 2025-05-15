#include "linklist.h"
#include <stdio.h>
#include <stdbool.h>
#include "queue.h"
#include "stack.h"
void insert(list* arr[], int u, int v)
{
    
    arr[u] = insertLast(arr[u],v);
    
    arr[v] = insertLast(arr[v],u);

    
}
void printAdjacencyList(list* arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        list* curr = arr[i];
        printf("Node %d is connceted with: \n", i);
        while (curr != NULL)
        {
            printf("%d ",curr -> value);
            curr = curr -> next;
        }
        printf("\n");
        
    }
}
void adjacencyList(int n, int e)
{
    list* arr[20];
    
    for(int i = 0; i < n; i++)
    {
        arr[i] = NULL;
    }
    for(int i = 0; i < e; i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        // insert(arr,u,v);
        arr[u] = insertLast(arr[u],v);
    
        arr[v] = insertLast(arr[v],u);

    }
    // printAdjacencyList(arr,n);
}
void printMatrix(int matrix[][20], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Node %d is connceted with: \n", i);
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 1)
            {
                printf("%d ",j);
            }
            
        }
        printf("\n");
    }
}
void BFSMatrix(int graph[][20],int source,int n)
{
    queueInsert(source);
    bool visited[20];
    for(int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    visited[source] = true;
    while (isQueueEmpty() == false)
    {
        int curr = queueFront();
        printf("Node %d \n",curr);
        queueDelete();
        
        for(int i = 0; i < n; i++)
        {
            if(graph[curr][i] == 1 && visited[i] == false)
            {
                queueInsert(i);
                visited[i] = true;
            }
        }
    }
    

}
void DFSMatrix(int matrix[][20], int source, int n)
{
    int visited[20];
    for(int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    
    insertStack(source);
    visited[source] = true;
    while (isStackEmpty() == false)
    {
        int curr = peak();
        printf("Visiting %d\n",curr);
        deleteStack();
        for(int i = 0; i < n; i++)
        {
            if(matrix[curr][i] == 1 && visited[i] == false)
            {
                visited[i] = true;
                insertStack(i);
            }
        }
    }
    

    
}
void adjacencyMatrix(int n, int e)
{
    int matrix[20][20];
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            matrix[i][j] = 0;
        }
    }
    for(int i = 0; i < e; i++)
    {
        int u,v;
        scanf("%d %d",&u,&v);
        matrix[u][v] = 1;
        matrix[v][u] = 1;
    }
    // BFSMatrix(matrix,0,n);
    // DFSMatrix(matrix,0,n);
}
