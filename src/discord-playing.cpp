#include <windows.h>
#include <iostream>
#include <string>

using namespace std;
int main(int argc, char *argv[])
{
  cout << "Rename this file to Foo.exe to have the option \"Foo\" under" << endl;
  cout << "  Discord > User Settings > Games > Add It" << endl;
  string path = argv[0];
  string base_filename = path.substr(path.find_last_of("/\\") + 1);
  string::size_type const p(base_filename.find_last_of('.'));
  string file_without_extension = base_filename.substr(0, p);
  cout << "Currently playing: [" << file_without_extension << "]" << endl;
  SetConsoleTitle(file_without_extension .c_str());
  cout << "Closing this window removes your\nDiscord \"Playing...\" status" << endl;
  cout << "Closing... ";
  system("pause");
}
