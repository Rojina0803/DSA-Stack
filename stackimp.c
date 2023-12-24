#include<stdio.h>
#define MAX 10

struct stack {
int items[MAX];
int top;
};

void create_empty_stack(struct stack *s);
void push_element_stack(struct stack *s,int num);
void pop_element_stack(struct stack *s);
void display(struct stack *s);

void main(){
struct stack s1;
create_empty_stack(&s1);
push_element_stack(&s1,10);
push_element_stack(&s1,20);
push_element_stack(&s1,30);
pop_element_stack(&s1);
display(&s1);

}


void create_empty_stack(struct stack *s){
s->top=-1;
printf("\ nstack is initialized");

}

void push_element_stack(struct stack *s, int num){
if(s->top==MAX-1){
    printf("\n stack is full");
    return;
}
else{
    s->top++;
    s->items[s->top] = num;
    printf("\n Element %d is inserted",s->items[s->top]);
}
}


void pop_element_stack(struct stack *s){
if(s->top==-1){
    printf("\nEmpty stack");
}
else{
printf("\nElement going to be popped is: %d", s->items[s->top]);
s->top--;
printf("\nPopped successfully");
}
}

void display(struct stack *s){
int i;
printf("\n remaining element is stack is");
for(i=s->top;i>=0;i--){
    printf("\n%d",s->items[i]);
}
}


