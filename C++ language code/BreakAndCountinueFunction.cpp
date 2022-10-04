//print 1 to N
/*#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i = 1;
    for(; ;){
        if(i<=n){
            cout<<i<<endl;
            }
            else{
                break;
            }
        i++;
    }
}*/
// countinue statement
//countine is used skip an itreation of the loop.
//it skips the remaining code of block that itreation

#include<iostream>
using namespace std;
int main(){
    for(int i = 0; i<5; i++){
        cout<<"hey"<<endl;
        cout<<"hi"<<endl;
        continue;
        cout<<"reply toh kardo"<<endl;
    }
    
}