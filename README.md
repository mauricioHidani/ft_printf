# Documentation
🎒[*42 São Paulo*](https://www.42sp.org.br/) \
📆*Friday, 8 August 2025* - 📌*São Paulo, Brazil*

## [ft_printf.c]()

## [ft_print_addr.c]()

This function is used to print the address of a specified variable by the 
function.

```c
int	ft_print_addr(void *ptr);
```

When the pointer of the variable whose address will be capture is informed, the 
function will convert the address to an `unsigned long` type and display it in 
hexadecimal and return the count of the characters prints on display.

## [ft_print_hex.c]()

## [ft_print_hexup.c]()

## [ft_print_char.c]()

It prints a character on the screen and returns the number printed or the number 
used. Even if it is a non-printable character, it must be counted.

```c
int	ft_print_char(const char c);
```

## [ft_print_dec.c]()

Prints a decimal number on the display, including its sign if it is negative.

```c
int	ft_print_dec(const int nbr);
```

## [ft_print_udec.c]()

Prints a decimal number on the display, without including sign.

```c
int	ft_print_udec(const unsigned int nbr);
```

## [ft_print_str.c]()

## [ft_putnbr.c]()

## [ft_putnbr_ul.c]()
