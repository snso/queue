#include "queue_list.h"

//��ʼ��
Queue *initQueue()
{
	Queue *queue = malloc(sizeof(Queue));
	queue->ptail = malloc(sizeof(Node));
	queue->ptail->next = NULL;
	queue->phead = queue->ptail;
	queue->size = 0;
	return queue;
}
//����
void destroyQueue(Queue *queue)
{
	clearQuene(queue);
	free(queue->phead);
	free(queue);
}
//���
void clearQuene(Queue *queue)
{
	Node *tmp = queue->phead;
	while(tmp->next)
	{
		queuePop(queue);
	}
}
//�Ƿ�Ϊ��
Bool queueEmpty(Queue *queue)
{
	return queue->size==0;
}
//���г���
int queueLength(Queue *queue)
{
	return queue->size;
}
//���
void queuePush(Queue *queue, Data elem)
{
	Node *newNode = malloc(sizeof(Node));
	newNode->next = NULL;
	newNode->data = elem;
	queue->ptail->next = newNode;
	queue->ptail = newNode;
	
	queue->size++;
}	
//����
Data queuePop(Queue *queue)	
{
	Data data;
	if(queue->size != 0)
	{
		Node *qtmp = queue->phead->next;	
		data = qtmp->data;
		//�ı�ͷָ���λ��
		queue->phead->next = qtmp->next;
		queue->size--;
		free(qtmp);
	}
	return data;
}	






