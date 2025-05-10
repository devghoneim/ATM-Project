# 🏧 ATM Console Application (C++ OOP)

This is a console-based ATM application built with **C++** using **Object-Oriented Programming (OOP)** principles. It simulates a simple banking system with two main roles: **Client** and **User (Admin)**.

## ✅ Features

### 🔐 Authentication & Authorization
- Login system with basic credentials
- Role-based permissions using simple logic
- Two main user types:
  - **Client:** Regular user who owns a bank account
  - **User/Admin:** Has full control over the system

### 👤 Client Features
- View account balance
- Withdraw money
- Deposit money
- Transfer money to another client

### 🛠️ Admin/User Features
- View list of all clients or users
- Search for specific client/user
- Add new client or user
- Delete existing client or user
- Full control over system users and accounts

## 💾 Data Storage
- The application stores data **persistently in files**, not just in memory.
- All client and user information is saved and loaded from local files.
- This allows the system to retain data between sessions.

## 🧱 Tech Stack
- Language: **C++**
- Paradigm: **Object-Oriented Programming (OOP)**
- Platform: **Console Application**
- Storage: **File system-based data persistence**

## 📂 Code Structure
- Modular design using C++ classes
- Separated logic for:
  - Client operations
  - User/Admin operations
  - Authentication system
  - Permissions system (basic)
  - File handling (save/load data)

## 🚀 How to Run
1. Open the project in a C++ IDE (e.g., Code::Blocks, Visual Studio, or compile via g++).
2. Compile and run the `main.cpp` file.
3. Follow the on-screen instructions in the console.

## 📌 Notes
- The application is designed for educational purposes and practicing C++ with OOP and file handling.
- You can extend it later by adding GUI, networking, or database support.

