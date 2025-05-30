#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#define MAX 10

//Structure for message queue
struct mesg_buffer{
long mesg_type;
char mesg_text[100];
} message;
int main(){
        key_t key;
        int msgid;
        //ftok to generate unique key
        key= ftok("progfile", 65);
        //msgget creates a message queue
        //and returns identifier

        msgid = msgget(key, 0666 | IPC_CREAT);
        message.mesg_type = 1;
        printf("Write Data: ");
        fgets(message.mesg_text,MAX,stdin);
        //msgsnd to send message
		
		 msgid = msgget(key, 0666 | IPC_CREAT);
        message.mesg_type = 1;
        printf("Write Data: ");
        fgets(message.mesg_text,MAX,stdin);
        //msgsnd to send message
        msgsnd(msgid, &message, sizeof(message), 0);
        //Display the message
        printf("Date send is: %s \n", message.mesg_text);

//recieve

         //ftok to generate unique key
        //msgget creates a message queue
        //and returns identifier

        msgid = msgget(key, 0666 | IPC_CREAT);
        //msgrcv to recieve message
        msgrcv(msgid, &message, sizeof(message), 1, 0);
        //Display the message
        printf("Data recieved is: %s \n",
        message.mesg_text);
		 //To destroy the message queue
        msgctl(msgid, IPC_RMID, NULL);
        return 0;
 }

