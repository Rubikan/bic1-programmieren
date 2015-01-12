#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <string.h>
#include <errno.h>

void print_dir(DIR *pDir, char dirname[]);

int main(int argc, const char* argv[]) {
    DIR *pDir;

	pDir = opendir(".");
	if (pDir == NULL) {
		printf("Cannot open current directory!");
		return 1;
	}
	print_dir(pDir, ".");	
	closedir(pDir);
	return 0;	
}

void print_dir(DIR *pDir, char dirname[]) {
	DIR *pSubDir;
	FILE *file;
	struct dirent *pDirent;
	struct stat pStat;
	char subfile[512];
	int status;
	int c;

	while ((pDirent = readdir(pDir)) != NULL) {
		strcpy(subfile, dirname);
		strcat(subfile, "/");
		strcat(subfile, pDirent->d_name); 
		status = stat(subfile, &pStat);
		if(status == -1)
			printf("ERROR: %s\n", strerror(errno));
		if S_ISREG(pStat.st_mode) {
			printf("FILE: %s, STATUS: %d\n", pDirent->d_name, status);
			file = fopen(subfile, "r");
			printf("-----CONTENT OF %s-----\n", pDirent->d_name);
			while ((c = getc(file)) != EOF)
        		putchar(c);
			fclose(file);
			printf("\n--------------------\n");
		} 
		if S_ISDIR(pStat.st_mode) {
			if (strncmp(pDirent->d_name, ".", 1) == 0 || strncmp(pDirent->d_name, "..", 2) == 0) {
				printf("DIRECTORY: %s\n", pDirent->d_name);
			} else {
				pSubDir = opendir(subfile);
				printf("DIRECTORY: %s\n", pDirent->d_name);
				printf("[Printing Files of Subdirectory %s]\n", pDirent->d_name);
				print_dir(pSubDir, subfile);
				printf("[Leaving Subdirectory %s]\n", pDirent->d_name);
				closedir(pSubDir);
			}
		}
	}	
}