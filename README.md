# Data_Send_SQL
C++ Project: PostgreSQL ODBC Integration with Code Blocks
📝 Description
This project demonstrates how to connect to a PostgreSQL database using ODBC in a C++ application. It uses Code::Blocks as the IDE and MSYS2 MinGW32 for compilation. The project includes functionality to insert and manage data in a PostgreSQL database.

✨ Features
ODBC Integration: Connects to PostgreSQL using ODBC.

Data Insertion: Inserts records into a PostgreSQL table.

Error Handling: Robust error handling for database operations.

Cross-Platform: Works on Windows with MSYS2 MinGW32 and Code::Blocks.

🛠️ Prerequisites
Before running the project, ensure you have the following installed:

Code::Blocks: Installed and configured with MinGW32.

MSYS2: For MinGW32 and package management.

PostgreSQL: Installed and running on your machine.

ODBC Driver: Configured for PostgreSQL.

🚀 Installation
1. Set Up MSYS2 and MinGW32
Install MSYS2 from MSYS2 Website.

Update the package manager:

bash
Copy
pacman -Syu
Install MinGW32 and required libraries:

bash
Copy
pacman -S mingw-w64-i686-gcc mingw-w64-i686-unixodbc mingw-w64-i686-postgresql
2. Configure ODBC
Edit the ODBC configuration file (/mingw32/etc/odbc.ini):

ini
Copy
[PostgreSQL35w]
Description=PostgreSQL ODBC Connection
Driver=/mingw32/lib/psqlodbcw.dll
Server=127.0.0.1
Port=5432
Database=your_database_name
User=postgres
Password=your_password
Test the connection:

bash
Copy
isql -v PostgreSQL35w
3. Set Up PostgreSQL Database
Create the required tables:

sql
Copy
CREATE TABLE IF NOT EXISTS utilisateur (
    id SERIAL PRIMARY KEY,
    nom VARCHAR(100),
    age INT,
    genre VARCHAR(20),
    info VARCHAR(30)
);

CREATE TABLE IF NOT EXISTS utilisateur2 (
    id SERIAL PRIMARY KEY,
    nom VARCHAR(100),
    age INT,
    genre VARCHAR(20)
);
Setting Up Code::Blocks
1. Open Code::Blocks
Launch Code::Blocks and create a new Console Application project.

Select C++ as the language.

2. Add Source Files
Add your main.cpp file to the project.

Ensure the code is copied into the main.cpp file.

3. Configure Compiler Settings
Go to Settings → Compiler.

Select GNU GCC Compiler.

In the Linker settings tab, add the following:

Copy
-lodbc
In the Search directories tab, add the following paths:

Compiler: C:\msys64\mingw32\include

Linker: C:\msys64\mingw32\lib