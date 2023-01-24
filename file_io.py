#absolute path
with open("/mnt/c/dev/text.txt") as file_fd:
    file_content = file_fd.read()

print(file_content)
#relative path
with open("../../text.txt") as file_fd:
    file_content = file_fd.read()

print(file_content)


with open("output_text.txt","a") as output_file_fd:
    output_file_fd.write(file_content)





