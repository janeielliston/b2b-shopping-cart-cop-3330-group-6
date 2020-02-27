//-|-----------------------------------------------------------------
//-| Name of File: Address.h
//-| Group 6:      Racaria Burgess, Janei Elliston, 
//-|               Michael Mondelice, Michael Parrish
//-| Last Edited:  February 26, 2020
//-|
//-| Purpose: Our company is a major clothing manufacturer 
//-|          who sells to most major department and clothing 
//-|          stores throughout the US. Because of the size of 
//-|          our business, we extend a line of credit to all 
//-|          our customers. When a customer places an order, one 
//-|          of our associates enters their names (the associate) 
//-|          into the system and then looks up the customer, and 
//-|          enters the selected items and quantities. The system 
//-|          allows the associate to create orders for existing 
//-|          customers, and only allows items to be added as 
//-|          long as they have not surpassed the maximum on their 
//-|           remaining line of credit.
//-|-----------------------------------------------------------------

#include <iostream>
#include <string>
#include "Address.h"

using namespace std;

    /**************************************************************
	 *                          Address                           *
	 *                                                            *
	 * Passed   : No arguments                                    *
	 * Purpose  : Constructor that does not accept                *
	 *            member variables                                *          
	 **************************************************************/
     Address::Address();

    /**************************************************************
	 *                          Address                           *
	 *                                                            *
	 * Passed   : 4 arguments: 4 strings                          *
	 * Purpose  : Constructor that accepts member variables       *
	 **************************************************************/
     Address::Address(std::string SA, std::string C, std::string S, std::string Z){
     streetAddress = SA;
     city = C;
     state = S;
     zipCode = Z;
     }

    //-|------------------------------------------------------------
    //-| Accessor and Mutator functions
    //-|------------------------------------------------------------

    /**************************************************************
	 *                          setStreetAddress                  *
	 *                                                            *
	 * Passed   : 1 argument: a string                            *
	 * Purpose  : Set the person's street address                 *              
	 **************************************************************/
     void Address::setStreetAddress(std::string adrs){
     streetAddress = adrs;  
     }

    /**************************************************************
	 *                          setCity                           *
	 *                                                            *
	 * Passed   : 1 argument: a string                            *
	 * Purpose  : Set the name of city that the person lives in   *
	 **************************************************************/
     void Address::setCity(std::string ct){
     city = ct; 
     } 

    /**************************************************************
	 *                          setState                          *
	 *                                                            *
	 * Passed   : 1 argument: a string                            *
	 * Purpose  : Set the name of the state that the person lives *
	 *            in                                              *       
	 **************************************************************/ 
     void Address::setState(std::string st){
     state = st;  
     }

    /**************************************************************
	 *                          setZipCode                        *
	 *                                                            *
	 * Passed   : 1 argument: a string                            *
	 * Purpose  : Set the zip code                                *
	 **************************************************************/ 
     void Address::setZipCode(std::string zip){
     zipCode = zip; 
     }

    /**************************************************************
	 *                          getStreetAddress                  *
	 *                                                            *
	 * Passed   : 1 argument: 1 string                            *
	 * Purpose  : Returns the street address                      *
	 * Returns  : String                                          *
	 **************************************************************/
     string Address::getStreetAddress(){return streetAddress;}
  
    /**************************************************************
	 *                          getCity                           *
	 *                                                            *
	 * Passed   : 1 argument: 1 string                            *
	 * Purpose  : Returns the city that the person lives in       *
	 * Returns  : String                                          *
	 **************************************************************/
     string Address::getCity(){return city;}

    /**************************************************************
	 *                          getState                          *
	 *                                                            *
	 * Passed   : 1 argument: 1 string                            *
	 * Purpose  : Returns the state that the person lives in      *
	 * Returns  : String                                          *
	 **************************************************************/
     string Address::getState(){return state;}
 
    /**************************************************************
	 *                          getZipCode                        *
	 *                                                            *
	 * Passed   : 1 argument: 1 string                            *
	 * Purpose  : Returns the  city that the person lives in      *
	 * Returns  : String                                          *
	 **************************************************************/
     string Address::getZipCode(){return zipCode;}

    /**************************************************************
	 *                          getAddress                        *
	 *                                                            *
	 * Passed   : 1 argument: 1 string                            *
	 * Purpose  : Prints the person's  full address               *
	 **************************************************************/
      void Address::getAddress(){
      cout << streetAddress << " |" << endl << city <<
          ", " << state << " " << zipCode;
  }
