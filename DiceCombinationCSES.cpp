/*
     ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
     उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||
*/

#include <bits/stdc++.h>

using namespace std;
int m = 1e9 + 7;

int main() {
	
 	int n;
 	cin >> n;
 	vector<int> dp(n+1, 0);
 	dp[0]=1;
 	for(int i=1; i<n+1; i++) {
 		for(int j = 1; j <= 6; j++) {
 			if(j > i)break;
 			else if(j <= i) {
 				dp[i]= (dp[i]+dp[i-j])%m;
 			}
 		}
 	}
 	cout << dp[n] << endl;

}

