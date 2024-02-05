// priority_queue::size
// Heap structure with c++
#include <iostream>       // std::cout
#include <queue>		  // std::priority_queue
using namespace std;
int main(){
	priority_queue<int> value;
	value.push(5);
	value.push(99);
	value.push(8);
	value.push(7);
	value.pop();
	
	cout << "Max Heap size : " << value.size() << endl;
	cout << "Max Heap last element : " << value.top() << endl;
	
	if (value.empty())
		cout << "Heap is empty" << endl;
	else
		cout << "Heap is not empty" << endl;
		
	return 0;
}

