#include "include/minitalk.h"

void	ft_handler_server(int sig, siginfo_t *info, void *context);

int	main(void)
{
	struct sigaction	info_hear;

	info_hear.sa_sigaction = &ft_handler_server;
	info_hear.sa_flags = SA_SIGINFO | SA_NODEFER;
	sigemptyset(&info_hear.sa_mask);
	sigaction(SIGUSR1, &info_hear, 0);
	sigaction(SIGUSR2, &info_hear, 0);
	ft_printf("pid: %d", getpid());
	while (1)
		usleep(10);
}

void	ft_handler_server(int sig, siginfo_t *info, void *context)
{
	static int	bit = -1;
	static char	c = 0;

	(void)context;
	if (bit == -1 && c == 0)
		ft_printf("\nCliente envia : ");
	if (bit < 0)
		bit = 7;
	if (sig == SIGUSR1)
		c |= 1 << bit;
	else if (sig == SIGUSR2)
		c &= ~(1 << bit);
	if (bit == 0 && c != 0)
		ft_putchar_fd(c, 1);
	else if (bit == 0 && c == 0)
		kill(info->si_pid, SIGUSR2);
	bit--;
	kill(info->si_pid, SIGUSR1);
}
