#include <iomanip>
#include <iostream>
#include <string>
#include <vector>
#include <set>
#include <map>

using namespace std;

void staircase(int n) {
	cout << setw(n);
	for (int i = n - 1; i < 0; i--) {
		int num = n - i;
		cout << string(num, '#') << endl;

	}
}


int main() {

    int n,q;
    vector<vector<int>> arr;
    cin >> n >> q;

    for(int i=0; i<n; i++) {
        int k;
        cin >> k;
        for(int j=0; j<k; j++) {
            int value;
            cin >> value;
            arr[i].push_back(value);
        }
    }


    for(int i=0; i < arr.size(); i++) {
    	int a,b;
    	cin >> a >> b;
    	cout << arr[a][b] << endl;
    }



    return 0;
}

