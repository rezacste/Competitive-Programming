/*
ID: dipkori1
TASK: test
LANG: C++                 
*/
#define LOCAL
// #pragma comment(linker, "/stack:200000000")
#pragma GCC optimize("O3")
// #pragma GCC target ("avx2")
// #pragma GCC optimize("Ofast")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
// #pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
 
using namespace __gnu_pbds;
using namespace std;
 
template <typename T>
using ordered_set =
    tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
 
template <typename A, typename B>
ostream& operator <<(ostream& out, const pair<A, B>& a) {
    out << "(" << a.first << "," << a.second << ")";
    return out;
}
template <typename T, size_t N>
ostream& operator <<(ostream& out, const array<T, N>& a) {
    out << "["; bool first = true;
    for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "]";
    return out;
}
template <typename T>
ostream& operator <<(ostream& out, const vector<T>& a) {
    out << "["; bool first = true;
    for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "]";
    return out;
}
template <typename T, class Cmp>
ostream& operator <<(ostream& out, const set<T, Cmp>& a) {
    out << "{"; bool first = true;
    for (auto& v : a) { out << (first ? "" : ", "); out << v; first = 0;} out << "}";
    return out;
}
template <typename U, typename T, class Cmp>
ostream& operator <<(ostream& out, const map<U, T, Cmp>& a) {
    out << "{"; bool first = true;
    for (auto& p : a) { out << (first ? "" : ", "); out << p.first << ":" << p.second; first = 0;} out << "}";
    return out;
}
#ifdef LOCAL
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)
#else
#define trace(...) 42
#endif
template <typename Arg1>
void __f(const char* name, Arg1&& arg1){
    cerr << name << ": " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void __f(const char* names, Arg1&& arg1, Args&&... args){
    const char* comma = strchr(names + 1, ',');
    cerr.write(names, comma - names) << ": " << arg1 << " |";
    __f(comma + 1, args...);
}

template <typename T> 
T Floor(T a, T b) { if (a % b == 0 || a >= 0) return a / b; return (a / b) - 1; }

template <typename T> 
T Ceil(T a, T b) { return Floor(a + b - 1, b); }

template <typename T> 
T setbits(T n) { return __builtin_popcountll(n); }

template <typename T> 
T zerobits(T n) { return __builtin_ctzll(n); }

// template <typename T> 
// T zerobits(T n) { return __builtin_clzll(n); }

template <typename T> 
T parity(T n) { return __builtin_parityll(n); }

template <typename T> 
T binpow(T base, T exponent, T mod) {
    T result = 1; 
    while (exponent) { 
        if (exponent & 1) { 
            result = (result * base) % mod; 
        }
        base = (base * base) % mod; exponent >>= 1; 
    } 
    return result;
}

int dx[] = {-1, 1, 0, 0, -1, -1, 1, 1};
int dy[] = {0, 0, -1, 1, -1, 1, -1, 1};

typedef pair<int, int> pii;
using ll = long long;
template <typename T> static constexpr T inf = numeric_limits<T>::max() / 2;
const int MOD = 1e9 + 7;
mt19937 mrand(random_device{}());
int rnd(int x) { return mrand() % x; }
// const int MOD = 998244353;
 

 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);
    cout << fixed;
    freopen("test.out", "w", stdout);
    freopen("test.in", "r", stdin);
    
    return 0;
}