#include<stdio.h>
#include<math.h>

//Armstrong Function
int armstrong(int i) {

     int temp1 = i;int temp = i;int sum = 0;int count = 0; int rem;
        while(i != 0) {
            count++;
            i = i/10;
        }

        while(temp !=0) {
            rem = temp%10;
            sum = sum + pow(rem,count);
            temp = temp/10;
        }
        if(sum == temp1) {
            printf("%d is an armstrong number\n",temp1);
        }
}
// Range based
int armst(int lowerlimit,int upperlimit) {
    for(int i = lowerlimit;i<=upperlimit;i++) {
        armstrong(i);
    }
}
// Main
int main() {
    int ul,ll;
    printf("Enter lower limit : \n");
    scanf("%d",&ll);
    printf("Enter upper limit:\n");
    scanf("%d",&ul);
    armst(ll,ul);
    return 0;
}
