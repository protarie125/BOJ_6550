#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

string s, t;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  while (cin >> s >> t) {
    auto i = 0ULL;
    auto j = 0ULL;
    auto loop = true;
    while (loop) {
      while (loop) {
        if (s[i] == t[j]) {
          ++i;
          ++j;
        } else {
          ++j;
        }

        if (i == s.length()) {
          cout << "Yes\n";
          loop = false;
          break;
        }

        if (j == t.length()) {
          cout << "No\n";
          loop = false;
          break;
        }
      }
    }
  }

  return 0;
}