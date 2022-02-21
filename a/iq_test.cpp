
		#include<iostream>
		#include<math.h>
		#include <bits/stdc++.h>
#define ll long long
		 
		using namespace std;
		double calc_an(ll a, double r , ll n) {
			return  a* pow(r,n-1);
		}
		// double cal_sn(ll a, ll r , ll n) {

		// 	return (a * (1 - pow(r,n))) / (1 - r);
		// }

		ll calc_arithmetic(int a1, int cons, int n) {
			return a1 + (cons * n);
		}
		
		 
		int main()
		{

			int   a1,a2,a3,a4;
			double ans = 0;
			cin >> a1 >> a2 >> a3 >> a4;
			double r = double(a4) / double(a3);

			if(a4 - a3 == a3 - a2 && a3 - a2 == a2 - a1 ) {
				ans =  calc_arithmetic(a1 ,a4 - a3 ,4);
			}
			else if(  double(a3 )/ double(a2)  == r &&  double(a2) / double(a1) == r  ) {
				if(( ll) (r * a4) != r *a4){
			 	 
					ans = 42;
				}
				else {
				ans = calc_an(a1,r,5);

			}

			}
			else {
				ans = 42;
			}

			cout << ans << endl;
			
		return 0;
		}
				

