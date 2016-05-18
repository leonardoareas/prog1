#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <algorithm>
#include <vector>

using namespace std;

int n;
int caso = 1;

struct state{
	int r,c,dead;
	char m[120][120];
};

vector < state > mapa;
state temp;

int read(){
	
	scanf("%d",&n);
	if(n==0) return 0;
	
	mapa.clear();
	int i,j;
	
	while(n--){
		int a,b;
		scanf("%d %d",&a,&b);
		temp.r = a;
		temp.c = b;
		temp.dead = 0;
		
		for(i=0;i<a;i++){
			scanf("%s",temp[i]);
		}
		mapa.push_back(temp);
	}
	return 1;
}

int merge(int a,int b){
	int offi,offj;
	
	int val = 0;
	
	for( offi = mapa[b].r ; offi > -mapa[b].r ; offi-- ){
		for( offj = mapa[b].c ; offj > -mapa[b].c; offj-- ){
			
			
			
			
		}
	}
	
	return val;
}

void uniao(int a, int b){
	
	mapa[bi].dead = 1;
	mapa[bj].dead = 1;
	
	
	
}

void process(){
	
	printf("Case %d\n",caso++);
	
	int i,j,k;
	
	while(1){
			
		int best = 0;
		int bi,bj;
		
		for(i=0;i<mapa.size();i++){
			if( mapa[i].dead ) continue;
			
			for(j=i+1;j<mapa.size();j++){
				if( mapa[j].dead ) continue;
				
				int ret = merge(i,j);
				if( ret > best ){
					best = ret;
					bi = i;
					bj = j;
				}
			}
		}
		
		if( best == 0 ) break;
		
		uniao(bi,bj);
	}
	
	
	for(i=0;i<mapa.size();i++){
		if( mapa[i].dead ) continue;
		
		printf("    MAP %d:\n",i+1);
		
		printf("    ");
		printf("+");
		for(j=0;j<mapa[i].c;j++) printf("-");
		printf("+\n");
		
		for(k=0;k<mapa[i].r;k++){
			printf("    ");
			printf("|");
			for(j=0;j<mapa[i].c;j++) printf("%c",mapa[i].m[j]);
			printf("|\n");
		}
		
		printf("    ");
		printf("+");
		for(j=0;j<mapa[i].c;j++) printf("-");
		printf("+\n\n");
	}
	
}

int main(){
	
	freopen("in.txt","r",stdin);
	freopen("out.txt","w",stdout);
	
	while(read()) process();
	return 0;
}