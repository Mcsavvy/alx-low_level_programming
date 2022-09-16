"""
This program would solve the problem of printing in  n
where n is a whole number of with unknown number of digits

* n may be a negative or positive number.
* you are to use _putchar only (except for when debugging)

"""
from typing import TypeVar

char = TypeVar('char', bound=str)

def _putchar(c: char):
	if len(str(c)) != 1:
		raise ValueError('character too long.')
	print(c, end='')


def count_digits(n: int):
	"""
	To count digits, I have to remove have to comsume the number
	from the tail. This works well but how do we handle these:
	
	>>> n = 15400750
	            ^  ^
	To consume a zero, you have to be certain that the la
	"""
	count = 0;
	
	while True:
		head = n // 10
		tail = n % 10
		count += 1
		if not head:
			break
		else:
			n = head
	return (count)


def  print_number(n: int):
	if n < 0:
		_putchar('-')
		n = -n
	if n == 0:
		return _putchar('0')
	length = count_digits(n)

	while True:
		length = count_digits(n)
		if length == 1:
			_putchar(n)
			break
		assert length != 1
		# let n be 2609
		# splitter = 10 ** (length{4} - 1) {1000}
		splitter = 10 ** (length - 1)
		head = n // splitter
		tail = n % splitter
		_putchar(head)
		new_length = count_digits(tail)
		# print(vars())
		while (new_length < length - 1):
			_putchar('0')
			new_length += 1
			
		n = tail
		
			
		






