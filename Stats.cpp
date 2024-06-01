#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

// Function to simulate fetching repository data
vector<pair<string, string>> fetchRepositoryData() {
    return {
        {"City-Dictionary", "Python"},
        {"GPA-Calculator", "Java"},
        {"Linkedin-Finder", "C++"},
        {"Major-Courses-for-Applied-Math", "C++"},
        {"Potential-Diseases", "C++"},
        {"Recipes-for-Dessert", "C++"}
    };
}

// Function to count the frequency of each language
map<string, int> countLanguages(const vector<pair<string, string>>& repos) {
    map<string, int> languageCount;
    for (const auto& repo : repos) {
        languageCount[repo.second]++;
    }
    return languageCount;
}

// Function to display the language usage
void displayLanguageUsage(const map<string, int>& languageCount) {
    cout << "Most used languages in your GitHub repositories:" << endl;
    for (const auto& entry : languageCount) {
        cout << entry.first << ": " << entry.second << " repository(ies)" << endl;
    }
}

int main() {
    // Fetch the repository data
    vector<pair<string, string>> repos = fetchRepositoryData();
    
    // Count the frequency of each language
    map<string, int> languageCount = countLanguages(repos);
    
    // Display the language usage
    displayLanguageUsage(languageCount);

    return 0;
}
