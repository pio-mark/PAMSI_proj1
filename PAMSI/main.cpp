#include <iostream>
#include <bitset>
#include <cmath>
using namespace std;
#include "bank.h"
#include <stdlib.h>
#include <conio.h>
#include <cstdlib>
#include <fstream>
void menu(int a);
#include <chrono>
using namespace std::chrono;


int main() {
    Queue q;

    /* kod sluzacy do testow
    ifstream plik("test.txt");
    string a;
    auto start = high_resolution_clock::now();
    for(long long int i=0; i<=100000000; ++i){
        plik>>a; q.addEnd(a);
    }
    for(long long int i=0; i<=100000000; i++){
        q.removeFront();
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << duration.count() << endl;
    cout<<q.peek()<<endl;
    */

    //Kod dzialania menu

    char choice;
    while(choice != 'k'){
        menu(q.howMany());
        cin>>choice;
        switch(choice){
            case '1':{
                string name;
                cout<<"Kto sie ustawia? "; cin>> name;
                q.addEnd(name);
                break;
            }
            case '2':{
                cout<<endl<<"Osoba na pierwszym miejscu ->"<<q.peek()<<endl<<endl; system("pause"); break;
            }
            case '3':{
                if(q.howMany()>=1)
                    q.removeFront();
                else{
                    cerr<<"Blad!"<<endl;system("pause"); }
                 break;
            }
            case '4':{
                if(q.isEmpty()){
                    cout<<"Pusta."<<endl<<endl;
                }
                else
                    cout<<"Ktos stoi."<<endl<<endl;
                system("pause"); break;
            }
            case 'k':{
                break;
            }
            case 'm':{
                menu(q.howMany());
                break;
            }
            default:
                break;
        }
    }


}

//funkcja pokazujaca menu
void menu(int a){
    system("CLS");
    cout<<endl<<"    Kolejka do banku. Ponizej mozliwe interakcje."<<endl<<endl;
    cout<<"1. Ustaw sie w kolejce."<<endl;
    cout<<"2. Zobacz kto jest pierwszy w kolejce."<<endl;
    cout<<"3. Usun pierwsza osobe z kolejki."<<endl;
    cout<<"4. Sprawdz czy ktos jest w kolejce."<<endl;
    cout<<"m. Menu."<<endl;
    cout<<"k. Koniec."<<endl<<endl;
    cout<<"   W kolejce jest "<<a<<"."<<endl;
    cout<<"Wybor> ";
}