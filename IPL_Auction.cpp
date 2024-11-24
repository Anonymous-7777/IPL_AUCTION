#include <iostream>
#include <conio.h>
#include <cstdlib>
using namespace std;

int main() {
    string pn;
    int dn, np;
    float bp;
    int rcbx , cskx , kkrx , mix, srhx;
    int rrx , dcx , pbksx, gtx , lsgx ;

    cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
    cout << "Enter the number of players to be auctioned: " << endl;
    cin >> np;

    cout<<"RCB Enter your wallet amount : "<<endl;
    cin>>rcbx;
                
    cout<<"CSK Enter your wallet amount : "<<endl;
    cin>>cskx;
                
    cout<<"KKR Enter your wallet amount : "<<endl;
    cin>>kkrx;
                
    cout<<"MI Enter your wallet amount : "<<endl;
    cin>>mix;
                
    cout<<"SRH Enter your wallet amount : "<<endl;
    cin>>srhx;
                
    cout<<"DC Enter your wallet amount : "<<endl;
    cin>>dcx;
                
    cout<<"RR Enter your wallet amount : "<<endl;
    cin>>rrx;
                
    cout<<"PBKS Enter your wallet amount : "<<endl;
    cin>>pbksx;
                
    cout<<"GT Enter your wallet amount : "<<endl;
    cin>>gtx;
                
    cout<<"LSG Enter your wallet amount : "<<endl;
    cin>>lsgx;

    while (np > 0) 
    {
        int i = 10;
        system("cls");
        
        cout << "Enter the player name: " << endl;
        cin >> pn;
        cout << "Enter its base price in lacs: " << endl;
        cin >> bp;

        int rcb = 1, csk = 1, kkr = 1, mi = 1, srh = 1;
        int rr = 1, dc = 1, pbks = 1, gt = 1, lsg = 1;
    
        while (i > 1)
         {
            if(i==1)
            {
                cout<<"Player unsold"<<endl;
            }
            
            if (rcb == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Royal Challengers Bangalore" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no) : " << endl;
                cin >> dn;
                if (dn == 1) 
                {
                    cout << "Enter Your bid : " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp || rcbx<bid)
                    {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2) 
                {
                    cout << "RCB out" << endl;
                    getch();
                    rcb = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (csk == 1)
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Chennai Super Kings" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1) 
                {
                    cout << "Enter Your bid : " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp || cskx<bid)
                    {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                   else
                    {
                        bp = bid;
                    }
                    
                }
                else if (dn == 2)
                {
                    cout << "CSK out" << endl;
                    getch();
                    csk = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (kkr == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Kolkata Knight Riders" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|kkrx<bid ) 
                    {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                   else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2)
                {
                    cout << "KKR out" << endl;
                    getch();
                    kkr = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (mi == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Mumbai Indians" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|mix<bid )
                     {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2) 
                {
                    cout << "MI out" << endl;
                    getch();
                    mi = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (srh == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Sunrisers Hyderabad" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1) 
                {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|srhx<bid) 
                    {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2)
                 {
                    cout << "SRH out" << endl;
                    getch();
                    srh = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (rr == 1)
             {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Rajasthan Royals" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                 {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|rrx<bid)
                    {
                    
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2)
                 {
                    cout << "RR out" << endl;
                    getch();
                    rr = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (dc == 1)
             {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Delhi Capitals" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1) 
                {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|dcx<bid )
                    {
                        
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2) 
                {
                    cout << "DC out" << endl;
                    getch();
                    dc = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (pbks == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Punjab Kings" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                 {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|pbksx<bid)
                    {
                        
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    
                    else
                    {
                        bp = bid;
                    }
                    
                }
                 else if (dn == 2) 
                {
                    cout << "PBKS out" << endl;
                    getch();
                    pbks = 0;
                    i--;
                }
            }
            if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }

            if (gt == 1)
             {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Gujarat Titans" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                 {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|gtx<bid)
                     {
                        
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                    else
                    {
                        bp = bid;
                    }
                    
                } 
                else if (dn == 2) 
                {
                    cout << "GT out" << endl;
                    getch();
                    gt = 0;
                    i--;

                }
            }
             if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
            
            if (lsg == 1) 
            {
                system("cls");
                cout << "\t \t WELCOME TO IPL AUCTION 2024 \n";
                cout << "Current Team: Lucknow Super Giants" << endl;
                cout << "Current Player: " << pn << endl;
                cout << "Current Price: " << bp << endl;
                cout << "Do you want to bid (1 for yes and 2 for no): " << endl;
                cin >> dn;
                if (dn == 1)
                 {
                    cout << "Enter Your bid: " << endl;
                    float bid;
                    cin >> bid;
                    if (bid < bp|lsgx<bid)
                    {
                        cout << "Invalid bid!" << endl;
                        getch();
                    }
                   else
                    {
                        bp = bid;
                    }
                    
                }
                 else if (dn == 2)
                {
                 if(i==1)
                    {
                        cout<<"Player unsold"<<endl;
                    }
                    cout << "LSG out" << endl;
                    getch();
                    lsg = 0;
                    i--;
                }
            }
             if(rcb==1&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                
                 
                cout << "Winning Team: Royal Chalenger Banglore" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rcbx=rcbx-bp;
                break;
                
            }
             if(rcb==0&&csk==1&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: chennai super kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                cskx=cskx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==1&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Kolkata Knight riders" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                kkrx=kkrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==1&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Mumbai indians" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                mix=mix-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==1&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: sunriser hyderabad" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                srhx=srhx-bp;
                break;

            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==1&&dc==0&&pbks==0&&gt==0&&lsg==0)
            {
                  cout << "Winning Team: Rajasthan Royal" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                rrx=rrx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==1&&pbks==0&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Delhi Capitals" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                dcx=dcx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==1&&gt==0&&lsg==0)
            {
                cout << "Winning Team: Punjab Kings" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                pbksx=pbksx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==1&&lsg==0)
            {
                cout << "Winning Team: Gujarat Titans" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                gtx=gtx-bp;
                break;
            }
             if(rcb==0&&csk==0&&kkr==0&&mi==0&&srh==0&&rr==0&&dc==0&&pbks==0&&gt==0&&lsg==1)
            {
                cout << "Winning Team: Lucknow Super Giants" << endl;
                cout << "Player: " << pn << endl;
                cout << "Price: " << bp << endl;
                getch();
                lsgx=lsgx-bp;
                break;
            }
           
       
            system("cls");
          
        }
            cout << "\t \t IPL AUCTION 2024 SUMMARY \n";
            cout << "Teams' remaining budget: \n";
            cout << "RCB: " << rcbx << endl;
            cout << "CSK: " << cskx << endl;
            cout << "KKR: " << kkrx << endl;
            cout << "MI: " << mix << endl;
            cout << "SRH: " << srhx << endl;
            cout << "RR: " << rrx << endl;
            cout << "DC: " << dcx << endl;
            cout << "PBKS: " << pbksx << endl;
            cout << "GT: " << gtx << endl;
            cout << "LSG: " << lsgx << endl;
            getch(); 

        np--;
    }

    cout << "End of IPL Auction 2024 :-)" << endl;
    getch();
    return 0;
}
