#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y;
	scanf("%d%d",&x,&y);
	if (x>=y) printf("%d",0);
	else {
	    printf("%d",(int)((y-1)/x));
	}

}
