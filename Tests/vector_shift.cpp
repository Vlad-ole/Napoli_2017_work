#include <iostream>
#include <vector>

using namespace std;

void vector_shift()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for (int i = 0; i < 5; ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;


//    //shift right
//    v.pop_back();
//    for (int i = 0; i < v.size(); ++i)
//    {
//        cout << v[i] << " ";
//    }
//    cout << endl;

//    v.insert( v.begin(), 666 );



    //shift left
    v.erase(v.begin());
    v.insert( v.end(), 666 );

    //show
    for (int i = 0; i < v.size(); ++i)
    {
        cout << v[i] << " ";
    }
    cout << endl;

}

