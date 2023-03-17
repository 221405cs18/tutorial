//ID:221405
//Name:Fayzulloh

#include <stdio.h>
#include <iostream>
using namespace std;

//int sum=1;
class Sum{
    int aa;
    int bb;
    int nn;
    int sum;
public:
//    void seta(int a){
//        this->aa=a;
//    }
//    void setb(int b){
//        this->bb=b;
//    }
//    void setn(int n){
//        this->nn=n;
//    }
    void setabn(){
        cin >> aa;
        cin >> bb;
        cin >> nn;
    }
    void PiceOfCake(){
        sum=1;
        while(aa%2 == 0 || bb%2 == 0){
            if(aa%2 == 0){
                aa = aa/2;
                sum = sum*2;
            }
            if(bb%2 == 0){
                bb = bb/2;
                sum = sum*2;
            }
        }
        if(sum >= nn) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
};
//string answer(int n){
//    if(sum >= n) return "YES";
//
//    return "NO";
//}

int main() {
    Sum s;
    s.setabn();
    s.PiceOfCake();
    return 0;
}
