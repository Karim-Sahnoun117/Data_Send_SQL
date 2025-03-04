#include <windows.h>
#include <sql.h>
#include <sqlext.h>
#include <iostream>

using namespace std;

int main() {

SQLHENV henv; //handle pour l'environnement odbc
SQLHDBC hdbc; //handle de la connexion  à la base de données *
SQLHSTMT hstmt ;//handle pour executer les requetes sql
SQLRETURN retour; //variable pour stocker les codes de retiures de la fonction odbc

retour = SQLAllocHandle(SQL_HANDLE_ENV,SQL_NULL_HANDLE,&henv);
if(retour != SQL_SUCCESS)
    {
    cerr<<"erreur dallocation de l'environnement"<<endl;
    }
retour = SQLSetEnvAttr(henv,SQL_ATTR_ODBC_VERSION,(SQLPOINTER)SQL_OV_ODBC3,0);
if(retour != SQL_SUCCESS)
    {
    cerr<<"Erreur de configuration de la version ODBC!"<<endl;
    }
retour = SQLAllocHandle(SQL_HANDLE_DBC, henv, &hdbc);
if (retour != SQL_SUCCESS)
    {
    cerr << "Erreur d'allocation de la connexion!" << std::endl;
    }


  retour = SQLConnect(hdbc, (SQLCHAR*)"PostgreSQL35w", SQL_NTS,(SQLCHAR*)"postgres", SQL_NTS,(SQLCHAR*)"salut", SQL_NTS);
  if (retour != SQL_SUCCESS)
    {
    cerr << "Erreur de  connexion!" << std::endl;
    }
   cout<<"la connexion reussie avec postgresql avec odbc"<<endl;

retour = SQLAllocHandle(SQL_HANDLE_STMT, hdbc, &hstmt);
if (retour != SQL_SUCCESS)
    {
    cerr << "Erreur d'allocation de HANDLE STATEMENT" << endl;
    }
 const char* insertion = "INSERT INTO utilisateur2  (nom, age,genre) VALUES ('KARIM ', 36,'male')";
    retour = SQLExecDirect(hstmt, (SQLCHAR*)insertion, SQL_NTS);
    if (retour != SQL_SUCCESS && retour != SQL_SUCCESS_WITH_INFO) {
      cerr << "Erreur d'execution de la requete d'insertion!" << endl;

    }

   cout << "insertion reussie" << endl;

    SQLFreeHandle(SQL_HANDLE_STMT, hstmt);
    SQLDisconnect(hdbc);
    SQLFreeHandle(SQL_HANDLE_DBC, hdbc);
    SQLFreeHandle(SQL_HANDLE_ENV, henv);

    return 0;
}
