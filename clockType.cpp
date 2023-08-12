#include "clockType.h"

void clockType::setType(int s, int m, int h) {
	sec = s;
	min = m;
	hour = h;
}

int clockType::getSec() const {
	return sec;
}

int clockType::getMin() const {
	return min;
}

int clockType::getHour() const {
	return hour;
}

void clockType::print() const {
	std::cout << hour << ":" << min
		<< ":" << sec;
}

clockType::clockType(int s, int m, int h) {
	setType(s, m, h);
}
