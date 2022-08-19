#include <stdio.h>
int arr[100][100];
int n;
int visited[20];
int visited_new[20];
void create(){
    int origin,destination,max_edges;
    printf("Enter the number of nodes ; \n");
    scanf("%d",&n);
    max_edges=n*(n-1);
    
        for(int j=1;j<=max_edges;j++){
            printf("Enter edges for node %d [0,0 to exit]\n",j);
            scanf("%d%d",&origin,&destination);
            if((origin==0)&&(destination==0))
            break;
            if(origin>n||destination>n){
                 printf("Invalid input\n");
                 j--;
            }
           
            else
            arr[origin][destination]=1;
        }
    }
    void insert(){
        n++;
        for(int i=0;i<n;i++){
            arr[i][n]=0;
            arr[n][i]=0;
        }
        printf("node %d inserted successfully !\n",n);
            
    }
    void delete(int u){
        if(n==0){
            printf("Empty graph\n");
            return ;
        }
        if(u>n){
            printf("Node does not exist\n");
            return ;
        }
        for(int i=u;i<=n-1;i++){
            for(int j=1;j<=n;j++){
                arr[j][i]=arr[j][i+1];
                arr[i][j]=arr[i+1][j];
            }
        }
        printf("Node %d deleted successfully !\n",u);
        n--;
    }
    void bfs(int i){
        printf("%d\n",i);
        visited[i]=1;
        for(int j=1;j<=n;j++){
            if(!visited[j]&&arr[i][j]==1){
                bfs(j);
            }
        }
    }
    void display(){
        for(int i=1;i<n;i++){
            for(int j=1;j<n;j++){
                printf("%d\t",arr[i][j]);
            }
        printf("\n");
        }
    }
    void insert_node(int origin, int destination){
        if(origin>n){
            printf("Origin DNE \n");
            return ;
        }
        if(destination>n){
            printf("destibation DNE\n");
            return;
        }
        else
        arr[origin][destination]=1;
    }
    void delete_node(int origin,int destination){
        if(origin>n||destination>n||arr[origin][destination]==0){
            printf("Edge DNE\n");
        }
        else
        arr[origin][destination]=0;
    }
    int main(){
        create();
        display();
        bfs(1);
        dfs(3);
        return 0;
    }