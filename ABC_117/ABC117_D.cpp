// ABC117_D
#include <iostream>
#include <cstdio>
#include <string>
#include <vector>
#include <iterator>  // std::back_inserter()
#include <set>
#include <map>
#include <algorithm>  // std::copy()
#include <functional>  // std::greater<T>()
#include <utility>  // std::swap()
#include <numeric>  // accumulate(ALL(vec), 0)  0 は初期値
#include <bitset>  // static_cast<std::bitset<8>>
#include <sstream>  // std::stringstream
#include <cmath>
#include <climits>  // INT_MIN
#include <cctype>  // std::isdigit()
#include <iomanip>  // std::setprecision()
using namespace std;

#define ALL(obj) (obj).begin(), (obj).end()
#define REP(i, n) for (int i=0; i < (int)(n); i++)  // 0 ~ n-1
#define REPN(i, n) for (int i=1; i <= (int)(n); i++)  // 1 ~ n
#define MIN(vec) min_element(ALL((vec)))  // イテレータのため、値を取り出すときは * を先頭につける
#define MAX(vec) max_element(ALL((vec)))
#define IDX(vec, element_iter) distance((vec).begin(), element_iter)
#define SUM(vec) accumulate(ALL((vec)), 0)  // 0 は初期値
#define COPY(vec1, vec2) copy(ALL(vec1), back_inserter(vec2))  // vec1をvec2にコピーする vec2は空にしておく必要あり
typedef long long ll;
typedef unsigned long long ull;
const int MOD = 1000000007;  // 1 000 000 007


int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);

    // input
    ull N, K;
    cin >> N >> K;
    vector<ull> vec(N);
    REP(i, N) cin >> vec[i];
    
    // calculation
    const ull bit = 64;
    ull sum = 0;
    stringstream ss;
    bitset<bit> bs;
    ull max_vec = *MAX(vec);
    if (N == 1) {
        bs = bitset<bit>(K)^bitset<bit>(vec[0]);
        cout << bs.to_ullong() << "\n";
    } else if (max_vec >= K) {
        REP(i, N) {
            bs = bitset<bit>(K)^bitset<bit>(vec[i]);
            sum += bs.to_ullong();
        }
        cout << sum << "\n";
    } else {
        REP(i, N) {
            bs = bitset<bit>(K)^bitset<bit>(vec[i]);
            sum += bs.to_ullong();
        }
        cout << sum << "\n";
    }
    
    
    return 0;
}
