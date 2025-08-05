alphabet = 'abcdefghijklmnopqrstuvwxyz'
sentence = input('暗号：')
org_sentence = ''

for i in sentence:
	char = sentence[i]
	char_index = alphabet.index(char)
	org_index = (char_index - 3) % len(alphabet)
	org_char = alphabet[org_index]
	org_sentence += org_char
    
print(org_sentence)