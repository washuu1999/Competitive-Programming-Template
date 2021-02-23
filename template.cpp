#include <bits/stdc++.h>
using namespace std;
#define nl	"\n"
#define int	long long
#define ld	long double
#define pf	push_front
#define pb	push_back
#define mp	make_pair
#define pii	pair<int, int>
#define fr(i, N)	for (int i = 0; i < (int) N; i++)
#define frr(i, A, B)	for (int i = (int) A; i <= (int) B; i++)
#define fastIO	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define fileIO	freopen("input.txt", "r", stdin);freopen("output.txt", "w", stdout);

template<typename T> vector<vector<T>> v2d (int ROW, int COL, T DEFAULT_VALUE)
{
	vector<vector<T>> vec(ROW , vector<T> (COL, DEFAULT_VALUE));
	return vec;
}

int GCD(int A, int B) {return (B == 0) ? A : GCD(B, A % B);}
int LCM(int A, int B) {return A * B / GCD(A, B);}
int max(int A, int B) {return (A >= B) ? A : B;}
int min(int A, int B) {return (A <= B) ? A : B;}

int bpow(int A, int B)
{
	int product = 1;
	while (B > 0) {
		if (B & 1)
			product = product * A;
		A = A * A;
		B = B >> 1;
	}
	return product;
}

int bpow(int A, int B, int mod)
{
	A %= mod;
	int product = 1;
	while (B > 0) {
		if (B & 1)
			product = (product * A) % mod;
		A = (A * A) % mod;
		B = B >> 1;
	}
	return product;
}

int extendedEuclid(int A, int B, int &X, int &Y)
{
	if (B == 0)
	{
		X = 1;
		Y = 0;
		return A;
	}
	int X1, Y1;
	int GCD = extendedEuclid(B, A % B, X1, Y1);
	X = Y1;
	Y = X1 - Y1 * (A / B);
	return GCD;
}

int modInverse(int A, int M)
{
	int X, Y;
	int GCD = extendedEuclid(A, M, X, Y);
	if (GCD != 1) {
		cout << "A and M are not coprime...Check again" << nl;
		return -1;
	}
	else {
		return (X % M + M) % M;
	}
}

int modInverseFermat(int A, int M)
{
	/* assert M is prime */
	return bpow(A, M - 2, M);
}

void getModInverse(int *inv, int M)
{
	/* assert M is a prime and int inv[M] */
	inv[0] = -1;
	inv[1] = 1;
	for (int i = 2; i < M; i++) {
		inv[i] = M - (M / i) * inv[M % i] % M;
	}
}


const int MOD = (int) 1e9 + 7;


/* ------------------------------ author: washuu ------------------------------ */

void solve()
{

}


int32_t main()
{
	fastIO
	fileIO

	int Testcases = 1;
	cin >> Testcases;
	while (Testcases--) {
		solve();
	}

	return 0;
}
