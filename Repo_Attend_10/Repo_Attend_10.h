// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the REPOATTEND10_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// REPOATTEND10_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef REPOATTEND10_EXPORTS
#define REPOATTEND10_API __declspec(dllexport)
#else
#define REPOATTEND10_API __declspec(dllimport)
#endif

// This class is exported from the dll
class REPOATTEND10_API CRepoAttend10 {
public:
	CRepoAttend10(void);
	// TODO: add your methods here.
};

extern REPOATTEND10_API int nRepoAttend10;

REPOATTEND10_API int fnRepoAttend10(void);

REPOATTEND10_API int test1(int i);
