#ifndef __COMMAND_H__
#define __COMMAND_H__

#include "dynArrays.h"
#include "notebook.h"

typedef struct command
{
    int inoffset;
    char* red_in;
    char* red_out;
    int append_out;
    DynArray args;
    struct command * next;
}* Command;

void feedInput(int fd, String input);
int getInOffSet(char *command, int *i);
char *getInput(int fildes);
String execute(Command comando, String input);
Command commandDecoder(char* command);
void printCommandArgs(Command command);
void printCommand(Command cmd);
void freeCommand(Command cmd);
#endif