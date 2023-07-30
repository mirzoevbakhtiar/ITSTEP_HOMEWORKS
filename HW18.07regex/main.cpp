#include <iostream>
#include <regex>
#include <string>
using namespace std;
int main()
{


    string data{ "19.03.2006" };
    regex dataRegex(R"((0[1-9]|[1-2][0-9]|3[01])\.(0[1-9]|1[0-2])\.(\d{4,}))");
    if (regex_match(data, dataRegex))
        cout << "Complete" << endl;
    else
        cout << "Incorrect data" << endl;


    ///////////////////////////////////////////////

    string URL{ "https://www.youtube.com/" };
    regex URLRegex(R"((?:https?)(:\/\/\w+)(?:\.\w{2,})+(?:[^ \s]+))");
    if (regex_match(URL, URLRegex))
        cout << "Correct URL" << endl;
    else
        cout << "Incorrect URL" << endl;

    ///////////////////////////////
    string HTML{ "<div> , /b , /n " };
    regex HTMLRegex(R"(<[^>]+>)");
    if (regex_match(HTML, HTMLRegex))
        cout << "Correct tag" << endl;
    else
        cout << "Incorrect tag" << endl;

    return 0;
}

