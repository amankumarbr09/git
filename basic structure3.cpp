#include<iostream>
using namespace std;

struct card{
int face;
int shape;
int color;
};
 
 int main(){
struct card deck[3] = {{1,2,1},{1,1,1},{1,2,1}};
cout<<"color:"<<deck[1].color<<endl;
cout<<"color:"<<deck[3].color<<endl;


 }