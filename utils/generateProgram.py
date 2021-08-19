import os
import sys

def executeConditionalPath(path, callback):
    if not os.path.exists(path):
        print(f"This resource didn't exist: ", path)
        print("Proceeding to create: ", path)

        callback(path)

def createFile(path, contents):
    file = open(path, "w")
    file.write(contents)
    file.close()

arguments = list(sys.argv)
a2 = arguments[1]
a3 = arguments[2]
a4 = arguments[3]
folderPath = f"programs/{a2}00/{a2}{a3}0/{a2}{a3}{a4}"

executeConditionalPath(
    folderPath,
    lambda path: os.makedirs(path)
)

executeConditionalPath(
    f"{folderPath}/program.cpp",
    lambda path: createFile(
        path,
        "#include <iostream>\n" +
        "#include <string>\n" +
        "#include \"head.h\"\n\n" +
        "int main()\n" +
        "{\n" +
        "\t\n\n" +
        "\tstd::cin.get();\n" +
        "}"
    )
)

executeConditionalPath(
    f"{folderPath}/head",
    lambda path: os.makedirs(path)
)

executeConditionalPath(
    f"{folderPath}/head/head.h",
    lambda path: createFile(
        path,
        "#pragma once\n\n" +
        "void f();"
    )
)

executeConditionalPath(
    f"{folderPath}/head.cpp",
    lambda path: createFile(
        path,
        "void f()\n" +
        "{\n" +
        "\t\n" +
        "}"
    )
)