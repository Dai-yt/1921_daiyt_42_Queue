#ifndef queue_h
#define queue_h
#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

typedef int dataType;

typedef struct node{
        dataType data;
        struct node *next;
        struct node *left, *right;
}LinkQueue;

LinkQueue* createQueue();
int Empty(LinkQueue *queue);
void Push_front(LinkQueue *queue, dataType x);
void Push_back(LinkQueue *queue, dataType x);
void Pop_front(LinkQueue *queue);
void Pop_back(LinkQueue *queue);
void clear(LinkQueue *queue);
dataType front(LinkQueue *queue);
dataType back(LinkQueue *queue);
int size(LinkQueue *queue);
void print(LinkQueue *queue);

#endif
