#include <iostream>
#include <vector>
using namespace std;

void backtrack_dfs(vector<size_t>& a, size_t k, size_t t, vector<size_t>& ans) {
	if (t == 0) {
		for (size_t it : ans)
			cout << "ans: " << it << " ";
		cout << '\n';
	}
	else {
		++k;
		size_t i = 1;
		while (i <= t) {
			ans.push_back(i);
			size_t t2 = t - i;
			if (t2 >= 0) backtrack_dfs(a, k, t2, ans);
			ans.pop_back();
			++i;
		}
	}
}
void search_option(size_t t) {
	vector<size_t> a;
	vector<size_t> ans;
	backtrack_dfs(a, 0, t, ans);
}

void tests(){
	cout << "Expected ans for t=5: \n";
	search_option(5);
	cout << "\n\n";

	cout << "Expected ans for t=3: \n";
	search_option(3);
	cout << "\n\n";

	cout << "Expected ans for t=0: \n";
	search_option(0);
	cout << '\n';
}

int main() {
	
	tests();
	return 0;
}


