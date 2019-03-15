#include<iostream>
#include<math.h>

using namespace std;

int main(){
    long num;
    while(cin>>num){
        if(num < 10){
            cout<<num<<endl;
            continue;
        }
        int state=0,cof=9,base=0;

        do{
            state++;
            num -= cof;

            int temp=9;
            for(int i=1;i<state;i++)
                temp*=10;

            base+=temp;
            cof = (state+1)*temp*10;
        }while(num > cof);

        //cout<<num<<endl;

        state++;
        num--;
        base=base+(num/state)+1;

        int digit = num%state;
        for(int i=0;i<state-digit-1;i++)
            base/=10;

        cout<<base%10<<endl;
    }

    return 0;
}
