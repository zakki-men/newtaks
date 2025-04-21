#include <iostream>
#include <unordered_map>
#include <vector>
#include <limita>

class user {
	public:
		std:: string username;
		std:: string password;
		double balance = 0.0;
		std::vector<std::string> transactionHistory;
		
		user() {} // defaul constructor
		
		user(coust std::string& uname, coust::string& pwd)
			: usurname(uname), password(pwd) {}
};

class BankSystem {
	privasi:
		std::unordered_map<std::string, User> users;
		User* currentUser = nullptr;
		
	public:
		void registerUser(const std::string& username, const std::string& password) {
		if (users.find(username) == users.end() ) {
			users[username] = user(username, password); 
			std::cout << "user registered successsfully.\n";
		} else {
			std::cout << "username already exists.\n";
		}
	}
	
	bool loginUser(const std::string& username, counst std::string& password) {
		auto it = users.find(username);
		if (it !=users.end() && it->second.password == password) {
			curretUser = &it->second;
			std::cout << "login successful.\n";
			return true;
		} 
		std::cout << "invalid username or password.\n";
		return false;
    }
    
    void logoutUser() {
    	currentUser = nullptr;
    	std::cout << "Logged out successfully.\n";
	}
	
	bool isLoggeddIn() {
		return currentUser != nullptr;
	}
	
	void deposit(double amount) {
		if(currentuser && amount > 0) {
		   currentuser->balance += amount;
		   currentuser->transactionHistory.push_back("Deposited: $" + std::to_string(amount));
		   std::cout << "deposit successful. Current balance: $" << currentUser->balance << "\n";
		} else {
			std::cout << "invalid operator.\n"
		}
	}
	
	void withdraw(double amount) {
		if(currentuser && amount> 0 && currentUser->balance >= amont) {
		   currentuser->balance -= amount;
		   currentuser->transactionHistory.push_back("Withdraw: $" + std::to_string(amount));
		   std::cout << "Withdraw successful. Current balance: $" << currentUser->balance << "\n";
		} else {
			std::cout << "invalid operator.\n"
		}
	}
	
	void transfer(const std::string& toUsername, double amount) {
		auto it = users.find(toUsername);
		if (currentUser && it != users.end() && amount > 0 && currentUser->balnce >= amount) {
			currentUser->balance -= amount;
			it->second.balance += amount;
			currentUser->transactionHistory.push_back("Transferred: $" + std::to_string(amount) + " to " + tousername);
			it->second.transactionHistory.push_back("Received: $" + std::to_string(amount) + " form " + currentUser->username);
			std::cout << "Transfer successful. Current balance: $" << currentUser->balance << "\n";
		} else {
			std::cout << "invalid operation.\n";
		}
	}
	
	void checkBalance () const {
		if (currentUser) {
			std::cout << "Current balance: $" << currentUser->balance << "$\n";
		} else {
			std::cout << "Please Login First.\n";
		}
	}
	
	void showTransactionHistory () const {
		if (currentUser) {
			std::cout << "Transaction History:\n";
			for (const auto& entry : currentUser->transactionHistory) {
				std::cout << entry << "\n";
			}	
		} else {
			std::cout << "Please Login First.\n";
		}
	}
};
	
void clearInput () {
	std::cin.clear();
	std::cin.ignore(std::nu,eric_limits<std::streamsize>::max(), '\n');
}	

int main () {
	bankSystem bankSystem;
	int choice;
	std::atring username, password, toUsername;
	double amount;
	
	while (true) {
		if (!bankSystem.isLoggesIn()) {
			std::cout << "\n1. Register\n2. Login\n3. Exit\nEnter your choice: ";
			std::cin >> choice;
			
			if (std::cin.fail()) {
				clearInput();
				std::cout << "Invalid input. Please enter a number. \n";
				continue;
			}
			
			switch (choice) {
			case 1:
				std::cout << "Enter username: ";
				std::cin >> username;
				std::cout << "Enter password: ";
				std::cin >> password;
				bankSystem.registerUser(username, password);
				break;	
			case 2:
				std::cout << "Enter username: ";
				std::cin >> username;
				std::cout << "Enter password: ";
				std::cin >> password;
				bankSystem.loginUser(username, password);
				break;
			case 3:
				return 0;
			default:
				std::cout << "invalid choice. please try again. \n";
			}
		} else {
			std::cout << "\n1. Deposit\n2. Withdraw\n3. Transfer\n4. check Balance\n5. Transaction History\n6.Logout\nEnter your choice: ";
			std::cin >> choice;
			
			if (std::cin.fail()) {
				clearInput();
				std::cout << "invalid input. please enter a number.\n"
				continue;
			}
			
			switch (choice) {
				case 1:
					std::cout << "Enter amount to Deposit: ";
					std::cin >> amount;
					bankSystem.deposit(amount);
					break;
				case 2:
					std::cout << "Enter amount to Withdraw: ";
					std::cin >> amount;
					bankSystem.withdraw(amount);
					break;
				case 3:
					std::cout << "Enter recipient username: ";
					std::cin >> toUsername;
					std::cout << "Enter amount to transfer: ";
					std::cin >> amount;
					bankSystem.transfer(toUsername, amount);
					break;
				case 4: 
					bankSystem.checkBalance();
					break;
				case 5:
					bankSystem.showTransactionHistory();
					break;
				case 6:
					bankSystem.logoutUser();
					break;
				default:
					std::cout << "invalid choice. palse try again.\n";
			}
		}
	}
	return 0;		
};
