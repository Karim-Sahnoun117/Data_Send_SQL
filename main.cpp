#include <windows.h>
#include <sql.h>
#include <sqlext.h>
#include <iostream>

using namespace std;

/*int main() {
    SQLHENV hEnv;
    SQLHDBC hDbc;
    SQLHSTMT hStmt; // Ajout d'un handle de statement pour ex�cuter des requ�tes
     ret;

    // Initialiser l'environnement ODBC
    ret = SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &hEnv);
    if (ret != SQL_SUCCESS) {
        std::cerr << "Erreur d'allocation de l'environnement!" << std::endl;
        return 1;
    }

    ret = SQLSetEnvAttr(hEnv, SQL_ATTR_ODBC_VERSION, (SQLPOINTER)SQL_OV_ODBC3, 0);
    if (ret != SQL_SUCCESS) {
        std::cerr << "Erreur de configuration de la version ODBC!" << std::endl;
        return 1;
    }

    // Initialiser la connexion � la base de donn�es
    ret = SQLAllocHandle(SQL_HANDLE_DBC, hEnv, &hDbc);
    if (ret != SQL_SUCCESS) {
        std::cerr << "Erreur d'allocation de la connexion!" << std::endl;
        return 1;
    }

    // Connexion via DSN (assurez-vous que le DSN 'PostgreSQL' est configur� dans ODBC)
    ret = SQLConnect(hDbc, (SQLCHAR*)"PostgreSQL35w", SQL_NTS,
                     (SQLCHAR*)"postgres", SQL_NTS,
                     (SQLCHAR*)"salut", SQL_NTS); // Remplacez par ton mot de passe
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        std::cerr << "Erreur de connexion!" << std::endl;
        return 1;
    }

    std::cout << "Connexion r�ussie � PostgreSQL via ODBC!" << std::endl;

    // Cr�er un handle de statement pour envoyer des requ�tes SQL
    ret = SQLAllocHandle(SQL_HANDLE_STMT, hDbc, &hStmt);
    if (ret != SQL_SUCCESS) {
        std::cerr << "Erreur d'allocation du handle de statement!" << std::endl;
        return 1;
    }

    // Exemple d'insertion dans une table 'utilisateurs'
    //const char* insertQuery = "INSERT INTO utilisateurs (nom, age) VALUES ('radhia', 40)";
     //const char* insertQuery = "INSERT INTO karim (nom, age,genre) VALUES ('krayem ', 40,'masculin' )";
     const char* insertQuery = "INSERT INTO utilisateur  (nom, age,genre) VALUES ('krayem ', 40,'masculin' )";
    ret = SQLExecDirect(hStmt, (SQLCHAR*)insertQuery, SQL_NTS);
    if (ret != SQL_SUCCESS && ret != SQL_SUCCESS_WITH_INFO) {
        std::cerr << "Erreur d'ex�cution de la requ�te d'insertion!" << std::endl;
        return 1;
    }

    std::cout << "Insertion r�ussie!" << std::endl;

    // D�connexion et nettoyage
    SQLFreeHandle(SQL_HANDLE_STMT, hStmt); // Lib�rer le handle du statement
    SQLDisconnect(hDbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hDbc);
    SQLFreeHandle(SQL_HANDLE_ENV, hEnv);

    return 0;
}
*/
int main(){


}
