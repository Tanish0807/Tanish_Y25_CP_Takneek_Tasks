#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	int i=1;
	scanf("%d",&n);
	
	while (i<=n){
	    int x,y,z,a,b,c;
	    scanf("%d%d%d%d%d%d",&x,&y,&z,&a,&b,&c);
	    int t=a+b+c;
	    if (z>=c){
	        if(z-c+y>=b){
	            if (z-c+y-b+x>=a) printf("%d\n",t);
	            else printf("%d\n",t-a+(z-c+y-b+x));
	        }
	        else{
	            if (x>=a) printf("%d\n",t-b+(z-c+y));
	            else printf("%d\n",t-b+(z-c+y)-a+x);
	        }
	    }
	    else{
	        
	        if(y>=b){
	            if(y-b+x>=a){
	                printf("%d\n",t-c+z);
	            }
	            else printf("%d\n",t-(c-z+a-y+b-x));
	        }
	        else{
	            if(x>=a) printf("%d\n",t-(c-z+b-y));
	            else printf("%d\n",t-(c-z+b-y+a-x));
	        }
	        
	    }
	    
	    i=i+1;
	}
	

}
