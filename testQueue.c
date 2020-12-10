#include "queue.h"

int main() {
	
        LinkQueue *queue = createQueue();
        Push_back(queue, 20);
        Push_front(queue, 30);
	Push_back(queue, 40);
        Push_front(queue, 50);
        Pop_front(queue);	
	print(queue);
	
	printf(" 队列元素的个数为: %d\n",size(queue));
        printf(" 队头元素为: %d\n",front(queue));
        printf(" 队尾元素为: %d\n",back(queue));

}

