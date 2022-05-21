#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

vector<int> avec;
vector<int> bvec;

float sim;

void CosSim()
{
	int l = avec.size();
	float ups = 0;
	float downs1 = 0;
	float downs2 = 0;

	for (int i = 0; i < l; i++)
	{
		ups = ups + (avec.at(i) * bvec.at(i));
		downs1 = downs1 + (pow(avec.at(i), 2));
		downs2 = downs2 + (pow(bvec.at(i), 2));
	}
	downs1 = sqrt(downs1);
	downs2 = sqrt(downs2);
	sim = ups / (downs1 * downs2);
}

int main()
{
	int num, sum;

	cout << "벡터 원소들의 수를 입력해주세요." << endl;
	cin >> sum;
	
	cout << "첫 번째 벡터의 원소들을 차례대로 입력해주세요." << endl;
	for (int i= 0; i < sum; i++)
	{
		cin >> num;
		avec.push_back(num);
	}
	cout << "두번째 벡터의 원소들을 차례대로 입력해주세요." << endl;
	for (int j= 0; j < sum; j++)
	{
		cin >> num;
		bvec.push_back(num);
	}
	
	CosSim();

	cout << "유사도는" << sim << "입니다.";

}

