import os

step = 1
population = 10

for i0 in range(0, population, step):
    for i1 in range(0, population, step):
        for i2 in range(population):
            folderPath = f"programs/p{i0}00/p{i0}{i1}0/p{i0}{i1}{i2}"

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
