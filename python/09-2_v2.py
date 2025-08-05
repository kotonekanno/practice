c_list = {}
alphabet = 'abcdefghijklmnopqrstuvwxyz'

for char in alphabet:
	char_index = alphabet.index(char)
	new_char = alphabet[(char_index + 3) % 26]
	c_list[char] = new_char

print(c_list)