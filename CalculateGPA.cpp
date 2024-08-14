#include <iostream>
#include <string>
using namespace std;

int wait(unsigned long milisec)
{
    struct timespec req={0};
    time_t sec=(int)(milisec/1000);
    milisec=milisec-(sec*1000);
    req.tv_sec=sec;
    req.tv_nsec=milisec*1000000L;
    while(nanosleep(&req,&req)==-1)
        continue;
    return 1;
}


int main() {
    float sum = 0;
    int temp;
    int total = 0;
    cout << "I'll Calculate your GPA!" << endl << "First: Are you Discrete or Integrated? (write D or I)" << endl;
    char di;
        cin >> di;
    for(int i = 0; i < 1; i++){
        
        if(di == 'D' || di == 'd'){
            total += 4;
            cout << endl << "What is your Biology Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
        
            cout << endl << "What is your Chemistry Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
            
            cout << endl << "What is your Physics Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
        
            cout << endl << "What is your Extra Class (DT, Music, Art, PHE, Drama) Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
        }
        else if(di == 'I' || di == 'i') {
            total += 3;
            cout << endl << "What is your Science Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
        
            cout << endl << "What is your Extra Class 1 (DT, Music, Art, PHE, Drama) Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
        
            cout << endl << "What is your Extra Class 2 (DT, Music, Art, PHE, Drama, Spanish) Grade (Out of 7)?" << endl;
            cin >> temp;
            sum += temp;
            
            
        }
        else{
            cout << endl << "Please enter D or I ONLY!" << endl;
            i--;
        }
    }
    
    cout << endl << "Are you Spanish? (Y or N)" << endl;
    char s;
    cin >> s;
    
    if(s == 'Y' || s == 'y'){
        total++;
        cout << endl << "What is your Spanish Grade (Out of 7)?" << endl;
        cin >> temp;
        sum += temp;
    }
    cout << endl << "What is your English Grade (Out of 7)?" << endl;
    cin >> temp;
    sum += temp;
    
    cout << endl << "What is your Arabic Grade (Out of 7)?" << endl;
    cin >> temp;
    sum += temp;
    
    cout << endl << "What is your Math Grade (Out of 7)?" << endl;
    cin >> temp;
    sum += temp;
    
    cout << endl << "What is your Humanities Grade (Out of 7)?" << endl;
    cin >> temp;
    sum += temp;
    
    total += 4;
    
    cout << endl << "Are you Religion? (Y or N)" << endl;
    char relig;
    cin >> relig;
    if(relig == 'Y' || relig == 'y'){
        cout << endl << "What is your Religion Grade (Out of 7)?" << endl;
        cin >> temp;
        sum += temp;
        total++;
    }
    
    cout << endl << "Do you have an IDU? (Y or N)" << endl;
    char idu;
    cin >> idu;
    if(idu == 'Y' || idu == 'y'){
        cout << endl << "What is your IDU Grade (Out of 7)?" << endl;
        cin >> temp;
        sum += temp;
        total++;
    }
    
    cout << endl << "Do you have PE? (Y or N)" << endl;
    char pe;
    cin >> pe;
    if(pe =='y' || pe == 'Y'){
        cout << endl << "What is your PE Grade (Out of 7)?" << endl;
        cin >> temp;
        sum+=temp;
        total++;
    }
    
    cout << endl << "Thank you! Calculating your GPA now..." << endl;
    wait(1000);
    
    if(di == 'D')
        cout << "Your GPA is " << sum/total << "." << endl;
    else
        cout << "Your GPA is " << sum/total << "." << endl;
    
    return 0;
}
