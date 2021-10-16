#include <iostream>
using namespace std;

int main(){
    int x=0, y=0, count=0;
    char route[1000], final[1000];
    cin.getline(route,1000);                // displacemment problem
    for(int i=0; route[i]!='\0'; i++){
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }

    cout<<"Coordinates : "<<x<<","<<y<<endl;

    while(y!=0){
        if(y>0){
            final[count++] = 'N';
            y--;
        }
        else if(y<0){
            final[count++] = 'S';
            y++;
        }
    }

    while(x!=0){
        if(x>0){
            final[count++] = 'E';
            x--;
        }
        else if(x<0){
            final[count++] = 'W';
            x++;
        }
    }
    final[count]='\0';
    cout<<final<<endl;
    return 0;
}