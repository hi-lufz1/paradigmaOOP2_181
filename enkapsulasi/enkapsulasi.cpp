#include<iostream>
using namespace std;

class remoteLampu {
private:
	string saklarNo[10];
public:
	void setSaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getSaklarNo(int i) {
		return saklarNo[i];
	}
};
int main() {
	remoteLampu lampuRumah;

	lampuRumah.setSaklarNo(0, "teras rumah");
	lampuRumah.setSaklarNo(1, "ruang tamu");
	lampuRumah.setSaklarNo(2, "kamar tidur");
	lampuRumah.setSaklarNo(3, "dapur");

}