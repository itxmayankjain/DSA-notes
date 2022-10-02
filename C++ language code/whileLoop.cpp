/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 1;
    while(i<=n){
        cout<<" "<<i;
        i++;
    }
}*/

//find the sum of even number

/*#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum = 0;
    int i = 2;
    while(i<=n){
        if(i%2 == 0)
       sum = sum+i;
       i= i+1;
        
    }
    cout<<sum;
}*/

//find given number is prime or not


#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i = 2;
    while(i<n){
        if(n%i==0){
        cout<<"prime number for"<<i<<endl; 
    }
    else{
        cout<<"not prime number for"<<i<<endl;
    }
    i++;
    }
    
}
