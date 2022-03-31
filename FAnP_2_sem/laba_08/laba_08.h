#pragma once
struct Queue
{
	char info;
	Queue* next;
};
void create(Queue** begin, Queue** end, char p);
void view(Queue* begin);
void size(Queue* begin);
void delAll(Queue** begin);
void del3(Queue** begin, int addit );