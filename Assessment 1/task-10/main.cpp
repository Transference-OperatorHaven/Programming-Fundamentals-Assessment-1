#include <iostream>
#include <vector>

using namespace std;

struct Assessment
{
    vector<int> grades;
    vector<double> gradePercentage;
};

Assessment* pAssessmentPointer1;
Assessment* pAssessmentPointer2;

void main()
{
    //Add code to build a grade calculator for the module. This should:
    //
    // - Prompt the user for input, for the grade of each component of assessment 1
    // - Prompt the user for input, for the grade of each component of assessment 2
    // - Provide a detailed breakdown of:
    //      - List the overall percentage of each assessment
    //      - Their overall grade after percentage weighting
    //      - Output which CRG band they fit into, for each criterion

    //Invalid input should be detected and handled after prompting. For example,
    //if the input grade "-1" is given, the user should be reprompted to enter the
    //grade again.

    //Furthermore, please use structs and arrays where appropriate to model
    //the different assessment components.
    //..
    pAssessmentPointer1 = new Assessment;
    (pAssessmentPointer1)->gradePercentage.push_back(0.7);
    (pAssessmentPointer1)->gradePercentage.push_back(0.3);
    cout << (pAssessmentPointer1)->gradePercentage[0] << "\n" << (pAssessmentPointer1)->gradePercentage[1];


}