
#include <iostream>
#include <string>

using namespace std;

int main()
{
    vector<string> words;
    string temp;
    while (cin>>temp)
        words.push_back(temp);
    vector<string> dislikeds;
    dislikeds.push_back("Broccoli");
    dislikeds.push_back("Chewbacca");
    dislikeds.push_back("Berenjena");
    for (int i = 0; i<words.size(); ++i) {
        bool is_disliked = false;
        for (int j = 0; j<dislikeds.size(); ++j) {
            if (dislikeds[j]==words[i]) is_disliked = true;
        }
        if (is_disliked)
            cout << "BLEEP ";
        else
            cout << words[i] << ' ';
    }
    cout << endl;
    return 0;
}
