#include<iostream>
using namespace std;

struct ll{
	int data;
	ll *next;
};

ll* add_element(ll *l,int val){
	l->data=val;
	l->next=NULL;
	return l;
}

void print_ll(ll *l){
	int cnt=0;
	while(l->next!=NULL){
		cout<<l->data<<" ";
		l=l->next;
		cnt++;
	}
	cout<<endl;
	cout<<"Total number of elements : "<<cnt;
	cout<<endl;
}

void delete_element(ll *l,int val){
	ll *x=l;
	while(x->next!=NULL){
		if(x->data==val){
			
			break;
		}
		x=x->next;	
	}
}

int main(){
	int n;
	cout<<"enter number of elements : ";
	cin>>n;
	int val;
	ll *H,*L;
	L=new ll();
	H=L;
	for(int i=0;i<n;i++){
		cout<<"enter the element : ";
		cin>>val;
		L=add_element(L,val);
		L->next=new ll();
		L=L->next;
	}
	L=H;
	print_ll(L);
	L=H;
	delete_element(L,10);
	L=H;
	print_ll(L);
}
