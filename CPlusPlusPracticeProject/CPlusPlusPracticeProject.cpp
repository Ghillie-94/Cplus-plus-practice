// CPlusPlusPracticeProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

int main()
{
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
