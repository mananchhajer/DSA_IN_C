#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
/*void pop(stack* s){
	if(!empty(s)){
	s->top--;
}
}*/
int pop(stack* s){
    if(!empty(s))
	return s->items[s->top--];
}
int main(){
	stack* s=(stack*)malloc(sizeof(stack));
	s -> top = -1;
	char str[10];
	int op1,op2;
	scanf("%s",str);
	int n,i=0;
	n=strlen(str);
	while(n--){
		if(str[i]!='+' && str[i]!='*'){
		push(s,str[i]-'0');
		i++;
	}
	else{
      op1=pop(s);
      op2=pop(s);
      if(str[i]=='+'){
      	push(s,op1+op2);
      }
      if(str[i]=='*'){
      	push(s,op1*op2);
      }
      i++;
	}
}
int ans;
ans=pop(s);
printf(" %d",ans);

}