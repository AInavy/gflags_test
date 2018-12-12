#include <iostream>
#include "gflags/gflags.h"

using namespace std;

DEFINE_bool(verbose, true, "verbose is default: true");
DEFINE_string(message, "gflages test", "message is gflags test");


int main(int argc, char *argv[])
{
    cout<<"argc = "<<argc<<endl;
    for(int i = 0;i<argc;i++)
        cout<<argv[i]<<" ";
    cout<<endl;

    gflags::ParseCommandLineFlags(&argc, &argv, true);
    cout << FLAGS_message << std::endl;
    gflags::ShutDownCommandLineFlags();
    
    cout<<"gflags Parsed:"<<endl;
    cout<<"agrc = "<<argc<<endl;
    for(int i = 0;i<argc;i++)
        cout<<argv[i]<<" ";
    cout<<endl;
    cout<< FLAGS_verbose<<endl;
    return 0;
}
