#!/bin/bash

gcc -c ft_putchar.c ft_strlen.c ft_putstr.c
ar rc libft.a*.o
