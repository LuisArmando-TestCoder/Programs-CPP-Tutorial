import os

step = 100
population = 10

for i0 in range(0, step * population, step):
    for i1 in range(0, step, int(step / population)):
        for i2 in range(int(step / population)):
            folderPath = f"programs/p{i0}/p{i0 + i1}/p{i0 + i1 + i2}"

            if not os.path.exists(folderPath):
                os.makedirs(folderPath)

            filePath = f"{folderPath}/a.cpp"

            if not os.path.exists(filePath):
                file = open(filePath, "w")
                file.write("int main() {\n\treturn 0;\n}")
