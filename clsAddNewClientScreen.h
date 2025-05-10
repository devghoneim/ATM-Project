#pragma once
#include "clsScreen.h"
#include "clsInputValidate.h"
#include "clsBankClient.h"
#include <iomanip>
class clsAddNewClientScreen
{

private:
	static	void _ReadClientInfo(clsBankClient& client)
	{
		cout << "\nPlease Enter Client Information :";
		cout << "\n---------------------------------";
		cout << "\n Enter First Name : ";
		client.FirstName = clsInputValidate::ReadString();
		cout << "\n Enter Last Name : ";
		client.LastName = clsInputValidate::ReadString();
		cout << "\n Enter Email: ";
		client.Email = clsInputValidate::ReadString();
		cout << "\n Enter Phone: ";
		client.Phone = clsInputValidate::ReadString();
		cout << "\n Enter PinCode: ";
		client.PinCode = clsInputValidate::ReadString();
		cout << "\n Enter Account Balance: ";
		client.AccountBalance = clsInputValidate::ReadFloatNumber();

	}
	static void _PrintClient(clsBankClient client)
	{
		cout << "\nClient Card:";
		cout << "\n___________________";
		cout << "\nFirstName   : " << client.FirstName;
		cout << "\nLastName    : " << client.LastName;
		cout << "\nFull Name   : " << client.FullName();
		cout << "\nEmail       : " << client.Email;
		cout << "\nPhone       : " << client.Phone;
		cout << "\nAcc. Number : " << client.AccountNumber();
		cout << "\nPassword    : " << client.PinCode;
		cout << "\nBalance     : " << to_string(client.AccountBalance);
		cout << "\n___________________\n";
	}



public:

	static void AddNewClient()
	{
		string AccountNumber = "";
		cout << "\nPlease Enter Account Number : ";
		AccountNumber = clsInputValidate::ReadString();
		while (clsBankClient::IsClientExist(AccountNumber))
		{
			cout << "\n Account Number Is Already used, Chosose Another One :";
			AccountNumber = clsInputValidate::ReadString();
		}

		clsBankClient NewClient = clsBankClient::GetAddNewClientObject(AccountNumber);
		_ReadClientInfo(NewClient);
		clsBankClient::enSaveResults SaveResult;
		SaveResult = NewClient.Save();
		switch (SaveResult)
		{
		case clsBankClient::svFaildEmptyObject:
			cout << "/n Data Is Empty";

			break;
		case clsBankClient::svSucceeded:
			cout << "/n Account Added Successed";
			NewClient.Print();
			break;
		case clsBankClient::svFaildAccountNumberExists:
			cout << "/n Failed To Add";

			break;
		default:
			cout << "/n Error";

			break;
		}
		
		


	}

};

