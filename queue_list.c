#include "queue_list.h"

//初始化
Queue *initQueue()
{
	Queue *queue = malloc(sizeof(Queue));
	queue->ptail = malloc(sizeof(Node));
	queue->ptail->next = NULL;
	queue->phead = queue->ptail;
	queue->size = 0;
	return queue;
}
//销毁
void destroyQueue(Queue *queue)
{
	clearQuene(queue);
	free(queue->phead);
	free(queue);
}
//清空
void clearQuene(Queue *queue)
{
	Node *tmp = queue->phead;
	while(tmp->next)
	{
		queuePop(queue);
	}
}
//是否为空
Bool queueEmpty(Queue *queue)
{
	return queue->size==0;
}
//队列长度
int queueLength(Queue *queue)
{
	return queue->size;
}
//入队
void queuePush(Queue *queue, Data elem)
{
	Node *newNode = malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = elem;
	queue->ptail->next = newNode;
	queue->ptail = newNode;
	
	queue->size++;
}	
//出队
Data queuePop(Queue *queue)	
{
	Data data;
	if(queue->size != 0)
	{
		Node *qtmp = queue->phead->next;	
		data = qtmp->data;
		//改变头指针的位置
		queue->phead->next = qtmp->next;
		queue->size--;
		free(qtmp);
	}
	return data;
}	






