#include <bits/stdc++.h>
using namespace std;
 
	
struct t_aresta{
    long long int dis;
    int x, y;
};
 
bool comp(t_aresta a, t_aresta b){ return a.dis < b.dis; }
 
#define MAXN 150500
#define MAXM 200200
 
int n, m; // nÃºmero de vÃ©rtices e arestas
t_aresta aresta[MAXM];
 
// para o union find
 
int pai[MAXN];
int peso[MAXN];
 
// a Ã¡rvore
 
t_aresta mst[MAXM];
 
// funÃ§Ãµes do union find
int find(int x){
    if(pai[x] == x) return x;
    return pai[x] = find(pai[x]);
}
 
 
void join(int a, int b){
    
    a = find(a);
    b = find(b);
    
    if(peso[a] < peso[b]) pai[a] = b;
    else if(peso[b] < peso[a]) pai[b] = a;
    else{
        pai[a] = b;
        peso[b]++;
    }
    
}

int cont_bits(long long int num){

	for(int i = 0 ; i < 62 ; i++)
		if(num & ( 1LL << i) )
			return( i  );

}

 
int main(){
    	
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);

	int t;


	cin >> t;

	while(t--){

	
   	 cin >> n >> m;
 
	if(n == 0 && m == 0)
	     return 0;	
 
   	 for(int i = 1;i <= m;i++){
		long long int dis;
   	     cin >> aresta[i].x >> aresta[i].y >>  dis;
	     
	     aresta[i].dis = cont_bits(dis);

 	   }
    
  	  // inicializar os pais para o union-find
   	 for(int i = 1;i <= n;i++) pai[i] = i;
    
 
  	  // ordenar as arestas
 	 sort(aresta+1, aresta+m+1, comp);
   	 int size = 0;
 
	long long int conta = 0 ;
  	
	for(int i = 1;i <= m;i++){
        
      		  if( find(aresta[i].x) != find(aresta[i].y) ){ // se estiverem em componentes distintas
       		     join(aresta[i].x, aresta[i].y);
           		conta += aresta[i].dis; 
          		  mst[++size] = aresta[i];
       		   }
        
    	}
    		
   	 // imprimir a MST
    	
   

    	printf("%lld\n", conta + 1);

	}
 
}
