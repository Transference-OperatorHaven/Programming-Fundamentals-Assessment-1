#include <iostream>
#include <vector>

using namespace std;

struct Assessment
{
    vector<int> grades;
    vector<double> gradePercentage;
    vector<double> finalGrade;
};

Assessment* pAssessmentPointer1;
Assessment* pAssessmentPointer2;
int grade;
bool cinFail = true;
int finalizedGrade;

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
    cout << "\n-=-=-=-=-Assessment 1-=-=-=-=-\n\n";
    cout << "\nplease provide your grade for component 1: ";
    while (cinFail)// error checker
    {
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin || grade > 100 || grade < 0)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    }
    (pAssessmentPointer1)->grades.push_back(grade);

    cout << "\nplease provide your grade for component 2: ";
    cinFail = true;
    while (cinFail)// error checker
    {
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin || grade > 100 || grade < 0)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    }
    (pAssessmentPointer1)->grades.push_back(grade);

    for (int i = 0; i < (pAssessmentPointer1)->grades.size(); i++)
    {
        (pAssessmentPointer1->finalGrade).push_back((pAssessmentPointer1)->grades[i] * (pAssessmentPointer1)->gradePercentage[i]);
    }
    for (int i = 0; i < (pAssessmentPointer1)->finalGrade.size(); i++)
    {
        finalizedGrade += pAssessmentPointer1->finalGrade[i];
    }

    cout << "\n\nYour final grade for assessment 1 is: " << finalizedGrade << "\n\n";
    system("PAUSE");

    finalizedGrade = 0;
    pAssessmentPointer2 = new Assessment;
    (pAssessmentPointer2)->gradePercentage.push_back(0.6);
    (pAssessmentPointer2)->gradePercentage.push_back(0.2);
    (pAssessmentPointer2)->gradePercentage.push_back(0.2);
    cout << "\n\n-=-=-=-=-Assessment 2-=-=-=-=-\n\n";
    cout << "\nplease provide your grade for component 1: ";
    cinFail = true;
    while (cinFail)// error checker
    {
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin || grade > 100 || grade < 0)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    }
    (pAssessmentPointer2)->grades.push_back(grade);

    cout << "\nplease provide your grade for component 2: ";
    cinFail = true;
    while (cinFail)// error checker
    {
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin || grade > 100 || grade < 0)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    }
    (pAssessmentPointer2)->grades.push_back(grade);

    cout << "\nplease provide your grade for component 3: ";
    cinFail = true;
    while (cinFail)// error checker
    {
        cin >> grade;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        if (!cin || grade > 100 || grade < 0)
        {
            cin.clear(); //resets the failure bit
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "\nplease input a correct numeric values this time: ";
            continue;
        }
        else
        {
            cinFail = false;
        }
    } 
    (pAssessmentPointer2)->grades.push_back(grade);

    for (int i = 0; i < (pAssessmentPointer2)->grades.size(); i++)
    {
        (pAssessmentPointer2->finalGrade).push_back((pAssessmentPointer2)->grades[i] * (pAssessmentPointer2)->gradePercentage[i]);
    }
    for (int i = 0; i < (pAssessmentPointer2)->finalGrade.size(); i++)
    {
        finalizedGrade += pAssessmentPointer2->finalGrade[i];
    }

    cout << "Your final grade for assessment 2 is: " << finalizedGrade << "\n\n";
    system("PAUSE");
}