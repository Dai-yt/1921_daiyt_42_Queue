#Queue


test: queue.c testQueue.c
	gcc -g queue.c testQueue.c -o queue
	./queue

