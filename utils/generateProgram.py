import os
import sys

arguments = list(sys.argv)
a0 = arguments[1]
a1 = arguments[2]
a2 = arguments[3]
folderPath = f"programs/{a0}00/{a0}{a1}0/{a0}{a1}{a2}"

def executeConditionalPath(path, callback):
    if not os.path.exists(path):
        print(f"This resource didn't exist: ", path)
        print("Proceeding to create: ", path)

        callback()

executeConditionalPath(folderPath, lambda: os.makedirs(folderPath))

filePath = f"{folderPath}/program.cpp"

def createFile():
    file = open(filePath, "w")
    file.write(
        "#include <iostream>\n" +
        "#include <string>\n\n" +
        "int main() {\n\t\n" +
        "\n\tstd::cin.get();\n" +
        "\n\treturn 0;\n" +
        "}"
    )

executeConditionalPath(filePath, createFile)
