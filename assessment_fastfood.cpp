#include<iostream>
#include<string>
using namespace std;
string name;
int choice;
float total = 0;

class display
{
	public :
		display()
		{
		cout<<"          ------------ MARUTI FAST FOOD ------------          \n\n"<<endl;
		cout<<"Hello Sir/Madam , Enter your Name : ";
		getline(cin,name);
		cout<<endl<<"Welcome "<<name<<endl;
		}
		void menu()
		{
			cout<<"\n\nWhat would you like to order sir ?"<<endl;
			cout<<"\n\n          ------- MENU -------           \n"<<endl;
			cout<<"1. Pizza \n2. Burgers \n3. Sandwich \n4. French Fries \n5. Biryani \n6. Chinese \n\n";
			cout<<"Please enter your choice : ";
			cin>>choice;
		}
};

class food
{
	public :
		int piz,bur,sand,fen,bir,chin,quan;
		void pizza()
		{
			cout<<"\n\nYou selected Pizza for your order. "<<endl;
			cout<<"\n1. Cheese Pizza -------- Rs. 430/-"<<endl
			<<"2. Veggie Pizza -------- Rs. 390/-"<<endl
			<<"3. Pepperoni Pizza ----- Rs. 360/-"<<endl
			<<"4. Margherita Pizza ---- Rs. 290/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>piz;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
		void burger()
		{
			cout<<"\n\nYou selected Burger for your order. "<<endl;
			cout<<"\n1. Veggie burger -------- Rs. 130/-"<<endl
			<<"2. Wild salmon burger --- Rs. 190/-"<<endl
			<<"3. Bean burger ---------- Rs. 160/-"<<endl
			<<"4. Cheeseburger --------- Rs. 210/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>bur;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
		void sandwich()
		{
			cout<<"\n You selected Sandwich for your order. "<<endl;
			cout<<"\n1. Club Sandwich --------------- Rs. 250/-"<<endl
			<<"2. Veg. Crispy Sandwich -------- Rs. 190/-"<<endl
			<<"3. Extreme Veg. Sandwich ------- Rs. 210/-"<<endl
			<<"4. Cheese Veg. Sandwich -------- Rs. 170/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>sand;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
		void frenchfries()
		{
			cout<<"\n You selected French Fries for your order. "<<endl;
			cout<<"\n1. Salted French Fries -------- Rs. 99/-"<<endl
			<<"2. Masala French Fries -------- Rs. 125/-"<<endl
			<<"3. Cheese French Fries -------- Rs. 210/-"<<endl
			<<"4. Peri-Peri French Fries ----- Rs. 165/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>fen;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
		void biryani()
		{
			cout<<"\n You selected Biryani for your order. "<<endl;
			cout<<"\n1. Veg. Biryani ---------- Rs. 430/-"<<endl
			<<"2. Paneer Biryani -------- Rs. 390/-"<<endl
			<<"3. Hyderabadi Biryani----- Rs. 360/-"<<endl
			<<"4. Lucknowi Biryani ------ Rs. 290/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>bir;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
		void chinese()
		{
			cout<<"\n You selected Chinese for your order. "<<endl;
			cout<<"\n1. Veg. Manchuriun -------- Rs. 190/-"<<endl
			<<"2. Veg. Noodles ----------- Rs. 135/-"<<endl
			<<"3. Chow Mein -------------- Rs. 175/-"<<endl
			<<"4. Manchau Soup ----------- Rs. 120/-\n"<<endl
			<<"Please enter which Pizza you would like to order : ";
			cin>>chin;
			cout<<"\nPlease enter the Quantity : ";
			cin>>quan;
		}
};

int main()
{
	string rep;
	display d;
	food f;
	do 
	{
		d.menu();
		if(choice == 1)
		{
			f.pizza();
			if(f.piz == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Cheese Pizza\n"<<endl;
				f.quan *= 430;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.piz == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veggie Pizza\n"<<endl;
				f.quan *= 390;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.piz == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Pepperoni Pizza\n"<<endl;
				f.quan *= 360;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.piz == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Margherita Pizza\n"<<endl;
				f.quan *= 290;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else if(choice == 2)
		{
			f.burger();
			if(f.bur == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veggie Burger\n"<<endl;
				f.quan *= 130;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bur == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Wild Salmon Burger\n"<<endl;
				f.quan *= 190;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bur == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Bean Burger\n"<<endl;
				f.quan *= 160;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bur == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Cheese Burger\n"<<endl;
				f.quan *= 210;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else if(choice == 3)
		{
			f.sandwich();
			if(f.sand == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Club Sandwich\n"<<endl;
				f.quan *= 250;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.sand == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veg. Crispy Sandwich\n"<<endl;
				f.quan *= 190;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.sand == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Extreme Veg. Sandwich\n"<<endl;
				f.quan *= 210;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.sand == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Cheese Veg. Sandwich\n"<<endl;
				f.quan *= 170;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else if(choice == 4)
		{
			f.frenchfries();
			if(f.fen == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Salted French Fries\n"<<endl;
				f.quan *= 99;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.fen == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Masala French Fries\n"<<endl;
				f.quan *= 125;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.fen == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Cheese French Fries\n"<<endl;
				f.quan *= 210;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.fen == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Peri-Peri Sandwich\n"<<endl;
				f.quan *= 165;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else if(choice == 5)
		{
			f.biryani();
			if(f.bir == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veg. Biryani\n"<<endl;
				f.quan *= 430;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bir == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Paneer Biryani\n"<<endl;
				f.quan *= 390;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bir == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Hyderabadi Biryani\n"<<endl;
				f.quan *= 360;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.bir == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Lucknowi Biryani\n"<<endl;
				f.quan *= 290;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else if(choice == 6)
		{
			f.chinese();
			if(f.chin == 1)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veg. Manchuriun\n"<<endl;
				f.quan *= 190;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.chin == 2)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Veg. Noodles\n"<<endl;
				f.quan *= 135;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.chin == 3)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Chow Mein\n"<<endl;
				f.quan *= 175;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else if(f.chin == 4)
			{
				cout<<"\n\nYour Order : "<<f.quan<<"-----Manchau Soup\n"<<endl;
				f.quan *= 120;
				cout<<"Your total Amount is : Rs. "<<f.quan<<"/-\n"<<endl;
				total += f.quan;
				cout<<"Your total Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
			}
			else
			{
				cout<<"Please Enter valid input"<<endl;
			}
		}
		else
		{
			cout<<"Please Enter valid input"<<endl;
		}	
		cout<<"Your order will be delivered to you shortly. \n"<<endl
		<<"Thank you "<<name<<" for Ordering from Maruti Fast Food \n"<<endl
		<<"Would you like to order anything else ?(yes or no) : ";
		cin>>rep;
	}while(rep == "Yes" || rep == "yes");
	cout<<"\n\n\nYour Final Payable Amount is : Rs. "<<total<<"/-\n\n"<<endl;
}