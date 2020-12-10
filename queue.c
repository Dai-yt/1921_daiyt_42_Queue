#include "queue.h"


LinkQueue* createQueue() {
	LinkQueue *head;
	head = (LinkQueue*)malloc(sizeof(LinkQueue));
	head->left = head->right = head;
	return head;
}


int Empty(LinkQueue *queue) {
        return queue->right == queue;
}


void Push_front(LinkQueue *queue, dataType x) {
        LinkQueue *t = (LinkQueue*)malloc(sizeof(LinkQueue));
        t->data = x;
        t->left = queue;
	t->right = queue->right;
        queue->right->left = t;
        queue->right = t;
}

void Push_back(LinkQueue *queue, dataType x) {
        LinkQueue *t = (LinkQueue*)malloc(sizeof(LinkQueue));
        t->data = x;
        t->left = queue->left;
        t->right = queue;
        queue->left->right = t;
        queue->left = t;
}

void Pop_front(LinkQueue *queue) {
	if(Empty(queue)) exit(1);
        LinkQueue *p = queue->right;
        queue->right = p->right;
        free(p);
}

void Pop_back(LinkQueue *queue) {
        if(Empty(queue)) exit(1);
        LinkQueue *p = queue->left;
        queue->left = p->left;
        free(p);
}

dataType front(LinkQueue *queue) {
	if(Empty(queue)) exit(1);
        return queue->right->data;
}

dataType back(LinkQueue *queue) {
	if(Empty(queue)) exit(1);
        return queue->left->data;
}

int size(LinkQueue *queue) {
        LinkQueue *p = queue->right;
        int k = 0;
        while(p != queue) {
                k++;
                p = p->right;
        }
        return k;
}

void clear(LinkQueue *queue) {
	LinkQueue *p,*q;
	p = queue->right;
	while(p != queue) {
		q = p;
		p = p->right;
		free(q);
	}
	queue->left = queue->right = queue;
}



void print(LinkQueue *queue) {
	LinkQueue *p = queue->right;
	while(p != queue) {
		printf("%d ", p->data);
		p = p->right;
	}
	printf("\n");
}

