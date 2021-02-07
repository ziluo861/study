/*************************************************************************
	> File Name: map.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 25 Nov 2020 07:52:10 PM CST
 ************************************************************************/

#include <iostream>
#include <map>
#include <unordered_map>
#include <string>
using namespace std;

struct node {
	int x, y;
	bool operator< (const node &b) const {
		return this->x < b.x;
	}
};

int main() {
	unordered_map<string, int> m;
	string a = "123";
	m[a] = 999;
	cout << m["123"] << endl;
	cout << m[a] << endl;
	cout << m["56"] << endl;
	
	/* map<node, int> m;
	node a;
	m[a] = 5;
    cout << m[a] << endl; */
	return 0;
}
