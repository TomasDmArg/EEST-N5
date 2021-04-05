#include <iostream>
#include <string>
#include <vector>
using namespace std;
  
int main(){
	string text1;
	std::vector<int> modText1 = {1,1,1,1};
	//int modText1[] = {1,1,1,1};
	string letters = "ABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
    //char letters[27][1] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'Ñ', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
	cin>>text1;
	//cout<<letters.find(text1[i], 0;
	//modText1.resize(text1.size());
	for(int i = 0; i < text1.size(); i++){
		char findThem = text1[i];
		cout<<findThem<<endl;
		cout<<letters.find(findThem)<<endl;
		modText1.push_back(letters.find(findThem));
		//modText1[i] = letters.find(findThem);
		cout<<modText1<<endl;
	}
	cout<<modText1;
	return 0;
}
