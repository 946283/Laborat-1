#include <iostream>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int v1, v2, s, t, i;
	setlocale(LC_ALL, "Ukrainian");
	cout <<"������ �������� ������� ���������: ";
	cin >> v1;
	cout <<"������ �������� ������� ���������: ";
	cin >> v2;
	cout <<"������ ������� �� ����: ";
	cin >> s;
	cout <<"������ ���";
	cin >> t;
	cout <<"³������ �� ���� ����� �������� ���: " << s-((v1+v2)*t);
	
	cin >> i;
	return 0;
}
