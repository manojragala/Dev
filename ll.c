#include<stdio.h>
#include<stdlib.h>
struct ll{
	int d;
	struct ll* ref;
};
typedef struct ll lst;

lst* insert(lst *s,int val){
	lst *p;
	p=malloc(sizeof(lst*));
	p->d=val;
	p->ref=NULL;
	lst *l=s;
	if(l==NULL){
		s=p;
	}
	else{
		while(l->ref!=NULL){
			l=l->ref;
		}
		l->ref=p;
	}
	return s;
}

int main(){
	lst *s=NULL,*l=NULL;
	int inp;
	printf("Enter a number, -1 to exit : \n ");
	scanf("%d",&inp);
	while(inp!=-1){
		s=insert(l,inp);
		printf("Enter a number, -1 to exit : \n ");
		scanf("%d",&inp);
		l=s;
	}
	l=s;
	while(l!=NULL){
		printf("%d ",l->d);
		l=l->ref;
	}
}









