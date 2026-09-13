#include <iostream>
using namespace std;

int main(){ 
    int quant, choice;

    //quantity of food
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
    //food items sold
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
    //total price of items
    int Total_rooms=0, Total_pasta=0, Total_burger=0, Total_noodles=0, Total_shake=0,Total_chicken=0;

    cout <<"\n\t Quantity of Items we have";
    cout <<"\n Rooms available: ";
    cin>> Qrooms;
    cout<<"\n Quantity of pasta: ";
    cin >> Qpasta;
    cout<<"\n Quantity of burger: ";
    cin >> Qburger;
    cout<<"\n Quantity of noodles: ";
    cin >> Qnoodles;
    cout<<"\n Quantity of shake: ";
    cin >> Qshake;
    cout<<"\n Quantity of chicken-roll: ";
    cin >> Qchicken;

    m:
    cout << endl;
    cout<<"\n\t\t\t Please select from the menu options ";
    cout <<"\n\n1) Rooms";
    cout <<"\n2) pasta: ";
    cout <<"\n3) burger: ";
    cout <<"\n4) noodles: ";
    cout <<"\n5) shake ";
    cout <<"\n6) chicken-roll ";
    cout <<"\n7) Information regarding sales and collection ";
    cout <<"\n8) Exit ";

    cout <<"\n\n Please enter your choice! ";
    cin >> choice;

    switch(choice){
        case 1:
            // Handle room selection
            cout <<"\n\n Please enter the number of rooms you want: ";
            cin >> quant;
            if(Qrooms - Srooms >= quant){
                Srooms += quant;
                Total_rooms += quant * 1200; // Assuming room price is 1200
                cout <<"\n\n\t\t\t " << quant << " room(s) booked successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qrooms - Srooms) << " room(s) available!";
            }
            break;
        case 2:
            // Handle pasta selection
            cout <<"\n\n Please enter the quantity of pasta you want: ";
            cin >> quant;
            if(Qpasta - Spasta >= quant){
                Spasta += quant;
                Total_pasta += quant * 250; // Assuming pasta price is 250
                cout <<"\n\n\t\t\t " << quant << " pasta(s) ordered successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qpasta - Spasta) << " pasta(s) available!";
            }
            break;
        case 3:
            // Handle burger selection
            cout <<"\n\n Please enter the quantity of burger you want: ";
            cin >> quant;
            if(Qburger - Sburger >= quant){
                Sburger += quant;
                Total_burger += quant * 150; // Assuming burger price is 150
                cout <<"\n\n\t\t\t " << quant << " burger(s) ordered successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qburger - Sburger) << " burger(s) available!";
            }
            break;
        case 4:
            // Handle noodles selection
            cout <<"\n\n Please enter the quantity of noodles you want: ";
            cin >> quant;
            if(Qnoodles - Snoodles >= quant){
                Snoodles += quant;
                Total_noodles += quant * 200; // Assuming noodles price is 200
                cout <<"\n\n\t\t\t " << quant << " noodles(s) ordered successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qnoodles - Snoodles) << " noodles(s) available!";
            }
            break;
        case 5:
            // Handle shake selection
            cout <<"\n\n Please enter the quantity of shake you want: ";
            cin >> quant;
            if(Qshake - Sshake >= quant){
                Sshake += quant;
                Total_shake += quant * 100; // Assuming shake price is 100
                cout <<"\n\n\t\t\t " << quant << " shake(s) ordered successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qshake - Sshake) << " shake(s) available!";
            }
            break;
        case 6:
            // Handle chicken-roll selection
            cout <<"\n\n Please enter the quantity of chicken-roll you want: ";
            cin >> quant;
            if(Qchicken - Schicken >= quant){
                Schicken += quant;
                Total_chicken += quant * 500; // Assuming chicken-roll price is 500
                cout <<"\n\n\t\t\t " << quant << " chicken-roll(s) ordered successfully!";
            } else {
                cout <<"\n\n\t\t\t Only " << (Qchicken - Schicken) << " chicken-roll(s) available!";
            }
            break;
        case 7:
            // Handle sales and collection information
            cout <<"\n\n\t\t\t Sales and Collection Information";
            
            cout << "\n\n Number of rooms we had " << Qrooms;
            cout <<"\n Number of rooms we gave for rent " << Srooms;
            cout <<"\n Remaining rooms " << Qrooms - Srooms;
            cout <<"\n Total collection from rooms: " << Total_rooms;

            cout <<"\n\n Number of pasta we had " << Qpasta;
            cout <<"\n Number of pasta we sold " << Spasta;
            cout <<"\n Remaining pasta " << Qpasta - Spasta;
            cout <<"\n Total collection from pasta: " << Total_pasta;

            cout <<"\n\n Number of burger(s) we had " << Qburger;
            cout <<"\n Number of burger(s) we sold " << Sburger;
            cout <<"\n Remaining burger(s) " << Qburger - Sburger;
            cout <<"\n Total collection from burger(s): " << Total_burger;

            cout <<"\n\n Number of noodles(s) we had " << Qnoodles;
            cout <<"\n Number of noodles(s) we sold " << Snoodles;
            cout <<"\n Remaining noodles(s) " << Qnoodles - Snoodles;
            cout <<"\n Total collection from noodles(s): " << Total_noodles;

            cout <<"\n\n Number of shake(s) we had " << Qshake;
            cout <<"\n Number of shake(s) we sold " << Sshake;
            cout <<"\n Remaining shake(s) " << Qshake - Sshake;
            cout <<"\n Total collection from shake(s): " << Total_shake;

            cout <<"\n\n Number of chicken-roll(s) we had " << Qchicken;
            cout <<"\n Number of chicken-roll(s) we sold " << Schicken;
            cout <<"\n Remaining chicken-roll(s) " << Qchicken - Schicken;
            cout <<"\n Total collection from chicken-roll(s): " << Total_chicken;

            cout <<"\n\n Total collection from all items: " << Total_rooms + Total_pasta + Total_burger + Total_noodles + Total_shake + Total_chicken;
            break;
        case 8:
            // Exit the program
            cout <<"\n\n\t\t\t Thank you for using the Hostel Management System! Come back soon!";
            exit(0);
        default:
            cout <<"\n\t\t\t Please select the numbers mentioned above! ";
    }
    goto m; // Assuming 'm' is a label for the menu loop

}