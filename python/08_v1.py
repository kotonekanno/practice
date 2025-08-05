alphabet = 'abcdefghijklmnopqrstuvwxyz'
char = input('1文字入力：')

char_index = alphabet.index(char)
code_index = (char_index + 3) % len(alphabet)

code = alphabet[code_index]
print(code)