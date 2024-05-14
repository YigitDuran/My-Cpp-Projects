//Write a program that will check if a product on a shop has been expired or
//not. The program will first read today’s date in month and day as TWO SEPARATE
//integer values. Then,the expiry date of the product will be given in month and
//day format, again as TWO SEPARATE integer values. Then your program will
//compare these two dates and says “The product is fresh” if today’s date is
//smaller than the expiry date of the product. Otherwise, the program will
// calculate how many days the product has been expired for and say “The product
// is still expired for X days” where X is the number of days the product has
//been expired for. NOTE: You can assume that each month has 30 days.
//Input: 6 10 7 1,  Output: The product is fresh
//Input: 2 1 1 12,  Output: The product has been expired for 19 days

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Enter the current month between 1 and 12, and press enter."   //Promts user to enter current month in the interval [1, 12]
              << std::endl;

    int month_today;                                                            //Current month

    std::cin >> month_today;                                                    //Takes a month_today input from the user.

    while( !(month_today >= 1 && month_today <= 12) )                           //Checks if month_today entered is not in the interval [1, 12]
    {
        std::cout << "Month value entered should be between 1 and 12, please "  //Tells user that their month_today input is wrong
                     "try again." << std::endl;

        std::cout << "Enter the current month between 1 and 12, and press "     //Prompts user to enter a month_today input in the interval [1, 12]
                     "enter." << std::endl;

        std::cin >> month_today;                                                //Takes month_today from
    }

    int day_today;                                                              //Current day

    if (month_today % 2 == 1)                                                   //Checks if month_today is odd
    {
        std::cout << "Enter the current day between 1 and 31, and press enter." //Promts user to enter a day_today in the interval [1, 31]
        << std::endl;

        std::cin >> day_today;                                                  //Takes a day_today from the user

        while( !(day_today >= 1 && day_today <= 31) )                           //Checks if day_today is not in the interval [1, 31]
        {
            std::cout << "Day value entered should be between 1 and 31, please "//Tells user that their day_today input is wrong
                         "try again." << std::endl;

            std::cout << "Enter the current day between 1 and 31, and press "   //Prompts user to enter a day_today in the interval [1, 31]
                         "enter." << std::endl;

            std::cin >> day_today;                                              //Takes a day_today input from the user
        }
    }
    else                                                                        //If month_today is not odd.
    {
        if(month_today == 2)                                                    //Checks if month_today is 2(february)
        {
            std::cout << "Enter the current day between 1 and 28, and press "  //Prompts user to enter a day_today in the interval [1, 28]
                         "enter." << std::endl;

            std::cin >> day_today;                                              //Takes a day_today input from the user

            while( !(day_today >= 1 && day_today <= 28) )                       //Checks if day_today entered is not in the interval [1, 28]
            {
                std::cout << "Day value entered should be between 1 and 28, "   //Tells user that their day_today input is wrong
                             "please try again." << std::endl;

                std::cout << "Enter the current day between 1 and 28, and press"//Prompts user to enter a day_today in the interval [1, 28]
                             " enter." << std::endl;

                std::cin >> day_today;                                          //Takes a day_today input from the user
            }
        }
        else if(month_today == 8)                                               //Checks if month_today is 8(November)
        {
            std::cout << "Enter the current day between 1 and 31, and press "   //Prompts user to enter a day_today in the interval [1, 31]
                         "enter." << std::endl;

            std::cin >> day_today;                                              //Takes a day_today input from the user

            while( !(day_today >= 1 && day_today <= 31) )                       //Checks if day_today entered is not in the interval [1, 31]
            {
                std::cout << "Day value entered should be between 1 and 31, "   //Tells user that their day_today input is wrong
                             "please try again." << std::endl;

                std::cout << "Enter the current day between 1 and 31, and press"//Prompts user to enter a day_today in the interval [1, 31]
                             " enter." << std::endl;

                std::cin >> day_today;                                          //Takes a day_today input from the user
            }
        }
        else                                                                    //If month_today is not 2(February) or 8(November)
        {
            std::cout << "Enter the current day between 1 and 30, and press "   //Prompts user to enter a day_today in the interval [1, 30]
                         "enter." << std::endl;

            std::cin >> day_today;                                              //Takes a day_today input from the user

            while( !(day_today >= 1 && day_today <= 30) )                       //Checks if day_today entered is not in the interval [1, 30]
            {
                std::cout << "Day value entered should be between 1 and 30, "   //Tells user that their month_today input is wrong
                             "please try again." << std::endl;

                std::cout << "Enter the current day between 1 and 30, and press"//Prompts user to enter a day_today in the interval [1, 30]
                             " enter." << std::endl;

                std::cin >> day_today;                                          //Takes a day_today input from the user
            }
        }
    }

    std::cout << "Enter the products expiry month between 1 and 12, and press " //Promts user to enter a expiry month in the interval [1, 12]
                 "enter." << std::endl;

    int month_expiry;                                                           //Expiry month of the product

    std::cin >> month_expiry;                                                   //Takes a month_expiry input from the user.

    while( !(month_expiry >= 1 && month_expiry <= 12) )                         //Checks if month_expiry entered not in the interval [1, 12]
    {
        std::cout << "Month value entered should be between 1 and 12, please "  //Tells user that their month_expiry input is wrong
                     "try again." << std::endl;

        std::cout << "Enter the products expiry month between 1 and 12, and "   //Promts user to enter a expiry month in the interval [1, 12]
                     "press enter." << std::endl;

        std::cin >> month_expiry;                                               //Takes a month_expiry input from the user.
    }

    int day_expiry;                                                             //Expiry day of the product

    if (month_expiry % 2 == 1)                                                  //Checks if month_expiry is odd
    {
        std::cout << "Enter the products expiry day between 1 and 31, and press"//Promts user to enter a day_expiry in the interval [1, 31]
                     " enter." << std::endl;

        std::cin >> day_expiry;                                                 //Takes a day_expiry input from the user

        while( !(day_expiry >= 1 && day_expiry <= 31) )                         //Checks if day_expiry entered is not in the interval [1, 31]
        {
            std::cout << "Products expiry day date should be between 1 and 31, "//Tells user day_expiry entered is not in the interval [1, 31]
                         "please try again." << std::endl;

            std::cout << "Enter the products expiry day between 1 and 31, and " //Promts user to enter a day_expiry in the interval [1, 31]
                         "press enter." << std::endl;

            std::cin >> day_expiry;                                             //Takes a day_expiry input from the user
        }
    }
    else                                                                        //If month_expiry is not odd
    {
        if(month_expiry == 2)                                                   //Checks if month_expiry is 2(February)
        {
            std::cout << "Enter the products expiry day between 1 and 28, and "//Promts user to enter a day_expiry in the interval [1, 28]
                         "press enter." << std::endl;

            std::cin >> day_expiry;                                             //Takes a day_expiry input from the user

            while( !(day_expiry >= 1 && day_expiry <= 28) )                     //Checks if day_expiry entered is not in the interval [1, 28]
            {
                std::cout << "Products expiry day date should be between 1 and "//Tells user day_expiry entered is not in the interval [1, 28]
                             "28, please try again." << std::endl;

                std::cout << "Enter the products expiry day between 1 and 28, " //Promts user to enter a day_expiry in the interval [1, 28]
                             "and press enter." << std::endl;

                std::cin >> day_expiry;                                         //Takes a day_expiry input from the user
            }
        }
        else if(month_expiry == 8)                                              //Checks if month_expiry is 8(November)
        {
            std::cout << "Enter the products expiry day between 1 and 31, and " //Promts user to enter a day_expiry in the interval [1, 31]
                         "press enter." << std::endl;

            std::cin >> day_expiry;                                             //Takes a day_expiry input from the user

            while( !(day_expiry >= 1 && day_expiry <= 31) )                     //Checks if day_expiry entered is not in the interval [1, 31]
            {
                std::cout << "Products expiry day date should be between 1 and "//Tells user day_expiry entered is not in the interval [1, 31]
                             "31, please try again." << std::endl;

                std::cout << "Enter the products expiry day between 1 and 31, " //Promts user to enter a day_expiry in the interval [1, 31]
                             "and press enter." << std::endl;

                std::cin >> day_expiry;                                         //Takes a day_expiry input from the user
            }
        }
        else                                                                    //If month_expiry is not 2(February) or 8(November)
        {
            std::cout << "Enter the products expiry day between 1 and 30, and " //Promts user to enter a day_expiry in the interval [1, 30]
                         "press enter." << std::endl;

            std::cin >> day_expiry;                                             //Takes a day_expiry input from the user

            while( !(day_expiry >= 1 && day_expiry <= 30) )                     //Checks if day_expiry entered is not in the interval [1, 30]
            {
                std::cout << "Products expiry day date should be between 1 and "//Tells user day_expiry entered is not in the interval [1, 30]
                             "30, please try again." << std::endl;

                std::cout << "Enter the products expiry day between 1 and 30, " //Promts user to enter a day_expiry in the interval [1, 30]
                             "and press enter." << std::endl;

                std::cin >> day_expiry;                                         //Takes a day_expiry input from the user
            }
        }
    }

    std::cout << std::endl;

    std::cout << "Today's date(DD/MM): " << std::setw(2) << std::setfill('0')   //prints out today's date
              << day_today << "/" << std::setw(2) << std::setfill('0')
              << month_today << std::endl;

    std::cout << "Expiry date(DD/MM):  " << std::setw(2) << std::setfill('0')   //prints out expiry date
              << day_expiry << "/" << std::setw(2) << std::setfill('0')
              << month_expiry << std::endl << std::endl;

    int result = 0;                                                             //Difference between expiry date and current date

    if(month_today > month_expiry)                                              //Checks if today's month is bigger than expiry date's month (product is expired)
    {
        for (int month_i = month_expiry; month_i < month_today; ++month_i)      //Counts the months from expiry month to current month
        {
            if(month_i % 2 == 1)                                                //If month_i is odd
            {
                result += 31;                                                   //Adds days of an odd month(31) to result
            }
            else                                                                //If month_i is not odd
            {
                if(month_i == 2)                                                //Checks if month_i is 2
                {
                    result += 28;                                               //Adds the days of 2(February)(28) to result
                }
                else if(month_i == 8 || month_i == 12)                          //Checks if month_i is 8(November) or 12(December)
                {
                    result += 31;                                               //Adds the days of 8(November) or 12(December) (31) to result
                }
                else                                                            //If month_i is not 2(February) or 8(november) or 12(December)
                {
                    result += 30;                                               //Adds days of an even month(30)
                }
            }
        }

        result -= day_expiry;                                                   //Subtracts day_expiry from the result
        result += day_today;                                                    //Adds day_today to the result

        std::cout << "The product has been expired for " << result << " days."  //Prints out the final result
        << std::endl;
    }
    else if(month_today == month_expiry)                                        //Checks if the current month and the expiry month are the same
    {
        if(day_today > day_expiry)                                              //Checks if the day_today is bigger than day_expiry (Product is expired)
        {
            result = day_today - day_expiry;                                    //Result is from expiry day to current day

            std::cout << "The product has been expired for " << result          //Prints out the final result
            << " days." << std::endl;
        }
        else                                                                    //If day_today is not bigger than day_expiry(Product is fresh)
        {
            result = day_expiry - day_today;                                    //Result is from day_today to day_expiry

            std::cout << "The product is fresh, " << result                     //Prints out the final result
            << " days remaining until expiry." << std::endl;
        }
    }
    else                                                                        //If month_expiry > month_today (product is fresh)
    {
        for (int month_i = month_today; month_i < month_expiry; ++month_i)      //Counts the months from the current month to the expiry month
        {
            if(month_i % 2 == 1)                                                //If month_i is odd
            {
                result += 31;                                                   //Adds the days of an odd month to result
            }
            else                                                                //If month_i is even
            {
                if(month_i == 2)                                                //If month_i is 2
                {
                    result += 28;                                               //Adds the days of 2(February)(28) to result
                }
                else if(month_i == 8 || month_i == 10 || month_i == 12)         //If month_i is 8(August) 10(October) or 12(December)
                {
                    result += 31;                                               //Adds the days of 8(August) or 12(December) (31) to result
                }
                else                                                            //If month_i is not 2(February) or 8(November)
                {
                    result += 30;                                               //Adds the days of an even month other than 2(February) and 8(November) to month
                }
            }
        }

        result -= day_today;                                                    //Subtracts day_today from the result
        result += day_expiry;                                                   //Adds day_expiry to the result

        std::cout << "The product is fresh, " << result                         //Prints out the final result
                  << " days remaining until expiry." << std::endl;
    }

    return 0;
}