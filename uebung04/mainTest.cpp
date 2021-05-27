
#include <iostream>
#include "lagerDialog.h"
using namespace std;

int main(){

    try{
        LagerDialog ld;
        ld.start();
    }
    catch(const string& e){
        cout << "Main: " << e <<endl;
    }catch(...){
        cout << "Irgendeine Ausnahme gefangen"<<endl;
    }
}
