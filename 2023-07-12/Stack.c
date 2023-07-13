
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

typedef struct           
{
	int items[MAX_SIZE];
	int top;
}Stack;

void initialize(Stack* stack)               // 스택 초기화
{
	stack->top = -1;
}

bool isEmpty(Stack* stack)                  // 스택이 비어있는지 확인
{
	return (stack->top == -1);
}

bool isFull(Stack* stack)
{
	return (stack->top == MAX_SIZE - 1);
}

void push(Stack* stack, char value)
{
	if (isFull(stack))
	{
		printf("스택이 다 찼습니다\n");
		return;
	}
	stack->top++;
	stack->items[stack->top] = value;

	}

int pop(Stack* stack)                         // 스택 데이터 삭제 및 반환
{
	if (isEmpty(stack))
	{
		printf("스택이 비어있습니다.\n");
		return -1;  // 오류 값
	}

	char poppedItem = stack->items[stack->top];
	stack->top--;

	return poppedItem;
}

int peek(Stack* stack)                        // 스택 맨 위 데이터 확인
{
	if (isEmpty(stack)) 
	{
		printf("스택이 비어있습니다.\n");
		return -1;  // 오류 값
	}

	return stack->items[stack->top];
}

int main()
{
	Stack stack;
	initialize(&stack);
	char c;
	while (1) {
		c = getchar();
		if (c >= '0' && c <= '9') {
			push(&stack, c -'0');
		}
		else if (c == '+' || c == '-' || c == '*' || c == '/') {

			int operand1 = pop(&stack);
			int operand2 = pop(&stack);
			switch (c)
			{
			case '+':
				push(&stack, operand1 + operand2);
				break;
			case '-':
				push(&stack, operand1 - operand2);
				break;
			case '*':
				push(&stack, operand1 * operand2);
				break;
			case '/':
				push(&stack, operand1 / operand2);
				break;
			default:
				printf("System Warning!");
				return -1;
			}
		}
		printf("스택의 맨 위 데이터: %d\n", peek(&stack));
	}
	return 0;
}