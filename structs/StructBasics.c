#include <stdio.h>
#include <string.h>

struct names{
    char firstName[16];
    char lastName[16];
};

typedef struct{
    int val1;
    int val2;
}value;

void printStruct(struct names *myStruct)
{
    for(int i = 0; i < 4; i++)
    {
        printf("%s %s\n", myStruct[i].firstName, myStruct[i].lastName);
    }
}

int main(int argc, char const *argv[])
{
    //Needs the struct keyword
    struct names nameList[] = {{"Konsta", "Siekkeli"},
        {"Kaija", "Kajuutta"},
        {"Riikka", "Ruusukaali"},
        {"Tapio", "Karhula"}
    };
    //Don't need the struct keyword
    value values[3] = {{123, 43},{234,3},{4, 523}};

    printStruct(nameList);
    /*
    for(int i = 0; i < 4; i++)
    {   
        if(i < 3)
        {
            printf("Struct number %d holds: %s %s, %d\n",
            i+1, nameList[i].firstName, nameList[i].lastName, values[i].val1);
        }
        else
        {
            printf("This is the final element: %s %s\n",
             nameList[i].firstName, nameList[i].lastName);
        }       
    }
    */
    return 0;
}
