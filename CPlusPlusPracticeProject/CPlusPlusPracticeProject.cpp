// CPlusPlusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

void BasicFunction() 
{
    std::cout << "basic function ran!\n";
}

// there exists a function called EarlyDeclare
// this is called a forward declaration 
void EarlyDeclare();


void ParameterFunc(int paramaJam)
{
    //woah black betty..
    ++paramaJam;
    std::cout << "parameterFunc ran - paramaJam = " << paramaJam << "!\n";
}

int ReturnFunc()
{
    return 42;
}

int main()
{
    BasicFunction();
    
    // like saying paramJam = testJam
    int testJam = 4;
    ParameterFunc(testJam);

    int returnValue = ReturnFunc();
    std::cout << "returnValue = " << returnValue << "!\n";


    int testInt = 7;
    float testFloat = 3.14f;
    bool hasUserLostTheGame = true;
    char testChar = 'c';
    std::string testParagraph = "The path of the righteous man is beset on all sides by the Inequities of the selfish and the tyranny of evil men." 
        "Blessed is he who, in The name of charityand good will, shepherds the weak through the valley of Darkness," 
        "for he is truly his brother's keeper and the finder of lost Children."
        "And I will strike down upon thee with great vengeance and furious Anger those who attempt to poison and destroy my brothers."
        "And you will know My name is the Lord when I lay my vengeance upon thee.";
    std::string truncatedParagraph = testParagraph.substr(0, 20);
    std::cout << "Roses are red\n" << "Violets are blue\n" << "Python is slow\n" << "and so are you!\n" << truncatedParagraph;

    //input
    /*
    int userSelection = 0;
    std::cout << "select a direction using a number from 0-2 \n" << "North = 0\n" << "East = 1\n" << "West = 2\n";
    std::cin >> userSelection;

    

    switch (userSelection)
    {
    case 0:
    {
        std::cout << "You walk towards a towering castle, surrounded by a moat with a drawbridge. The drawbridge is closed so you cannot cross.\n";
        break;
    }
    case 1:
    {
        std::cout << "You walk along a narrow path that follows the side of a ravine. A river surges below,the rapids bubbling violently.\n";
        break;
    }
    case 2:
    {
        std::cout << "You walk into a wildflower meadow. The scent of wildflowers filling the air.\n";
        break;
    }
       
    default: {
        std::cout << "invalid direction\n";
    }
        break;
    }
    */

    int searchResults = 3;
    std::string google ="g";
    std::string gle = "gle";
        for (int i = 0; i < searchResults; ++i)
        {
            google += "o";
        }
        
        google += "gle";

        std::cout << google;




   


}

// implentation for early declare that was declared at the top
// name must match exactly
void EarlyDeclare()
{
    std::cout << "Early declare function ran!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
