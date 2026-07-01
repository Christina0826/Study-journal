#include <stdio.h>

long long fun(int num){
        long long fact = 1;
        for (int i = 1;i<=num;i++){
            fact*=i;
        }
        return fact;
    }



int main(){
    int m,n;//从键盘上输入两个shu
    if(scanf("%d %d",&m,&n)!=2){
        return 0;
    }

    long long m_fact=fun(m);
    long long n_fact=fun(n);
    long long mn_fact=fun(m-n);


    long long result = m_fact / (n_fact * mn_fact);
    
    printf("%lld\n",result);
    
    


return 0;



}