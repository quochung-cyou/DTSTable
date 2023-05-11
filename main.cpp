// NGUYEN QUOC HUNG - quochung.cyou

#include <bits/stdc++.h>
using namespace std;

// Template
template <typename T>
istream &operator>>(istream &in, vector<T> &a)
{
	for (auto &x : a)
		in >> x;
	return in;
};
template <typename T>
ostream &operator<<(ostream &out, vector<T> &a)
{
	for (auto &x : a)
		out << x << ' ';
	return out;
};
template <typename T1, typename T2>
ostream &operator<<(ostream &out, const pair<T1, T2> &x) { return out << x.f << ' ' << x.s; }
template <typename T1, typename T2>
istream &operator>>(istream &in, pair<T1, T2> &x) { return in >> x.f >> x.s; }
template <typename T>
using matrix = vector<vector<T>>;
template <typename T>
using rubik = vector<vector<vector<T>>>;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pi;
typedef pair<ll, ll> pl;
typedef pair<ld, ld> pd;

typedef vector<int> vi;
typedef vector<ld> vd;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;

typedef long long ll;
const int MOD = 1000000007;
typedef long double ld;
#define db(x) cout << (x) << '\n';
#define faster()                  \
	ios_base::sync_with_stdio(0); \
	cin.tie(NULL);                \
	cout.tie(NULL);
#define FORAB(i, a, b) for (int i = a; i < (b); i++)
#define FOR(i, a) for (int i = 0; i < (a); i++)
#define FORd(i, a, b) for (int i = (b)-1; i >= a; i--)
#define ull unsigned long long int
#define mp make_pair
#define pb push_back
#define f first
#define s second
#define lb lower_bound
#define ub upper_bound
#define all(x) x.begin(), x.end()
#define ins insert


//				J2K2	J1K1	J0K0	Z
//Q2Q1Q0		X=0	X=1	X=0	X=1	X=0	X=1	X=0	X=1
//000			0X	0X	0X	0X	0X	1X	0	0
//001			0X	0X	0X	1X	X1	X0	0	0
//011			0X	0X	X1	X0	X1	X1	0	0
//010			0X	1X	X1	X0	0X	0X	0	1
//110			X1	X0	X1	X0	0X	0X	0	1
//
//
//
//
//
//
//

string chiyeuminhem(int X, int Q0, int Q1, int Q2, int J, int K, int Z) {
	if (J != -1) {
		if (J == 2) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "0";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			} else if (X == 1) {	
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "0";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "1";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			}
		} else if (J == 1) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "0";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			} else {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "0";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "1";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			}

		} else if (J == 0) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "0";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
			} else {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "1";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
			}
		}
	}
	if (K != -1) {
		if (K == 2) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "1";
				}
			} else if (X == 1) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
			}

		} else if (K == 1) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "1";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "1";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "1";
				}
			} else {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "X";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "0";
				}
			}

		} else if (K == 0) {
			if (X == 0) {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "1";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "1";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			} else {
				if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
					return "X";
				} 
				if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
					return "0";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
					return "1";
				}
				if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
				if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
					return "X";
				}
			}
		}
	}
	if (Z != -1) {
		if (X == 0) {
			if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
				return "0";
			} 
			if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
				return "0";
			}
			if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
				return "0";
			}
			if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
				return "0";
			}
			if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
				return "0";
			}
		} else {
			if (Q2 == 0 && Q1 == 0 && Q0 == 0) {
				return "0";
			} 
			if (Q2 == 0 && Q1 == 0 && Q0 == 1) {
				return "0";
			}
			if (Q2 == 0 && Q1 == 1 && Q0 == 1) {
				return "0";
			}
			if (Q2 == 0 && Q1 == 1 && Q0 == 0) {
				return "1";
			}
			if (Q2 == 1 && Q1 == 1 && Q0 == 0) {
				return "1";
			}
		}
	}
	return "X";
}



int main() {
	faster();
	//Q1Q0 00	01	11	10
	//XQ2 00 01 11 10
	//case J2

	int Q1[4] = {0, 0, 1, 1};
	int Q0[4] = {0, 1, 1, 0};
	int X[4] = {0, 0, 1, 1};
	int Q2[4] = {0, 1, 1, 0};


	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
		
			//cout << i  << j << ";"<< X[i] << Q2[i] << Q1[j] << Q0[j] << " ";
			cout << chiyeuminhem(X[i], Q0[j], Q1[j], Q2[i], -1, 0, -1) << ", ";
		}
		cout << endl;
	}

    
    
	
}
