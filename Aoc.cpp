
using namespace std;
int main()
{
	float radius;
	float aoc,coc;
	cout<<"Enter the radius"<<endl;
	cin>>radius;
	aoc=PI * radius * radius;
	coc=2 * PI * radius;
	cout<<"Area of circle="<<aoc<<endl;
	cout<<"Circumference of circle="<<coc<<endl;
	return 0;
}
