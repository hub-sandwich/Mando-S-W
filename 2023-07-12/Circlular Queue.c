
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 10


typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;


void initialize(Queue* queue)
{
    queue->front = -1;
    queue->rear = -1;
}


bool isEmpty(Queue* queue)                        // 큐가 비어있는지 확인
{
    return (queue->front == -1 && queue->rear == -1);
}


bool isFull(Queue* queue)                         // 큐가 가득 찼는지 확인
{
    return (queue->rear == MAX_SIZE - 1);
}

// 큐가 가득 찼는지 확인
bool isFull(Queue* queue) {
    return (queue->rear == MAX_SIZE - 1);
}

void enqueue(Queue* queue, int value)                // 큐에 데이터 삽입
{
    if (isFull(queue))
    {
        printf("큐가 가득 찼습니다.\n");
        return;
    }
    if (isEmpty(queue)) {
        queue->front = 0;
        queue->rear = 0;
    }
    else {
        queue->rear++;
    }
    queue->items[queue->rear] = value;
}

int dequeue(Queue* queue)                  // 큐에서 데이터 삭제 및 반환
{
    if (isEmpty(queue))
    {
        printf("큐가 비어있습니다.\n");
        return -1;  
    }
    int dequeuedItem = queue->items[queue->front];
    if (queue->front == queue->rear)
    {
        queue->front = -1;
        queue->rear = -1;
    }
    else
    {
        queue->front++;
    }

    return dequeuedItem;
}

int peek(Queue* queue)                     // 큐의 맨 앞 데이터 확인
{
    if (isEmpty(queue))
    {
        printf("큐가 비어있습니다.\n");
        return -1;
    }
    return queue->items[queue->front];
}

int main()
{
    Queue queue;
    initialize(&queue);

    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);

    printf("큐의 맨 앞 데이터: %d\n", peek(&queue));
    printf("큐에서 데이터 삭제: %d\n", dequeue(&queue));
    printf("큐의 맨 앞 데이터: %d\n", peek(&queue));

    return 0;
}