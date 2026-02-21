#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();

    string line;
    int prev = -1, days = 1;

    for(int i=0;i<n;i++){
        getline(cin,line);

        int hh = stoi(line.substr(1,2));
        int mm = stoi(line.substr(4,2));
        char ap = line[7];

        if(ap=='a'){
            if(hh==12) hh=0;
        }else{
            if(hh!=12) hh+=12;
        }

        int cur = hh*60 + mm;

        if(prev!=-1 && cur<prev) days++;
        prev = cur;
    }

    cout<<days;
}