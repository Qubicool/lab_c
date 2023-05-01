#include <iostream>
#include <vector>
using namespace std;
void lca(vector <int> vec)
{
    if (vec.size() == 0) { cout << 0; }
    vector <int> newvec{ vec.front() };
    for (int j = 0; j < vec.size(); j++)
    {
        if (vec[j] > newvec.back())
        {
            newvec.push_back(vec[j]);
        }
    }
    for (int i = 0; i < newvec.size(); i++) { cout << newvec[i] << " "; }
}
int main()
{
    vector <int> vec = { 5,10,6,12,3,24,7,8 };
    lca(vec);
    cout << endl;
    vector <int> vec1 = { 1,5,3,7,1,4,10,15 };
    lca(vec1);
    cout << endl;
    vector <int> vec2 = { -2,-5,2,12,22,32 };
    lca(vec2);
    cout << endl;
}
//#include <iostream>
//#include <vector>
//using namespace std;
//int lca(vector <int> vec)
//{
//    if (vec.size() == 0) return 0;
//    vector <int> newvec{ vec.front() };
//    if (*(vec.end() - 1) > newvec.back())
//    {
//        newvec.push_back(*(vec.end() - 1));
//    }
//    lca(vector<int>(vec.begin(), vec.end() - 1));
//    for (int i = 0; i < newvec.size(); i++) { cout << newvec[i] << " "; }
//}
//
//int main()
//{
//    vector <int> vec = { 5,10,3,4,5,12,22,24,30 };
//    lca(vec);
//}
