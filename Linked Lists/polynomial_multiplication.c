//polynomial multiplication

#include<stdio.h>
#include<stdlib.h>
struct node{
 	int coeff, exp;
 	struct node *link;
}*ptr1, *ptr2, *x, *temp;
struct node *create(struct node *head, int val, int ex){
	x = (struct node *)malloc(sizeof(struct node));
	x->coeff = val;
	x->exp = ex;
	x->link = NULL;
	if(head == NULL || ex > head->exp) {
        x->link = head; 
        head = x; 
    }
	else {  
        for(temp = head; temp->link != NULL && temp->link->exp >= ex; temp = temp->link) ; 
        x->link = temp->link; 
        temp->link = x; 
    }
    return head; 
}
struct node *insert(struct node* head){ 
    int n, i, co, ex; 
    printf("Enter the number of terms: "); 
    scanf("%d", &n); 
    for(i=0; i<n; i++) {
        printf("term %d: ", i+1);
		scanf("%d %d",&co, &ex); 
        head = create(head, co, ex); 
    }
    return head; 
}
void display(struct node *ptr){
	while(ptr->link != NULL){
		if (ptr->coeff != 0){
		printf("%dx^%d",ptr->coeff, ptr->exp);
		if(ptr->link != NULL && ptr->link->coeff >= 0)
			printf("+");
		}
	ptr = ptr->link;
	}
	printf("%dx^%d\n", ptr->coeff, ptr->exp);
}
void removeDuplicate(struct node* start){
    for (ptr1 = start; ptr1 != NULL && ptr1->link != NULL;  ptr1 = ptr1->link) {
        ptr2 = ptr1;
        while (ptr2->link != NULL) {
            if (ptr1->exp == ptr2->link->exp) {
                ptr1->coeff = ptr1->coeff + ptr2->link->coeff;
                struct node *dup = ptr2->link;
                ptr2->link = ptr2->link->link;
                free (dup);
            }
            else
                ptr2 = ptr2->link;
    }}
}
struct node *multiply(struct node *poly1, struct node *poly2, struct node *poly3){
	for(ptr1=poly1; ptr1!=NULL; ptr1=ptr1->link){
		for(ptr2=poly2; ptr2!=NULL; ptr2=ptr2->link){
			poly3 = create(poly3, ptr1->coeff * ptr2->coeff, ptr1->exp + ptr2->exp);
		} ptr2 = poly2;
	}
    removeDuplicate(poly3);
	return poly3;
}
void main(){
	struct node *poly1 = NULL, *poly2=NULL, *poly3=NULL;
	printf("Polynomial 1 \n");
	poly1 = insert(poly2);
        printf("Polynomial 2 \n");
	poly2 = insert(poly2);
	printf("Poly 1: ");
	display(poly1);
	printf("Poly 2: ");
	display(poly2);
	poly3 = multiply(poly1, poly2, poly3);
	printf("Product =  ");
	display(poly3);
}
