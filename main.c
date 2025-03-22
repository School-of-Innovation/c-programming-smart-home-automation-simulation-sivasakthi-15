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

int Lights[MAX_ROOMS];
int Temperature[MAX_ROOMS];
int Motion[MAX_ROOMS];
int Locks[MAX_ROOMS];

int main() {
    initializeSystem();
    int choice,Room;

    while (1) {
        displayMenu();
        printf("Enter your choice : ");
        scanf("%d",&choice);

        if (choice >= 1 && choice <= 4) {
            printf("Enter room number (1-%d): ", MAX_ROOMS);
            scanf("%d", &Room);

            if (Room < 1 || Room > MAX_ROOMS) {
                printf("Invalid room number. Please try again.\n");
                continue;
            }
        }

        switch (choice){
            case 1:
                controlLights(Room);
                break;

            case 2:
                readTemperature(Room);
                break;

            case 3:
                detectMotion(Room);
                break;
            
            case 4:
                securitySystem(Room);
                break;

            case 5:
                analyzeHouseStatus(Room);
                break;

            case 6:
                printf("Exiting...");
                return 0;
            default:
                printf("Invalid choice");
        }
    }
    return 0;
}

 
void initializeSystem() {
    for(int i = 0; i<MAX_ROOMS; i++){
        Lights[i]=0;
        Temperature[i]=22 + (i%5);
        Motion[i]=0;
        Locks[i]=1;
    }
    printf("The system is initialized based on requirements\n");
    printf("1.All Lights are in OFF state\n2.All Doors are LOCKED\n3.No Motion is DETECTED");
  
}

void displayMenu() {
   printf("SMART HOMEAUTOMATION MENU\n");
   printf("1. Toggle Light\n");
   printf("2. Read Temperature\n");
   printf("3. Check Motion Sensor\n");
   printf("4. Lock/Unlock Security System\n");
   printf("5. House Status Summary\n");
   printf("6. Exit\n");
}

void controlLights(int Room) {
        if (Lights[Room - 1] == 0) {
            Lights[Room - 1] = 1;  
            printf("Light in Room %d is now ON.\n", Room);
        } else {
            Lights[Room - 1] = 0;  
            printf("Light in Room %d is now OFF.\n", Room);
        }
    } 

void readTemperature(int Room) {
    printf("The Temperature in room %d : %d°C\n", Room, Temperature[Room - 1]);
   
}
void detectMotion(int Room) {
    if (Motion[Room - 1] == 1) {
        printf("Room %d Motion detection : Detected\n",Room);
    } else {
        printf("Room %d Motion detection : No Motion\n",Room);
    }
}
void securitySystem(int Room) {
    Locks[Room - 1] = !Locks[Room - 1];

    if (Locks[Room - 1] == 1) {
        printf("Door in Room %d is now Locked.\n", Room);
    } else {
        printf("Door in Room %d is now Unlocked.\n", Room);
    }

}
void analyzeHouseStatus(int Room) {
    printf("House Status:\n");
    for (int i = 0; i < MAX_ROOMS; i++) {
        printf("- Room %d: Light %s, Temp %d°C, %s, %s\n", i + 1,
               Lights[i] ? "ON" : "OFF", 
               Temperature[i],
               Motion[i] ? "Motion Detected" : "No Motion",
               Locks[i] ? "Locked" : "Unlocked");
    }
}
