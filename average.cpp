#include<iostream>
#include<cstdlib>
using namespace std;

int main(int argc , char *argv[]){
    double sum = 0;
    if(argc == 1){
        cout << "Please input numbers to find average." << endl;
        
    }else{
        cout << "---------------------------------" << endl;
        for(int i = 1; i < argc; i++){
            sum += atof(argv[i]);
            
        }
        cout << "Average of " << (argc-1) << " numbers = " << sum/(argc-1) << endl;
        cout << "---------------------------------" << endl;

    }
    return 0;
}
