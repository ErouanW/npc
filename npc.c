#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    system("cp -r ~/delivery/utils/npc/source/include . && cp -r ~/delivery/utils/npc/source/lib . && cp -r ~/delivery/utils/npc/source/src . && cp ~/delivery/utils/npc/source/Makefile . && cp -r ~/delivery/utils/npc/source/tests .");
    system("clear && echo DONE\n");
    return (0);
}
