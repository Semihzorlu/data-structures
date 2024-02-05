//Deque with c++
#include<iostream>
#include<deque>
using namespace std;

int main(){
	deque<int> value;
	
	value.push_back(11);
	value.push_front(22);
	value.push_back(33);
	value.pop_back();
	value.push_back(44);
	value.push_front(55);
	value.pop_back();
	value.push_front(66);
	value.pop_front();
	value.push_front(66);
	value.pop_front();
	value.push_back(77);
	value.pop_back();
	cout << "size : " << value.size() << "\n";
	cout << "front : " << value.front() << "\n";
	cout << "back : " << value.back() << "\n";
	
	for(int i=0; i<value.size(); i++)
		cout << value.at(i) << " ";
		
	
	return 0;
}
