/*
Created by: Shelby Jorgensen
Project 1: Madlibs
Created for CSCI 151
*/

#include <String>
#include <iostream>

int main() {
	//This array will hold each replacement word in the final madlib
	std::string replacementWords[] = { "verb1", "placeNoun", "verb2-ing", "verb3-ing",
				"pluralNoun1", "pluralNoun2", "pluralNoun3", "pluralNoun4", "verb3",
				"verb4", "adjective1", "adverb", "verb6" };

	//Take in each word and assign it to the proper spot in the array
	std::cout << "Enter a verb: ";
	std::cin >> replacementWords[0];

	std::cout << "Enter a noun that represents a place: ";
	std::cin >> replacementWords[1];

	std::cout << "Enter a verb ending in -ing: ";
	std::cin >> replacementWords[2];

	std::cout << "Enter another verb ending in -ing: ";
	std::cin >> replacementWords[3];

	std::cout << "Enter a plural noun: ";
	std::cin >> replacementWords[4];

	std::cout << "Enter another plural noun: ";
	std::cin >> replacementWords[5];

	std::cout << "Enter a plural noun again: ";
	std::cin >> replacementWords[6];

	std::cout << "Enter one more plural noun: ";
	std::cin >> replacementWords[7];

	std::cout << "Enter a verb: ";
	std::cin >> replacementWords[8];

	std::cout << "Enter another verb: ";
	std::cin >> replacementWords[9];

	std::cout << "Enter an adjective: ";
	std::cin >> replacementWords[10];

	std::cout << "Enter an adverb: ";
	std::cin >> replacementWords[11];

	std::cout << "Enter a verb: ";
	std::cin >> replacementWords[12];


	//Final madlib output
	std::cout << "Animals " + replacementWords[0] + " on every continent on " + replacementWords[1]
		+ ", with many " + replacementWords[2] + " in the wild and others " +
		replacementWords[3] + "on farms or in people's " + replacementWords[4] + ". There are many different types of animals, including mamamals " +
		replacementWords[5] + ", birds, " + replacementWords[6] + " and " + replacementWords[7] + ". Some animals " + replacementWords[8] + " in water, while others " +
		replacementWords[9] + " in trees. While not all animals would make " + replacementWords[10] + " pets, they are still " + replacementWords[11] + " interesting to "
		+ replacementWords[12] + " about.";

	//Madlib found on "https://www.woojr.com/animal-ad-libs-for-kids/all-about-animals/"
};