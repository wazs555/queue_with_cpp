#include <stdio.h>

typedef struct Queue
{

	int data[100];
	int head = 0;
	int tail = 0;
	int capacity = 0;

	void create(int x)
	{
		capacity = x;
	}

	void push(int x)
	{
		if (tail - head >= capacity) printf("Overflow!\n");
		else
		data[tail++] = x;
	}
	void pop()
	{
		if (tail - head <= 0) printf("Underflow!\n");
		else {
			data[head] = 0;
			head++;
		}

	}
	int front()
	{
		if (tail - head <= 0) return -1;
		else return data[head];
	}

	int size()
	{
		return (tail - head);
	}
}Q;

int main()
{
	Q q1;
	q1.create(3);

	q1.push(1);
	q1.push(2);
	q1.push(3);
	q1.push(4);
	q1.push(5);

	printf("%d\n", q1.front());
	q1.pop();
	q1.pop();

	printf("%d\n", q1.front());
	printf("%d\n", q1.size());

	q1.pop();
	q1.pop();

	printf("%d\n", q1.size());


	return 0;
}