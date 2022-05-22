
alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"

string_input = input("Enter a string: ")
shift_input = int(input("By how many character do you want to shift the encryption: "))

if(shift_input >26):
  shift_input = shift_input % 26

  
input_length = len(string_input)

string_output = ""

for i in range(input_length):
  character = string_input[i]
  location_of_character = alpha.find(character)
  new_location = location_of_character + shift_input
  if(new_location >= 26 ):
    new_location -= 26
  string_output += alpha[new_location]
  
print("Encrypted text is: ", string_output)


