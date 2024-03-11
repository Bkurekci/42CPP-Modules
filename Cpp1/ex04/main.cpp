#include <iostream>
#include <fstream>

enum	Error
{
	ARG,
	INPUT,
	OUTPUT,
	SAME
};

int	printError(int err)
{
	if (err == ARG)
		std::cerr << "Wrong number of arguments, use ./replace file s1 s2" << std::endl;
	else if (err == INPUT)
		std::cerr << "Input file error!" << std::endl;
	else if (err == OUTPUT)
		std::cerr << "Output file error!" << std::endl;
	else if(err == SAME)
		std::cerr << "Nothing to change :|" << std::endl;
	return (1);
}

void	replaceString(std::ifstream &inputFile, std::ofstream &outputFile, const std::string &oldStr, const std::string &newStr)
{
	size_t	pos;

	std::string line;
	while (std::getline(inputFile, line))
	{
		pos = line.find(oldStr);
		while (pos != std::string::npos)
		{
			line = line.substr(0, pos) + newStr + line.substr(pos + oldStr.length());
			pos = line.find(oldStr, pos + newStr.length());
		}
		outputFile << line << std::endl;
	}
}

int main(int argc, char **argv) {
    if (argc != 4)
        return printError(ARG);

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string inputPath = argv[1];
    std::string outputPath = inputPath + ".replace";

	if (s1 == s2)
		return printError(SAME);

    std::ifstream inputFile(inputPath);
    if (!inputFile.is_open())
        return printError(INPUT);

    std::ofstream outputFile(outputPath);
    if (!outputFile.is_open()) {
        inputFile.close();
        return printError(OUTPUT);
    }

    replaceString(inputFile, outputFile, s1, s2);

    inputFile.close();
    outputFile.close();

    return 0;
}