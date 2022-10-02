#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v1, v2, s, t, i;
	setlocale(LC_ALL, "Ukrainian");
	cout <<"¬вед≥ть швидк≥сть першого автомоб≥л€: ";
	cin >> v1;
	cout <<"¬вед≥ть швидк≥сть другого автомоб≥л€: ";
	cin >> v2;
	cout <<"¬вед≥ть в≥дстань м≥ж ними: ";
	cin >> s;
	cout <<"¬вед≥ть час";
	cin >> t;
	cout <<"¬≥дстань м≥ж ними через вказаний час: " << s-((v1+v2)*t);
	
	cin >> i;
	return 0;
}
