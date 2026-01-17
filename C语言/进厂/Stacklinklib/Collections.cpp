#include "pch.h"
#include "collections.h"
#include"stdio.h"
#include<time.h>

void  addAll__(PLinkedList list1, PLinkedList list2) {
	iterator(list2);
	while (hasNext(list2)) {
		add(list1, next(list2));
		}
}

void* max__(PLinkedList list, Compare fun)
{
	void* max = list->header->data;
	PNode p = list->header->next;
	while (p != NULL) {
		if (fun(max , p->data)<0) {
			max = p->data;

		}
		p = p->next;
	}

	return max;
}

void* min__(PLinkedList list, Compare fun)
{
	void* min = list->header->data;
	PNode p = list->header->next;
	while (p != NULL) {
		if (fun(min, p->data) > 0) {
			min = p->data;

		}
		p = p->next;
	}

	return min;
}
	

void swap__(PLinkedList list, int i, int j)
{
	PNode pi = findNode(list, i);
	PNode pj = findNode(list, j);
	if(pi&&pj){
		void* t;
		t = pi->data;
		pi->data = pj->data;
		pj->data = t;

}
}

void sort__(PLinkedList list, Compare fun)
{
	for (int suo = 0; suo < size(list) - 1;suo++) {
		for (int bi = suo + 1; bi < size(list);bi++) {
			if (fun(get(list, suo), get(list, bi))>0) {
				swap__(list, suo, bi);
			}
		}
	}

	/*PNode Psuo = list->header;
	for (int suo = 0; suo < size(list) - 1; suo++) {
		PNode Pbi = Psuo->next;
		for (int bi = suo + 1; bi < size(list); bi++) {
			if (fun(Psuo->data,Pbi->data) > 0) {
				void* t;
				t = Psuo->data;
				Psuo->data = Pbi->data;
				Pbi->data = t;
			}
			Pbi = Pbi->next;

		}
		Psuo = Psuo->next;
	}*/
}

int binarySearch__(PLinkedList list, void* key, Compare fun)
{
	int low = 0;
	int high = list->size - 1;
	int mid;
	
	do {
		mid = (low + high) / 2;
		void* midValue = get(list, mid);
		int bj = fun(midValue, key);
		if (bj==0) {
			return mid;

		}
		else if(bj>0){
			high = mid - 1;

		}
		else {

			high = mid + 1;
		}
	} while (low <= high);

	return 0;
}

void shuffle__(PLinkedList list)
{
	srand((unsigned)time(NULL));
	for (int i = 0; i < size(list); i++) {
		int a = rand() % size(list);
		int b = rand() % size(list);
		swap__(list, a, b);

	}
}
