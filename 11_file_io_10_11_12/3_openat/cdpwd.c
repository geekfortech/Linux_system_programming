# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <limits.h>


int main(int argc , char * argv[])
{
	char *ptr;
	int maxpathsize;
	maxpathsize = pathconf("/",_PC_PATH_MAX);
	ptr = (char *) malloc (maxpathsize);
	if (getcwd(ptr, maxpathsize) == NULL){
		perror("prog:");
		exit(1);
	}
	printf("cwd = %s\n", ptr);
	if (chdir(argv[1]) < 0){
		perror("prog:");
		exit(1);
	}
	if (getcwd(ptr, maxpathsize) == NULL){
		perror("prog:");
		exit(1);
	}
	printf("cwd = %s\n", ptr);
}
