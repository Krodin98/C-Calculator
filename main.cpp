//Rhett Brink 9/17/21 Creating a calculator
#include <iostream>
#include <math.h>


void Addition(){//beginning of addition
  float x = 0, y = 0;
  std::cout<<"\nPlease input two numbers to add.\n\n-This function is commutataive, so the order your input numbers does not matter.\n\n";
  std::cin>>x;
  std::cout<<"+"<<"\n";
  std::cin>>y;
  std::cout<<"\n"<<x<<" + "<<y<<" = "<<x+y<<"\n";
  std::cout<<y<<" + "<<x<<" = "<<y+x;
}//end of addition function


void Subtraction(){//beginning of subtraction
  float x = 0, y = 0;
  std::cout<<"\nPlease input two numbers to subtract.\n\n-This function is not commutative, so the order you input the numbers matters.\n\n";
  std::cin>>x;
  std::cout<<"-"<<"\n";
  std::cin>>y;
  std::cout<<"\n"<<x<<" - "<<y<<" = "<<x-y<<"\n";
  std::cout<<y<<" - "<<x<<" = "<<y-x;
}//end of subtration function


void Multiplication(){//beginning of multiplication
  float x = 0, y = 0;
  std::cout<<"\nPlease input two numbers to multiply.\n\n-This function is commutataive, so the order your input numbers does not matter.\n\n";
  std::cin>>x;
  std::cout<<"*"<<"\n";
  std::cin>>y;
  std::cout<<"\n"<<x<<" * "<<y<<" = "<<x*y<<"\n";
  std::cout<<y<<" * "<<x<<" = "<<y*x;
}//end of multiplication function


void Division(){//beginning of division
  int zero_check = 0;
  float x = 0, y = 0;
  while(zero_check == 0){// begin zero check while loop
    std::cout<<"\nPlease input two numbers to divide.\n\n-This operation is not commutative, so the order you input the numbers matters.\n\n";
    std::cin>>x;
    std::cout<<"/"<<"\n";
    std::cin>>y;
    if(x == 0 || y == 0){//begin zero check /*|| means OR*/
      std::cout<<"\n-Operation cannot be performed with a zero, please try again!\n";
    }//end of zero check
    else if (x != 0 && y != 0) zero_check = 1;
  }// end zero check while loop
  std::cout<<"\n"<<x<<" / "<<y<<" = "<<x/y<<"\n";
  std::cout<<y<<" / "<<x<<" = "<<y/x;
}//end of division function


void Modulus(){//beginning of modulus
  int zero_check = 0;
  int x = 0, y = 0;
  while(zero_check == 0){// begin zero check while loop
    std::cout<<"\nPlease input two numbers and I will give you their remainder.\n\n-This operation is not commutative, so the order you input the numbers matters.\n\n";
    std::cin>>x;
    std::cout<<"%"<<"\n";
    std::cin>>y;
    if(x== 0 || y == 0){//begin zero check /*|| means OR*/
      std::cout<<"\n-Operation cannot be performed with a zero, please try again!\n";
    }//end of zero check
    else if (x != 0 && y != 0) zero_check = 1;
  }// end zero check while loop
  std::cout<<x<<" % "<<y<<" = "<<x%y<<"\n";
  std::cout<<y<<" % "<<x<<" = "<<y%x;
}//end of modulus function


int main() {//beginning of main
  int Menu=-99;
  int Exit;
  while(true){//beginning of while loop
  
  
    std::cout<<"\n\n-------------------------------------\nWelcome to Rhett's Simple Calculator! |\n-------------------------------------";
  

    std::cout<<"\n\nPlease choose which operation you would like to perform.\n\nInput 1 for Addition.\n\nInput 2 for Subtraction.\n\nInput 3 for Multiplication.\n\nInput 4 for Division.\n\nInput 5 for Modulus.\n\n: ";
 

    std::cin>>Menu;
 

    switch(Menu){//beginning of menu switch
      case 1: Addition();
      break;
      case 2: Subtraction();
      break;
      case 3: Multiplication();
      break;
      case 4: Division();
      break;
      case 5: Modulus();
      break;
      default:
      std::cout<<"\nSorry but that isn't a valid option!";
    }//end of menu switch


    std::cout<<"\n\n\n\nThis is your oppurtunity to Exit the program.\n\n -Seize oppurtuntiy by inputting 1.\n\n -Repeat awesome program by inputting any number but 1.\n\n : ";
    std::cin>>Exit;
    if(Exit==1){//beginning of exit program if given one
      return(0);
    }//end of exit program if given 1

  }//end of while loop

}//end of main