#include "pch.h"
#include "linkedlist.h"


PLinkedList createLinkedList() {
	PLinkedList newlist = (PLinkedList)malloc(sizeof(LinkedList));
	newlist->header = NULL;
	newlist->ender = NULL;
	newlist->size =0;
	return newlist;
}

PNode createNode(void* data) {
	PNode newNode = (PNode)malloc(sizeof(Node));
	newNode->prev = NULL;
	newNode->data = data;
	newNode->next = NULL;
	return newNode;
}

void add(PLinkedList  list, void* data) {
	PNode newNode = createNode(data);
	if (list->size == 0) {
		list->header = newNode;
		list->ender = newNode;
		
	}
	else {
		newNode->prev = list->ender;
		list->ender->next = newNode;
		list->ender = newNode;

	}
	list->size++;
}

PNode findNode(PLinkedList  list, int index){
	PNode p =list->header;
	for (int i = 0; i < index; i++) {
		p = p->next;
	}
	return p;
}


void insert(PLinkedList  list, int index, void* data) {

	//插入到尾部
	if (list->size == 0 || index > list->size - 1) {
		add(list, data);
		return;
	}
	PNode newNode = createNode(data);

	//插入到头部
	if (index <= 0) {
		newNode->next = list->header;
		list->header->prev = newNode;
		list->header = newNode;
	}

	else {
		//插入中间位置
		PNode p = findNode(list, index);
		PNode q = p->prev;

		newNode->next = p;
		p->prev = newNode;

		q->next = newNode;
		newNode->prev = q;
		list->size++;

	}


}

void* removeIndex(PLinkedList  list, int index) {

	if (list->size == 0) {
		return NULL;
	}
	PNode p = NULL;
	//唯一节点
	if (list->size == 1) {

		p = list->header;
		list->header = list->ender = NULL;
	}
	//头部删除
	else if (index == 0) {

		p = list->header;
		list->header = p->next;//头结点没有前一个
		list->header->prev = NULL;

	}
	//尾部删除
	else if (index >= list->size - 1) {

		p = list->ender;
		list->ender = p->prev;
		list->ender->next = NULL;//尾结点没有下一个

	}
	else {
		//中间删除
		p = findNode(list, index);
		PNode q = p->prev;
		PNode n = p->next;
		q->next = n;
		n->prev = q;

	}


	void* temp = p->data;
	free(p);
	list->size--;
	return temp;
}

void removeData(PLinkedList list, void* data, Compare fun)
{
	int xb = indexOf(list, data, fun);
	if (xb >= 0) {
		removeIndex(list, xb);
	}

}

void set(PLinkedList  list, int index, void* newdata) {
	PNode p = findNode(list, index);
	if (p != NULL) {
		p->data = newdata;
	}
}

int indexOf(PLinkedList list, void* data, Compare fun)
{
	iterator(list);
	for (int i = 0; hasNext(list); i++) {
		void* temp = next(list);
		if (fun(temp, data) == 0){
			return i;
		}
	}

	return 0;
}

void* get(PLinkedList  list, int index) {

	PNode p = findNode(list,index);
	if (p != NULL) {
		return p->data;
	}
	return NULL;
}

int size(PLinkedList  list) {

	return list->size;
}

/*迭代器*/
//产生新的迭代器
void iterator(PLinkedList list) {
	list->nextNode = list->header;
}
//是否有下一个节点
int hasNext(PLinkedList list) {
	return list->nextNode != NULL;
}
//取得下一个节点数据
void* next(PLinkedList list) {
	void* temp = list->nextNode->data;
	list->nextNode = list->nextNode->next;
	return temp;
}

void clear(PLinkedList  list) {
	PNode p = list->header;
	PNode q = NULL;
	while (p != NULL) {
		q = p;
		p = p->next;
		free(q);
		list->size--;
	}
	list->header = list->ender = NULL;
}

void push(PLinkedList  list, void* data) {
	add(list, data);

}

void* pop(PLinkedList  list) {

	return removeIndex(list, list->size - 1);

}

void addFirst(PLinkedList  list, void* data) {

	insert(list, 0, data);
}
void addLast(PLinkedList  list, void* data) {

	add(list, data);
}
void* removeFirst(PLinkedList  list) {

	return removeIndex(list, 0);
}
void* removeLast(PLinkedList  list) {

	return removeIndex(list, list->size - 1);
}
