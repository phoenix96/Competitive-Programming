#include <stdio.h>
 
long long funct(long long);
 
long long memory[10000000]={0};
 
int main() {
    
    long long n=0, m=0;
 
    while(scanf("%lld", &n)!=EOF) {
    
        
        printf("%lld\n", funct(n));
        
        
    }
    
    return 0;   
}
 
long long funct(long long n) {
 
	if(n<12)
		return n;
		
	if(n==12)
		return 13;
		
	if(n<1000000) {
		if(memory[n]!=0)
			return memory[n];
			
	}
	
    long long two, three, four;
    
    two=n/2;
    three=n/3;
    four=n/4;
    
    long long k =funct(two)+funct(three)+funct(four);
    if(n<1000000)
     	memory[n]=k;
    return k;
}