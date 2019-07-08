#include <ctime>
using namespace std;

class SinkDotCom {
	private:
		int field[7];
		int score = 0;
	public:
		void setDotCom() {
			srand(time(0));
			int startPoint = rand() % 4;
			
			for (int i = 0; i < 7; i++) field[i] = 0;
			for (int i = startPoint; i < startPoint + 3; i++) field[i] = 1;			
		}

		bool dotComAlive() {
			for (int i = 0; i < 7; i++) {
				if (field[i] == 1) return true;
			}
			return false;
		}

		void userStrike() {
			cout << "Enter number: ";
			int n;
			cin >> n;

			while (n < 0 || n > 6) {
				cout << "Enter correct number: ";
				cin >> n;
			}

			field[n] = 0;

			score++;
		}

		int getScore() {
			return score;
		}
};
