#include <iostream>
using namespace std;
enum GameResult {WIN, LOSE, TIE, CANCEL};//声明枚举类型 
int main()
{
	GameResult result;//声明枚举变量 
	enum GameResult omit = CANCEL;//定义枚举变量 
	for (int count=WIN;count<=CANCEL;count++){
		result = GameResult(count);
		if(result==omit)
			cout << "The game was cancelled "<< endl;
		else{
			cout << "The game was played ";
			if(result==WIN)
				cout << "and we win!";
			if(result==LOSE)
				cout << "and we lose";
			cout << endl;  
		}
	}
	return 0; 
	
} 
