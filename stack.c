#include<stdio.h>
int stack[10];
int top=-1;
int isempty(){
	if(top==-1){
		return 1;
	}
	else{
		return 0;
	}
}
void pop(){
	int data;
	if(!isempty()){
		top=top-1;
	}
}
void push(int value){
	top=top+1;
	stack[top]=value;
}
int Top(){
	return stack[top];
}
int main(){
	push(10);
	push(12);
	push(23);
	push(90);
	printf("%d ",Top());
	pop();
	printf("%d ",Top());
	pop();
	printf("%d ",Top());
	pop();
	printf("%d ",Top());
	pop();

}