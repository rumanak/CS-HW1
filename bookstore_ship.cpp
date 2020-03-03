// Rumana Khan
// CISC 1600
// HW #3 2/1/19

#include <iostream>
using namespace std;
int main ()
{  string firstName, lastName; 
   int  num_data, num_carch, num_comp;
   cout << "Welcome to The Very Small Computer Science Bookstore!\n";
   cout << "Please enter your first and last name:";
   cin >> firstName;
   cin >> lastName;
   cout << endl;
   cout << firstName <<", how many of each textbook do you wish to purchase?" << endl;
   cout << "Enter number of Data Structures textbooks:";
   cin >> num_data; 
   cout << "Enter number of Computer Architecture textbooks:";
   cin >> num_carch;
   cout << "Enter number of Compilers textbooks:";
   cin >> num_comp;
   cout << endl;
   double a = 78.87;
   double b = 95.49;
   double c = 89.99;
   double weight_a = 2.50 * num_data;
   double weight_b = 1.75 * num_carch;
   double weight_c = 1.25 * num_comp;
   double cost_d = a * num_data;
   double cost_car = b * num_carch;
   double cost_com = c * num_comp;
   double tot_shipw = weight_a + weight_b + weight_c;
   double g5 = 5.99;
   double t5 = 11.8;
   double n5 = 29.95;
   double g7 = 7.99;
   double t7 = 15.98;
   double n7 = 39.95;
   double g10 = 9.99;
   double t10 = 19.98;
   double n10 = 49.95;
   // WEIGHT
   cout << "Your order weights:" << tot_shipw << endl;
   if (tot_shipw < 5) {
       cout << "These are your shipping options:" << endl;
       cout << "For ground shipping your cost is " << g5 << endl;
       cout << "For two-day shipping your cost is " << t5 << endl;
       cout << "For next-day shipping your cost is " << n5 << endl;
 
   }
   else if ((5 <= tot_shipw) && (tot_shipw <= 10)) {
       cout << "These are your shipping options:" << endl;
       cout << "For ground shipping your cost is " << g7 << endl;
       cout << "For two-day shipping your cost is " << t7 << endl;
       cout << "For next-day shipping your cost is " << n7 << endl;}

   else if (tot_shipw > 10) {
       cout << "These are your shipping options:" << endl;
       cout << "For ground shipping your cost is " << g10 << endl;
       cout << "For two-day shipping your cost is " << t10 << endl;
       cout << "For next-day shipping your cost is " << n10 << endl;
   
   }
   // OPTION CHOICE
   string ship_opt;
   int z;
choice :
   cout << "Which option would you like? Ground service is default :";
   cin >> ship_opt;
   if (((ship_opt == "Ground") || (ship_opt == "ground")) && (tot_shipw < 5)){
       cout << "Your total cost of shipping is " << g5 << endl;
       z = 1;}
   else if (((ship_opt == "Ground") || (ship_opt == "ground")) && ((5 <= tot_shipw) && (tot_shipw <= 10))){
       cout << "Your total cost of shipping is " << g7 << endl;
       z = 2;}
   else if ((ship_opt == "Ground") || (ship_opt == "ground")) {
       cout << "Your total cost of shipping is " << g10 << endl;
       z = 3; }
   else if (((ship_opt == "Two-day") || (ship_opt == "two-day")) && (tot_shipw < 5)) {
       cout << "Your total cost of shipping is " << t5 << endl;
       z = 4;}
   else if (((ship_opt == "Two-day") || (ship_opt == "two-day")) && ((5 <= tot_shipw) && (tot_shipw <= 10))) {
       cout << "Your total cost of shipping is " << t7 << endl;
       z = 5;}
   else if ((ship_opt == "Two-day") || (ship_opt == "two-day")) {
       cout << "Your total cost of shipping is " << t10 << endl;
       z = 6; }
   else if (((ship_opt == "Next-day") || (ship_opt == "next-day")) && (tot_shipw < 5)) {
       cout << "Your total cost of shipping is " << n5 << endl;
       z = 7; }
   else if (((ship_opt == "Next-day") || (ship_opt == "next-day")) && ((5 <= tot_shipw) && (tot_shipw <= 10))) {
       cout << "Your total cost of shipping is " << n7 << endl;
       z = 8; }
   else   {
       cout << "Your total cost of shipping is " << n10 << endl;
       z = 9; }
 // CHOICE TO ACCEPT
   cout << "Do you want to accept these charges? Press y for yes. Any other key to redo the shipping proccess." << endl;
   char answer;
   cin >> answer;
   if ((answer == 'Y') || (answer == 'y'))
       cout << "Okay, your shipping charge was accepted." << endl;
   else {
       cout << "You may redo your shipping proccess." << endl;
       goto choice;  } 
   
       double cost_ship ;
// TO DETERMINE THE COST
   if (z == 1)
       cost_ship = g5;
   else if (z == 2)
       cost_ship = g7;
   else if (z == 3)
       cost_ship = g10;
   else if (z == 4)
       cost_ship = t5;
   else if (z == 5)
       cost_ship = t7;
   else if (z == 6)
       cost_ship = t10;
   else if (z == 7)
       cost_ship = n5;
   else if (z == 8)
       cost_ship = n7;
   else if (z == 9)
       cost_ship = n10;
   
   double stotal_cost;
   stotal_cost = cost_d + cost_car + cost_com;
   double Total_cost;
   Total_cost = (stotal_cost * 1.08875) + cost_ship;
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2); 
   cout << "Your total order is " << Total_cost << endl;
   double cash;
   cout << "How much money are you giving me? ";
   cin >> cash;
   cout << endl;
   char cancel;
         
       if (cash > Total_cost)
           goto invoice;

       while (cash < Total_cost)
       { 
       cout << "You have entered an unsufficant amount." << endl;
       cout << "Would you like to enter another amount? Press Y for yes. Press N to cancel.";
       cin >> cancel;
       if ((cancel == 'N') || (cancel == 'n')) {
       cout << "We are sorry to see go. Come again soon!" << endl;
       break;}
       else if ((cancel == 'Y') || (cancel == 'y')) 
       {
           cout << "Please enter a new amount:";
           cin >> cash;
       
           
       
   invoice:    
   cout << "Invoice for " << firstName << " " << lastName << endl;
   cout << "_________________________________________________________\n";
   cout << "Item" << "                  ";
   cout << "Qty" << "     ";
   cout << "Unit Price" << "     ";
   cout << "Total Price\n";
   cout << "Data Structures" << "        ";
   cout << num_data << "        " << a << "          " << cost_d << "  " << endl;
   cout << "Computer Architecture" << "  ";
   cout << num_carch << "        " << b << "          " << cost_car << "  " << endl;
   cout << "Compilers" << "              ";
   cout << num_comp << "        " << c << "          " << cost_com << "  " << endl;
   cout << "_________________________________________________________\n";
   cout << "Subtotal:        " << stotal_cost << endl;
   double tax;
   tax = (( Total_cost - cost_ship) - stotal_cost);
   cout << "Sales Tax:        " << tax << endl;
   cout << "Shipping cost:     " << cost_ship << endl;
   cout << "Total Due:       " << Total_cost << endl;
   cout << "_________________________________________________________\n";
   cout << "Total Payment:   " << cash << endl;
   double change;
   change = cash - Total_cost;
   cout << "CHANGE DUE:       " << change << endl;
   cout << "_________________________________________________________\n";
   cout << "Thank you for shopping with us, " << firstName << "! ";
   cout << "Come again!" << endl;}
       }    
      
   return 0; 

       }      
  
