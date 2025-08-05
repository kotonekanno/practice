alphabet = 'abcdefghijklmnopqrstuvwxyz'
sentence = input('平文：')
new_sentence = ''

for i in sentence:
	char = sentence[i]
	char_index = alphabet.index(char)
	new_index = (char_index + 3) % len(alphabet)
	new_char = alphabet[new_index]
	new_sentence += new_char
    
print(new_sentence)