#include <iostream>
using namespace std;

void pattern4(int num){
    for(int x=1;x<=num;x++){
        for(int y=x;y<=num;y++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int num;
    cin>>num;
    pattern4(num);
    return 0;
}