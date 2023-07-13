
#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

typedef struct           
{
	int items[MAX_SIZE];
	int top;
}Stack;

void initialize(Stack* stack)               // ���� �ʱ�ȭ
{
	stack->top = -1;
}

bool isEmpty(Stack* stack)                  // ������ ����ִ��� Ȯ��
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
		printf("������ �� á���ϴ�\n");
		return;
	}
	stack->top++;
	stack->items[stack->top] = value;

	}

int pop(Stack* stack)                         // ���� ������ ���� �� ��ȯ
{
	if (isEmpty(stack))
	{
		printf("������ ����ֽ��ϴ�.\n");
		return -1;  // ���� ��
	}

	char poppedItem = stack->items[stack->top];
	stack->top--;

	return poppedItem;
}

int peek(Stack* stack)                        // ���� �� �� ������ Ȯ��
{
	if (isEmpty(stack)) 
	{
		printf("������ ����ֽ��ϴ�.\n");
		return -1;  // ���� ��
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
		printf("������ �� �� ������: %d\n", peek(&stack));
	}
	return 0;
}