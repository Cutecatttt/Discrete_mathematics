#include <bits/stdc++.h>

using namespace std;
int perent[100005], n;

//Đặt nó là cha của chính nó
void make_set(){
    for(int i = 1; i <= n; i++){
        parent[i] = i;
    }
}

//Tìm cha của đỉnh v
void find_parent(int v){
    if(v == parent[v]) return v;
    return parent[v] = find_parent(parent[v]);
}

//Nối 2 tập hợp
void union_set(int a, int b){
    a = find_parent(a);
    b = find_parent(b);
    if(a != b) parent[b] =a;
}

int main() {

    return 0;
}
