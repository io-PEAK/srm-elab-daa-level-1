#include <iostream>
using namespace std;
int main()
{
    int w,h,m;
    int i;
    cin>>w>>h>>m;
    ///////////////
    //Test case 3
    if(h==0){
        for(i=1;i<=w;i++)
        cout<<"#"<<endl;
        return 0;
    }
    ///////////////
    
    for(i=1;i<h-1;i++){
    cout<<"#"<<endl;    
    }
    cout<<"#";
    if(h>w)
    return 0;
    //Power
    for(i=0;i<m/10;i++)
    cout<<".";
    //
    for(i=1;i<w-h+2;i++){
        cout<<"#";
    }
	return 0;
}