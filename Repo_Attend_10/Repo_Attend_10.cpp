// Repo_Attend_10.cpp : Defines the exported functions for the DLL.
//

#include "framework.h"
#include "Repo_Attend_10.h"


// This is an example of an exported variable
REPOATTEND10_API int nRepoAttend10=0;

// This is an example of an exported function.
REPOATTEND10_API int fnRepoAttend10(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CRepoAttend10::CRepoAttend10()
{
    return;
}

REPOATTEND10_API int test1(int i) {
    return (i + i);
}
