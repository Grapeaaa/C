#include <iostream>
using namespace std;
enum GameResult {WIN, LOSE, TIE, CANCEL};//����ö������ 
int main()
{
	GameResult result;//����ö�ٱ��� 
	enum GameResult omit = CANCEL;//����ö�ٱ��� 
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
