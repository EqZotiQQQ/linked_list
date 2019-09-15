#include "linkedList.h"
#include <vector>
template<class T>
class LinkedListUpdate : public LinkedList {
protected:
	std::vector<T> vectorOfPointers;
public:
	LinkedListUpdate();
	LinkedListUpdate<T>& pushback(T const& data) override;
	LinkedListUpdate<T>& pushfront(T const& data) override;
	LinkedListUpdate<T>& insertIn(T const& data, int number) override;
	LinkedListUpdate<T>& removeElement(int number) override;
	LinkedListUpdate<T>& popfront() override;
	LinkedListUpdate<T>& popback() override;
	LinkedListUpdate<T>& operator[](int number);
	virtual ~LinkedListUpdate();
};