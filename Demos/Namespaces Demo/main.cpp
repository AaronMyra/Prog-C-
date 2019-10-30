#include <iostream>

using namespace std;
namespace NS1{int square(int num);}
namespace NS2{int square(int num);}

int main() {

    int answer = 0;
    {
        using namespace NS1;
        answer = square(3);
        cout << "NS1 answer is: " << answer << endl;
    }
    {
        using namespace NS2;
        answer = square(3);
        cout << "NS2 answer is: " << answer << endl;
    }
    return 0;
}

namespace NS1
{
    int square(int num){
        return num * num;
    }
}

namespace NS2
{
    int square(int num){
        return num * num;
    }
}