/*
Programmer: Cody Griffin
Date: 7/7/2016
Program: The Story of Ima Knight
*/

#include <iostream>
#include <string>

using namespace std;

int escape() {
	cin.get();
	cin.ignore();
	return 0;
}
int main() {
	//Prologue
	cout << "Ima Knight is a knight who wants to be known as the best knight around. ";
	cout << "One day, he was given a task by King Paul XVIII to rescue her daughter, Princess Julia, who was captured by the evil dragon Dragonus. ";
	cout << "If Ima successfully completed this task, the king said that he would declare Ima as the top knight of the land. ";
	cout << "If Ima fails to rescue the princess safely, however, he will be exiled from the land, never to return, and have his rank of knighthood revoked. ";
	cout << "If Ima decides not to do this task, he could still remain an ordinary knight." << endl;

	//Asks user whether he or she wants to accept King Paul XVIII's task
	int choiceOne;
	cout << "What does Ima choose to do?" << endl;
	cout << "1. Accept King Paul XVIII's task." << endl;
	cout << "2. Reject King Paul XVIII's task." << endl;
	cin >> choiceOne;
	cout << endl;

	//If Ima accepts King Paul XVIII's task, the story continues to the bridge.
	if (choiceOne == 1) {
		cout << "Ima makes his way to the castle when he comes a bridge that goes across the Griffin River. ";
		cout << "A bridge guard stands in the way of the bridge. The guard tells Ima that he must pay 20 shillings to cross the bridge. ";
		cout << "Ima has enough money to cross the bridge, but he will only be left with 1 shilling left. ";
		cout << "If he runs into another bridge and a bridge guard is defending that hypothetical bridge, he will not be able to pay to cross." << endl;
		
		//Asks user how to respond to the bridge guard
		int choiceTwo;
		cout << "What does Ima choose to do?" << endl;
		cout << "1. Pay the guard." << endl;
		cout << "2. Fight the guard." << endl;
		cout << "3. Attempt to cross the river." << endl;
		cin >> choiceTwo;
		cout << endl;

		//If Ima pays the guard
		if (choiceTwo == 1) {
			cout << "The guard allows Ima to cross the bridge, allowing him to go straight to the castle. ";
			cout << "He sees the large dragon named Dragonus guarding the castle that houses Princess Julia. ";
			cout << "Dragonus sees Ima and goes after him. Luckily, Ima is able to enter the castle. However, so does Dragonus.";
			cout << "Ima is stuck between fighting Dragonus first, or getting the princess to safety first." << endl;

			//Asks user whether to fight the dragon, or try to rescue the princess
			int choiceThree;
			cout << "What does Ima choose to do?" << endl;
			cout << "1. Fight the dragon first." << endl;
			cout << "2. Attempt to rescue Princess Julia first." << endl;
			cin >> choiceThree;
			cout << endl;

			//If Ima fights the dragon first
			if (choiceThree == 1) {
				cout << "Ima successfully vanquishes Dragonus after a long and vigorous battle. He rescues the princess and returns home. ";
				cout << "He is given a hero's welcome by King Paul XVIII and his constituents. He is given the honor of Lead Knight by the king. ";
				cout << "As soon as Ima is named Lead Knight, Princess Julia kisses him. ";
				cout << "Years later, they both get married, Ima is named Prince Ima Knight, and they lived happily ever after. The End." << endl;
			}
			//If Ima attempts to rescue Princess Julia first
			else if (choiceThree == 2) {
				cout << "Ima allows Princess Juila to escape the castle by distracting Dragonus, allowing the princess to have a clear path to the exit. ";
				cout << "However, as valiant as Ima tried, he was unable to defeat Dragonus, and tragically passed away. Princess Julia returns home and explains to her father what happened with Ima. ";
				cout << "The king announced that Ima would be memorialized with a statue and announced that the day would forever be known as 'Ima Knight Day', in honor of Ima's heroic sacrifice. The End." << endl;
			}
			else {
				cout << "This is not a valid choice." << endl;
			}
		}//End of choiceTwo's 1st option

		//If Ima fights the guard
		else if (choiceTwo == 2) {
			cout << "Although the battle turns out to be a draw, both Ima and the guard are seriously wounded. ";
			cout << "Ima reluctantly decides that he will be unable to survive the mission to rescue the princess and returns back home. ";
			cout << "King Paul XVIII becomes furious when Ima states that he was unable to arrive at the castle, yet alone rescue the princess. ";
			cout << "Although the king noticed Ima's wounds, he announces to his constituents not to treat Ima's injuries. ";
			cout << "In addition, he banishes Ima from the land and revokes his knighthood status. ";
			cout << "Days after he is exiled, Ima dies from his wounds as a result of blood loss and infection. The End." << endl;
		}// End of choiceTwo's 2nd option

		//If Ima tries to cross the river
		else if (choiceTwo == 3) {
			cout << "Ima goes around the bridge guard and attempts to cross the river by himself. The river is strong, deep, and is difficult to cross. ";
			cout << "Although Ima almost crosses the river, he gets fatigued and gets swept away, never to be heard and seen from again. The End. ";
		}//End of choiceTwo's 3rd option

		else {
			cout << "This is not a valid choice." << endl;
		}

	}//End of choiceOne's 1st option

	//If the user chooses not to accept the king's task
	else if (choiceOne == 2) {
		cout << "The king allows you to carry on being a regular knight and Ima keeps living a normal life." << endl;
	}//End of choiceOne's 2nd option

	//If the user does not choose either of the choices
	else {
		cout << "This is not a valid choice." << endl;
	}

	escape();
};

