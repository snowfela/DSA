//dfs-bfs

#include <stdio.h>
#include<stdlib.h>
int visit[20]={0}, v[20]={0}, i, j;
typedef struct node{
    int data;
    struct node *prev, *link;
}node;
typedef struct queue{
    struct node *rr, *fr;
}que;
int dequeue(que *q){
    if(q->rr!=NULL){
        node *temp=q->rr;
        int d=temp->data;
        q->rr=temp->prev;
    if(q->rr!=NULL)
        q->rr->link=NULL;
    else
        q->fr=NULL;
    return d;
    }
  return 0;
}
void enqueue(int ch, que *q ){
    node *x=(node*)malloc(sizeof(node));
    x->data=ch;
    x->link=NULL;
    x->prev=NULL;
    if(q->fr==NULL){
        q->fr=x;
        q->rr=x;
    }
    else{
        x->link=q->fr;
        q->fr->prev=x;
        q->fr=x;
    }
}
void dfs(int t, int a[20][20],int n){
    printf("%d  ",t);
    visit[t-1]=1;
    for(i=0;i<n;i++){
        if(a[t-1][i]==1 && visit[i]==0)
            dfs(i+1,a,n);
    }
}
void bfs(int t, int a[20][20],int n, que *q){
    printf("%d  ",t);
    enqueue(t,q);
    v[t-1]=1;
    while(q->fr!=NULL){
        int temp=dequeue(q);
        for(i=0;i<n;i++){
            if(a[temp-1][i]==1 && v[i]==0){
            enqueue(i+1,q);
            printf("%d  ",i+1);
            v[i]=1;
    }}}
}
void main() {
    int n, e, p, q, t, d, a[20][20];
    que q1;
    q1.fr=q1.rr=NULL;
    printf("Enter number of vertices: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){   
        visit[i]=0;
        for(j=0;j<n;j++)
            a[i][j]=0;
    }
    printf("Enter number of edges: ");
    scanf("%d",&e);
    printf("\nEnter 1 for undirected graph and 0 for directed graph: ");
    scanf("%d",&t);
    printf("Enter edge vertices(p,q) of \n");
    for(i=0;i<e;i++){
        printf("edge %d: ", i+1);
        scanf("%d %d",&p,&q);
        a[p-1][q-1]=1;
        if(t==1)
            a[q-1][p-1]=1;
    }
    printf("Adjacency Matrix = \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            printf("%d ",a[i][j]);
        printf("\n");
    }
    printf("Enter element from where you want to start dfs and bfs: ");
    scanf("%d",&d);
    printf("\nDFS:\n");
    dfs(d,a,n);
    printf("\nBFS:\n");
    bfs(d,a,n,&q1);
    printf("\n");
}
