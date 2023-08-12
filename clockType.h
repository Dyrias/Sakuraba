#include <iostream>

class clockType {
public:
	void setType(int, int, int);

	int getSec();
	int getMin();
	int getHout();
	
	void print() const;
	
	clockType(int = 0, int = 0, int = 0);
private:
	int sec;
	int min;
	int hour;
	};
