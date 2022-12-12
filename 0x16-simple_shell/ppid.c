#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

/**
 * main - PID
 *
 * Return: Always 0.
 */
int main(void)
{
    pid_t parent_pid, child_pid, my_pid;
    int status;

    my_pid = getpid();
    parent_pid = getppid();
    child_pid = fork();

    if (child_pid == -1)
    {
	    perror("Error: ");
	    return (1);
    }
    if (child_pid != 0)
    {
	    wait(&status);
	    printf("parent process: %u\n", parent_pid);
	    printf("my process: %u\n", my_pid);
	    printf("child process: %u\n", child_pid);
    }
    return (0);
}
