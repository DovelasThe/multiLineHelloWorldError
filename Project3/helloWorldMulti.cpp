	#include"iostream"
	#include"string"
	using std::cout;
	using std::string;
	using std::to_string;
	using std::endl;
	int main()
	{
		for (int i = 1; i < 4; i++) {
			string hello = "Hey";
			string world = "Waow";
			string helloworld = hello + ", " + world;
			cout << helloworld + to_string(i) << endl;
		}
		return 0
	}
