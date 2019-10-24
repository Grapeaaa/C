#include<stdio.h>

#define  MaxTree 10
#define  Null -1
struct TreeNode{
	char Element;
	int  Left;
	int  Right;	
}T1[MaxTree],T2[MaxTree];
int N,check[MaxTree];
int BuildTree(struct TreeNode T[]);
int ismorphic(int R1,int R2);
int main()
{   
	int R1,R2;
	R1 = BuildTree(T1);
	R2 = BuildTree(T2);
	if(ismorphic(R1,R2)) printf("Yes\n");
	else printf("No\n");
	return 0;
}

int BuildTree(struct TreeNode T[])
{
	int i,root=Null;
	char cl,cr;
	scanf("%d",&N);
	if(N){
		for(i=0;i<N;i++) check[i] = 0;
		for(i = 0;i<N;i++){
			scanf("\n%c %c %c",&T[i].Element,&cl,&cr);
			if(cl!='-') {
			   T[i].Left = cl-'0';
			   check[T[i].Left] = 1;
			}
			else 
			   T[i].Left = Null;
			if(cr!='-') {
			   T[i].Right = cr-'0';	
			   check[T[i].Right] = 1;
			}
			else 
			   T[i].Right = Null;	
		}
	for(i = 0;i<N;i++)
		if(!check[i]) break;	   	
	root = i;		
	}
	
return 	root;	
}
int ismorphic(int R1,int R2){
   if((R1==Null)&&(R2==Null)) return 1;
   
   if(((R1==Null)&&(R2!=Null))||((R1!=Null)&&(R2==Null))) return 0;
   
   if((T1[R1].Element)!=(T2[R2].Element)) return 0;
   
   if((T1[R1].Left==Null)&&(T2[R2].Left==Null))  
       return ismorphic(T1[R1].Right,T2[R2].Right);
   if(((T1[R1].Left!=Null)&&(T2[R2].Left!=Null))&&((T1[T1[R1].Left].Element)==(T2[T2[R2].Left].Element)))
        return (ismorphic(T1[R1].Left ,T2[R2].Left)&&ismorphic(T1[R1].Right,T2[R2].Right)) ;
    else
        return  (ismorphic(T1[R1].Left ,T2[R2].Right)&&ismorphic(T1[R1].Right,T2[R2].Left)) ;
       
}
