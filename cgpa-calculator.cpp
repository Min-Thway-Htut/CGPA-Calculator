#include <iostream>
using namespace std;



int main()
{
    float NumberOfSubjects;
    float score_one;
    float score_two;
    float score_three;
    float score_four;
    float score_five;
    float score_six;
    float total_score;
    float average_score;
    float cgpa;
    float cgpa_percentage;

    cout << "How many subjects do you want to calculate? 3 or 4 or 5 or 6?" << endl;
    cin >> NumberOfSubjects;
    if (NumberOfSubjects == 3){
        cout << "The score of first module - " << endl;
        cin >> score_one;

        cout << "The score of second module - " << endl;
        cin >> score_two;

        cout << "The score of thire module - " << endl;
        cin >> score_three;

        total_score = (score_one + score_two + score_three);
        average_score = total_score/3;
        cgpa = average_score * 0.1;
        cgpa_percentage = cgpa * 9.5;
        cout << "Your avearge score is - " << average_score << endl;
        cout << "Your culmutative gpa is - " << cgpa << endl;
        cout << "The percentage of your cgpa is - " << cgpa_percentage << "%" << endl;


    }else if (NumberOfSubjects == 4){
         cout << "The score of first module - " << endl;
        cin >> score_one;

        cout << "The score of second module - " << endl;
        cin >> score_two;

        cout << "The score of thire module - " << endl;
        cin >> score_three;

        cout << "The score of fourth module - " << endl;
        cin >> score_four;

        total_score = score_one + score_two + score_three + score_four;
        average_score = total_score/4;
        cgpa = average_score * 0.1;
        cgpa_percentage = cgpa * 9.5;
        cout << "Your average score is - " << average_score << endl;
        cout << "Your culmutative gpa is - " << cgpa << endl;
        cout << "The percentage of your cgpa is - " << cgpa_percentage << "%" << endl;

    }else if (NumberOfSubjects == 5){
        cout << "The score of first module - " << endl;
        cin >> score_one;

        cout << "The score of second module - " << endl;
        cin >> score_two;

        cout << "The score of thire module - " << endl;
        cin >> score_three;

        cout << "The score of fourth module - " << endl;
        cin >> score_four;

        cout << "The score of fifth module - " << endl;
        cin >> score_five;

        total_score = (score_one + score_two + score_three + score_four + score_five);
        average_score = total_score/5;
        cgpa = average_score * 0.1;
        cgpa_percentage = cgpa * 9.5;

        cout << "Your average score is - " << average_score << endl;
        cout << "Your culmutative gpa is - " << cgpa << endl;
        cout << "The percentage of your cgpa is - " << cgpa_percentage << "%" << endl;


    } else if ( NumberOfSubjects == 6){
         cout << "The score of first module - " << endl;
        cin >> score_one;

        cout << "The score of second module - " << endl;
        cin >> score_two;

        cout << "The score of thire module - " << endl;
        cin >> score_three;

        cout << "The score of fourth module - " << endl;
        cin >> score_four;

        cout << "The score of fifth module - " << endl;
        cin >> score_five;
        
        cout << "The score of sixth module - " << endl;
        cin >> score_six;

        total_score = score_one + score_two + score_three + score_four + score_five + score_six;
        average_score = total_score/6;
        cgpa = average_score * 0.1;
        cgpa_percentage = cgpa * 9.5;

        cout << "Your average score is - " << average_score<< endl;
        cout << "Your culmutative gpa is - " << cgpa << endl;
        cout << "The percentage of your cgpa is - " << cgpa_percentage << "%" << endl;
    }else{
        cout << "Sorry, your input should be between 3 and 6." << endl;
    }





    return 0;
}