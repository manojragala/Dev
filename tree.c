#include<stdio.h>
#include<stdlib.h>

struct bst{
	int d;
	struct bst *lc;
	struct bst *rc;
};
typedef struct bst tree;

void create_bst(tree **t,int v){

	if(*t==NULL){
		
		tree *node=malloc(sizeof(tree*));
		node->d=v;
		node->lc=NULL;
		node->rc=NULL;
		
		*t=node;
		
	}
	else if(v<= (*t)->d){
		create_bst(&((*t)->lc),v);
	}
	else if(v> (*t)->d){
		create_bst(&((*t)->rc),v);
	}
	
}

void print_bst(tree *t){
	if(t==NULL){
		return;
	}
	else{
		print_bst(t->lc);
		printf("%d ",t->d);
		print_bst(t->rc);
	}
}

int bst_height(tree *t){
	if(t==NULL){
		return 0;
	}
	
	int lh,rh;
	lh=bst_height(t->lc);
	rh=bst_height(t->rc);
	
	if(lh>rh) return lh+1;
	else return rh+1;
}

void main(){
	
	tree *R=NULL;
	int v;
	printf("Enter the value (-1 to Exit): \n");
	scanf("%d",&v);
	while(v!=-1){
	create_bst(&R,v);
	printf("Enter the value (-1 to Exit): \n");
	scanf("%d",&v);
	}
	print_bst(R);
	int h=bst_height(R);
	printf("\n height : %d",h);
	
}










