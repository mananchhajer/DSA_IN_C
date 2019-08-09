#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int top;
	int items[10];
}stack;
void push(stack* s, int value){
	s->items[++s->top]=value;
}
int empty(stack* s){
	if(s->top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void pop(stack* s){
	if(!empty(s)){
	s->top--;
}
}
int Top(stack* s){
	return s->items[s->top];
}
int main()
{
	stack *s=(stack*)(malloc(sizeof(stack)));
	push(s,2);
	push(s,3);
	
	printf("%d ",Top(s));
	pop(s);
	printf("%d ",Top(s));
	pop(s);
	
	return 0;
}
