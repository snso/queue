#include "queue_list.h"

int main()
{
	//初始化
	Queue *queue = initQueue();
	//插入数据
	
	Data insert_data;
	
	insert_data.num = 10;
	queuePush(queue,insert_data);
	insert_data.num = 11;
	queuePush(queue,insert_data);
	insert_data.num = 12;
	queuePush(queue,insert_data);
	insert_data.num = 18;
	queuePush(queue,insert_data);
	
	printf("queue len : %d\n",queueLength(queue));

	Data my_data = queuePop(queue);
	printf("queue data : %d\n",my_data.num);
	my_data = queuePop(queue);
	printf("queue data : %d\n",my_data.num);
	my_data = queuePop(queue);
	printf("queue data : %d\n",my_data.num);
	my_data = queuePop(queue);
	printf("queue data : %d\n",my_data.num);

	destroyQueue(queue);

//	printf("data : %d\n",queue->phead->next->data.num);

}