#include <iostream>
//类定义
class Clock
{
public:
	Clock(int newH, int newM, int newS);//构造函数
	Clock();//默认构造函数
	void setTime(int newH, int newM, int newS);
	void showTime();
private:
	int hour, minute, second;
};
//构造函数定义
Clock::Clock(int newH, int newM, int newS) :
	hour(newH), minute(newM), second(newS) {}
//默认构造函数定义
Clock::Clock() : hour(0), minute(0), second(0) {}
void Clock::setTime(int newH, int newM, int newS) {
	hour = newH;
	minute = newM;
	second = newS;
}
inline void Clock::showTime() {
	std::cout << hour << ":" << minute << ":" << second << std::endl;
}

int main()
{
	Clock c(0, 0, 0);
	c.showTime();
	c.setTime(1, 2, 3);
	c.showTime();
	return 0;
}
