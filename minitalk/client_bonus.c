#include "libs/minitalk_bonus.h"

int		g_bit_recibido;
void	f_handler_client(int signal);
void	ft_send_string(char *message, int pid);
void	ft_send_char(char c, int pid);

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		ft_printf("debes colocar el PID del proceso y la string a enviar");
		exit(-1);
	}
	signal(SIGUSR1, &f_handler_client);
	signal(SIGUSR2, &f_handler_client);
	pid = ft_atoi(argv[1]);
	if (pid == 0)
	{
		ft_printf("pid = 0, no es aplicable en este caso");
		exit (-1);
	}
	ft_send_string(argv[2], pid);
	while (1)
		usleep(10);
}

void	f_handler_client(int signal)
{
	if (signal == SIGUSR1)
		g_bit_recibido = 1;
	else if (signal == SIGUSR2)
	{
		ft_printf("mensaje enviado completamente\n");
		exit(1);
	}
}

void	ft_send_string(char *message, int pid)
{
	int		i;
	char	c;

	i = 0;
	while (message[i])
	{
		c = message[i];
		ft_send_char(c, pid);
		i++;
	}
	ft_send_char(0, pid);
}

void	ft_send_char(char c, int pid)
{
	int	bit;

	bit = 7;
	while (bit >= 0)
	{
		if (kill(pid, 0) < 0)
		{
			ft_printf("te has inventado el PID");
			exit(-1);
		}
		g_bit_recibido = 0;
		if (c & (1 << bit))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		bit--;
		while (g_bit_recibido == 0)
			usleep(10);
	}
}
