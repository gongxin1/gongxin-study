#include<iostream>
#include<math.h>

using namespace std;
int main(){
        float a,b,h,v=0.0,i=0;
        int n;
        float f(float x);

        cout<<"输入积分的上限a和下限b，分割次数n:";
        cin>>a>>b>>n;
        h=(b-a)/n;
        for(i=a;i<b;i=i+h){
        v=v+h/2*(f(i)+f(i+h));

        }
        cout<<"\n结果是:"<<v<<endl;
}
float f(float x){
        return 4.0/(1.0+x*x);
}
