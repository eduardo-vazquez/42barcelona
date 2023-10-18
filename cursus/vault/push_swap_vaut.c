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
