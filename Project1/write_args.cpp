//write_args.cpp
#include <iostream>

using namespace std;

//C++ 실행할 수 있는 과정 
//.cpp -> 전처리 -> 컴파일 ->
//오브젝티 (write_args.obj / .o) ->
//링킹 -> 실행파일(write_args.exe / a.out)


//테미널에서 실행한다며:
// >>> ./write_args.exe say hello world
//argc = 3
//argv = ["say","hello","world"]
//>>> say hello world
int main(int argc, char** argv)
{
    // 명령 프롬프트에 입력한 인수가 존재하면 출력
    if (argc > 1) {
        cout << "실행파일 : " << argv[0] << endl;
        // 첫 번째 인수를 출력
        // 공백 하나와 함께 나머지 인수들을 각각 출력
        cout << argv[1];

        for (int i = 2; i != argc; ++i)
            cout << " " << argv[i]; // argv[i]는 char* 타입
    }
    cout << endl;
    return 0;
}
