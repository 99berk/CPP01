#include <iostream>
#include <fstream>

std::string read_file(std::string file_name)
{
    std::ifstream file_to_copy;
    std::string res;
    std::string line;

    file_to_copy.open(file_name);
    if (file_to_copy.fail())
    {
        std::cerr << "File could not be opened." << std::endl;
        res.clear();
        return res;
    }
    
    if (std::getline(file_to_copy, line))
        res.append(line);

    while (std::getline(file_to_copy, line))
    {
        res.append("\n");
        res.append(line);
    }
    return res;
}

int replace_words(char **argv, std::string source_file)
{
    std::ofstream output_file;
    int i;
    int check;

    output_file.open((std::string(argv[1]) + ".replace").c_str());
    if (output_file.fail())
        return std::cerr << "File could not be opened" << std::endl, 0;
    i = -1;
    while (++i < (int)source_file.length())
    {
        check = source_file.find(argv[2], i);
        if (i != -1 && i == check)
        {
            output_file << argv[3];
            i += (int)std::string(argv[2]).length() - 1;
        }
        else
            output_file << source_file[i];
    }
    output_file.close();
    return 1;
}

int main(int argc, char **argv)
{
    std::string copied_file;

    if (argc != 4)
        return std::cerr << "Invalid argumant" << std::endl, 1;
    copied_file = read_file(argv[1]);
    if (copied_file.empty())
        return 1;
    if (!replace_words(argv, copied_file))
        return 1;
    return 0;
}