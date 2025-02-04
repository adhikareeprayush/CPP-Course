#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // Remove Linux executables (files with no extension or .out files)
    std::cout << "Cleaning up Linux executables...\n";
    system("find . -type f -executable -not -name \"*.*\" -delete");
    system("find . -type f -name \"*.out\" -delete");

    // Add all files (respects .gitignore)
    std::cout << "Adding files to Git...\n";
    system("git add .");

    // Get commit message from the user
    std::string commitMessage;
    std::cout << "Enter commit message: ";
    std::getline(std::cin, commitMessage);

    // Commit changes
    std::string commitCmd = "git commit -m \"" + commitMessage + "\"";
    int commitStatus = system(commitCmd.c_str());

    if (commitStatus != 0) {
        std::cerr << "Git commit failed. Check your changes.\n";
        return 1;
    }

    // Push changes
    std::cout << "Pushing to repository...\n";
    int pushStatus = system("git push");

    if (pushStatus != 0) {
        std::cerr << "Git push failed. Check your remote settings.\n";
        return 1;
    }

    std::cout << "Push completed successfully!\n";
    return 0;
}
