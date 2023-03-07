#include bits/stdc++.h;
typedef unsigned long long int L1;
using namespace std;
#define PL 3.14 float sx, sy,sz;
float short_dist(float x, float y, float z);

int main(){
    int i;
    float N, a[30], x,y,z;
    float sum =0;
    cin>>N;
    N = N*3;
    for(i =0; i<N;i++){cin>>a[i];}
    sx = a[0];
    sy = a[1];
    sz = a[2];
    for(i = 3; i<N;i=i+3){sum = sum + short_dist(a[i], a[i+1], a[i+2]);}
    std::cout <<  << std::endl;
    
}
