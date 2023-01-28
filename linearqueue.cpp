//Linear Queue

#include <iostream>
using namespace std;

int Queue[10];
int front = -1, rear = -1;
int MaxSize = 10;

bool isEmpty()
{
	if ((front == -1) && (rear == -1))
	{
		return true;
	}
	return false;
}

bool isFull()
{
	if (rear == MaxSize - 1)
	{
		return true;
	}
	return false;
}

bool Enqueue(int element)
{
	if (isFull())
	{
		cout << "Queue is Full Or Overflow\n";
	}
	else if (isEmpty())
	{
		front = rear = 0;
		Queue[front] = element;
		cout << element << " has been inserted in the queue\n";
		//cout << &element << " Address\n";
		return true;
	}
	else
	{
		rear = rear + 1;
		Queue[rear] = element;
		cout << element << " has been inserted in the queue\n";
		return true;
	}
}

bool Dequeue()
{
	if (isEmpty())
	{
		cout << "Queue is empty Or Underflow\n";
	}
	else if (front == rear)
	{
		rear--;
		cout << "Dequeue has been done successfully\n";
		return true;
	}
	else
	{
		front++;
		cout << "Dequeue has been done successfully\n";
		return true;
	}
}

void printValues()
{
	if (isEmpty())
	{
		cout << "Queue is empty\n";
	}

	cout << "Queue elements are: ";
	for (int i = front; i <= rear; i++)
	{
		cout << Queue[i] << " ";
	}
}

int frontElement()
{
	return Queue[front];
}

int rearElement()
{
	return Queue[rear];
}

int main()
{
	int n;
	cout << "Inset Elements To The Queue: ";
	/*Enqueue(10);
	Enqueue(11);
	Enqueue(12);
	Enqueue(13);
	Enqueue(14);
	Enqueue(15);
	printValues();
	cout << "\n";

	cout << frontElement() << " is the front element\n";
	cout << rearElement() << " is the rear element\n";

	Dequeue(); Dequeue(); Dequeue();

	printValues();
	cout << "\n";

	cout << frontElement() << " is the front element\n";
	cout << rearElement() << " is the rear element\n";*/

	for (int i = 0; i < 5; i++) {
		cin >> n;
		Enqueue(n);
	}
	printValues();
	cout << "\n";
	Dequeue(); Dequeue();Dequeue();

	printValues();
}
