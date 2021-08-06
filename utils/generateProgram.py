import os
import sys

arguments = list(sys.argv)
a0 = arguments[1]
a1 = arguments[2]
a2 = arguments[3]
folderPath = f"programs/p{a0}00/p{a0}{a1}0/p{a0}{a1}{a2}"

if not os.path.exists(folderPath):
    os.makedirs(folderPath)

filePath = f"{folderPath}/a.cpp"

if not os.path.exists(filePath):
    file = open(filePath, "w")
    file.write(
        "#include <iostream>\n\n"
        + "using namespace std;\n\n"
        + "int main() {\n\tcin.get();\n\n\treturn 0;\n}"
    )