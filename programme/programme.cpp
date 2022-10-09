#include<bits/stdc++.h>
//PAtna is a beautiful city
//occurences of that characters in each sentences.
using namespace std;

void countval(char *str){
    int i,j;
    int count=1;
    int l=strlen(str);
    for(int i=0;i<l;i++){
        for(j=0;j<l;j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        cout<<str[i]<<count<<endl;
        count=1;
    }
}

int main(){
    countval("PAtna is a beautiful city");
}
