/*
 * 🚨 WARNING: CHALLENGE MODE ACTIVATED 🚨
 * 
 * 1️⃣ Sit back, take a deep breath, and **THINK**.
 * 2️⃣ For the next **10 minutes**, avoid using **Gen AI, ChatGPT, or any shortcuts**.
 * 3️⃣ Trust your **brain**—you’re smarter than you think!
 * 4️⃣ Consider yourself a **LOSER** if you cheat. Seriously, promise yourself you won't. 😤
 * 5️⃣ If you solve it on your own, **you WIN** and level up as a true programmer and come and meet me ! 
 * 
 * 
 * 💡 Remember: The best coders aren’t the ones who copy-paste. They are the ones who **struggle, think, fail, and then succeed.** 
 *    
 * Now, write your code! You got this! 💪🔥
 */

#include <stdio.h>

#define MAX_ROOMS 5  //  max number of rooms

// Function prototypes
void initializeSystem();
void displayMenu();
void controlLights();
void readTemperature();
void detectMotion();
void securitySystem();
void analyzeHouseStatus();

int main() {
    initializeSystem();
    int choice;

    while (1) {
        displayMenu();
        printf("Enter your choice : ");
        scanf("%d",&choice);

        switch (choice){
            case 1:
                controlLights();
                break;

            case 2:
                readTemperature();
                break;

            case 3:
                detectMotion();
                break;
            
            case 4:
                securitySystem();
                break;

            case 5:
                analyzeHouseStatus();
                break;

            case 6:
                print("Exiting...");
                return 0;
            default:
                print ("Invalid choice");
        }
    }
    return 0;
}

 
void initializeSystem() {
  
}

void displayMenu() {
   
}
void controlLights() {

}
void readTemperature() {

}
void detectMotion() {

}
void securitySystem() {

}
void analyzeHouseStatus() {

}
