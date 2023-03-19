//ID:221405
//Name:Assatullaev Fayzulloh

#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

void peterAndJohn(vector<int> &vec){
    int peter=0, john=0, j=0, p=0;
    vector<int>::iterator it=vec.begin();
    while(vec.size()!=0){
        if(p>=j and vec.size()!=0){
            if(*it > vec[vec.size()-1] or vec.size()==1){
                peter+=*it;
                vec.erase(it);
                p++;
            }else{
                peter+=vec[vec.size()-1];
                vec.pop_back();
                p++;
            }
        }
        if(j<p and vec.size()!=0){
            if(*it > vec[vec.size()-1] or vec.size()==1){
                john+=*it;
                vec.erase(it);
                j++;
            }else{
                john+=vec[vec.size()-1];
                vec.pop_back();
                j++;
            }
        }
    }
    cout<<peter<<" "<<john<<endl;
}

int main(){
    int n,x;
    vector<int> cards;
    cin>>n;
    for(int i=0; i<n ;i++){
        cin>>x;
        cards.push_back(x);
    }
    peterAndJohn(cards);
    
    return 0;
}
