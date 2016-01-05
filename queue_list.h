#ifndef QUEUE_LIST_H_
#define QUEUE_LIST_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define ERR(s) do{fprintf(stderr, "[error--%s--%d--%s--%s\n]",__FILE__,__LINE__,s,strerror(errno));}while(0)

typedef enum{FALSE,TRUE}Bool;
	
typedef struct
{
	int info_fd;
}Data;	

typedef struct NODE
{
	Data data;				//数据内容
	struct NODE *next;	//指向下个结点
}Node;

typedef struct
{
	Node *phead;		//头结点
	Node *ptail;		//尾结点
	int size;			//链表长度
}Queue;


Queue *initQueue();		//初始化
void destroyQueue(Queue *queue);	//销毁
void clearQuene(Queue *queue);	//清空
Bool queueEmpty(Queue *queue);	//是否为空
int queueLength(Queue *queue);	//队列长度
void queuePush(Queue *queue, Data elem);	//入队
Data queuePop(Queue *queue)	;		//出队


#endif
