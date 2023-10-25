void	ft_somesort(node **stacks)
{
	int smallest;
	int longitud;
	node *tmp;
	int largest;
	int moves;

	moves = 0;
	largest = ft_largest_value(stacks[0]);
	tmp = stacks[0];
	longitud = ft_count_nodes(stacks[0]);
	smallest = ft_smallest_value(stacks[0]);
	while (0 < ft_count_nodes(stacks[0]))
	{
		if (stacks[0]->value == smallest)
		{
			ft_pb(stacks);
			smallest++;
		}
		ft_ra(stacks);
	}
	while (0 < ft_count_nodes(stacks[1]))
		ft_pa(stacks);	
}


void	ft_divided_bubble(node **stacks)
{
	int 	middle;
	int		i;

	middle = (ft_smallest_value(stacks[0]) + ft_largest_value(stacks[0])) / 2;
	i = ft_count_nodes(stacks[0]) ;
	while (i >= 0)
	{
		if (stacks[0]->value <= middle)
			ft_pb(stacks);
		else
			ft_ra(stacks);
		i--;
	}
	ft_bubble_sort(&stacks[0]);
	ft_bubble_sort(&stacks[1]);
	i = middle;
	while (i > 0)
	{
		ft_rrb(stacks);
		ft_pa(stacks);
		i--;
	}
}

void	ft_radix_sort(node **stacks)
{
	int m;
	int n;
	int sorting_digit;
	int longitud;
	m = 10;
	n = 1;
	sorting_digit = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == sorting_digit)
				ft_pb(stacks);
			else
				ft_ra(stacks);
			longitud--;
		}
		sorting_digit++;
	}
	m *= 10;
	n *= 10;
	sorting_digit = 9;
	while (stacks[1] != NULL)
	{
		longitud = ft_count_nodes(stacks[1]);
		while (longitud > 0)
		{
			if ((stacks[1]->value % m) / n == sorting_digit)
				ft_pa(stacks);
			else
				ft_rb(stacks);
			longitud--;
		}
		sorting_digit--;
	}
	m *= 10;
	n *= 10;
	sorting_digit = 0;
	while (stacks[0] != NULL)
	{
		longitud = ft_count_nodes(stacks[0]);
		while (longitud > 0)
		{
			if ((stacks[0]->value % m) / n == sorting_digit)
				ft_pb(stacks);
			else
				ft_ra(stacks);
			longitud--;
		}
		sorting_digit++;
	}
	while (stacks[1] != NULL)
		ft_pa(stacks);	
}

