#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int nSentence, largest_len=0;
    char sentence[1000], largest[1000];
    cin>>nSentence;
    cin.get();    // will record the first enter '\n' and won't interfere with our original string
    while(nSentence--){
        cin.getline(sentence,1000);
        int len = strlen(sentence);
        if(len>largest_len){
            largest_len = len;
            strcpy(largest,sentence);
        }
    }
    cout<<"Largest Sentence : "<<largest<<endl;
    return 0;
}