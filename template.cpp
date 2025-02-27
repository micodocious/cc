#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second 
#define PB push_back
#define MP make_pair
#define REP(i,a,b) for (int i = a; i <= n;i++)

int main() {
  //make the code run faster
  ios::sync_with_stdio(0);
  cin.tie(0);
  /* 
  //--------------------- I/O
  //read input/output files
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  //basic i/o
  int a = 123, b = 456;
  string x ="monkey";
  cout << a << "" << b << "" << x << "\n";
  //read
  int a,b;
  scanf("%d %d", &a, &b);
  //print
  int a = 123, b = 456;
  printf("%d %d\n", a, b);
  //read whole line
  string s;
  getline(cin, s);
  //when the amount of data is unknown
  while (cin>>x){
    //code
  }
  //----------------------- NUMBERS
  //32 bit
  int z = 10;
  //64 bit
  long long x = 123456789123456789LL;  
  long long x = 1;
  for (int i=2;i<=n;i++){
    x=(x*i)%m;
    printf("%llu\n",x);
  }
  cout << x%m << "\n";
  // make sure there are no negative nums in remainder
  x = x%ml
  if (x < 0) x += m;
  //----------------------- FLOATING POINT NUMBERS
  // 64 bit double and 80 bit long double (more accurate)
  double x = 0.3*3+0.1;
  printf("%.20f\n",x);
  // to compare floating pt nums
  if (abs(a-b) < 1e-9){
    // a and b are equal
  }
  //----------------------- Shortening code
  ll a = 123456789;
  ll b = 987654321;
  cout << a*b << "\n";
  //----------------------- Macros 
  // Vector and Pair Macros
  vector<pair<int,int>> v;
  int y1=1,x1=2,y2=3,x2=4;
  v.PB(MP(y1,x1));
  v.PB(MP(y2,x2));
  for(size_t i=0; i<v.size();i++){
    int d = v[i].F+v[i].S;
    cout << "sum at index " << i << " : "<< d << "\n";
  }
  */
  // loops
  REP(i, 1, n) {
    search(i);
  }
  
}