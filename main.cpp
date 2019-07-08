#include <iostream>
#include "SinkDotCom.cpp"
using namespace std;

int main() {
	SinkDotCom game;

	game.setDotCom();

	while(game.dotComAlive()) {
		game.userStrike();
	}

	cout << "You win! " << "Total score: " << game.getScore() << "!\n";
	
	return 0;
}
