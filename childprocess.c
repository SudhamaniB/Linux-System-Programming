/*****************
author : bsm
description: program to create child process
********************/
#include<stdio.h>
#include<unistd.h>

main()
{
	pid_t pid;
	pid = fork();
	if(pid == -1) {
		perror("fork failed");
	 }
	if(pid == 0)
	{
		//child
		sleep(1);
		printf("children pid:%d\n",getpid());
		printf("children process parent pid:%d\n",getppid());

	}
	else
	{
		//parent
		sleep(1);
		printf("parent pid:%d\n",getpid());
		printf("parent process parent pid:%d\n",getppid());
	}

}
