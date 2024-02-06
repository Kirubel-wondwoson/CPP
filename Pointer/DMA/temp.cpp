#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
int main()
{
    int numStud, numSubj, count1 = 0, count2 = 0, count3 = 0;
    cout << "Enter number of students : ";
    cin >> numStud;
    cout << "Enter number of courses : ";
    cin >> numSubj;
    if (numStud < 0 || numSubj < 0)
    {
        do
        {
            if (numStud < 0)
            {
                cout << "Please enter number of students (don't use negative number): ";
                cin >> numStud;
            }
            if (numSubj < 0)
            {
                cout << "Please enter number of courses (don't use negative number): ";
                cin >> numSubj;
            }
            count1++;
            if (count1 = 2)
            {
                break;
            }
        } while (count1 < 3);
    }
    string *studId = new string[numStud], *subjName = new string[numSubj], **gradeLetter = new string *[numStud] , searchID ;
    float **studMark = new float *[numStud], **gradeLetterPoint = new float *[numStud], *average = new float[numStud], *cgpa = new float[numStud], sumMark[numStud], sumGpa[numStud], totalCrHr = 0;
    int *crHr = new int[numSubj];
    char menu;
    for (int i = 0; i < numStud; ++i)
    {
        sumMark[i] = 0;
        sumGpa[i] = 0;
        // creating each row dynamically
        studMark[i] = new float[numSubj];
        gradeLetterPoint[i] = new float[numSubj];
        gradeLetter[i] = new string[numSubj];
    }
    // prompt the user a course name and credit hour
    cout << "\n";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "Enter the name of course " << i + 1 << " (use only 4 character) : ";
        cin >> subjName[i];
        cout << "Credit hour of " << subjName[i] << " is : ";
        cin >> crHr[i];
        if (subjName[i].length() != 4 || crHr[i] < 0)
        {
            do
            {
                if (subjName[i].length() != 4)
                {
                    cout << "please use 4 character : ";
                    cin >> subjName[i];
                    cout << "credit hour of " << subjName[i] << " is : ";
                    cin >> crHr[i];
                }
                if (crHr[i] < 0)
                {
                    cout << "Invalid credit hour.please use a positive number : ";
                    cin >> crHr[i];
                }
                count2++;
                if (count2 = 2)
                {
                    break;
                }
            } while (count2 < 3);
        }
        for (int j = 0; j != i; ++j)
        {
            if (subjName[i] == subjName[j])
            {
                do
                {
                    cout << "The course is already in data base.Please enter the name of the course " << i + 1 << " : ";
                    cin >> subjName[i];
                    cout << "Credit hour of " << subjName[i] << " is : ";
                    cin >> crHr[i];
                    if (count3 = 2)
                    {
                        break;
                    }
                    count3++;
                } while (count3 < 3);
            }
        }
    }
    // prompt the user an ID and Mark of each subject
    // ID
    cout << "\n";
    for (int i = 0; i < numStud; ++i)
    {
        cout << "Enter ID of student " << i + 1 << " like (ETS0000/00): ";
        cin >> studId[i];
        count1 = 0;
        if ((studId[i]).length() != 10)
        {
            do
            {
                cout << "Invalid ID.Please enter ID of student " << i + 1 << " like (ETS0000/00): ";
                cin >> studId[i];
                count1++;
                if (studId[i].length() == 10 || (count1 == 2))
                {
                    break;
                }
            } while (count1 < 3);
        }
        for (int j = 0; j != i; ++j)
        {
            if (studId[j] == studId[i])
            {
                count2 = 0;
                do
                {
                    cout << "This student ID is alredy in data base." << endl;
                    cout << "Please enter ID of student " << i + 1 << " like (ETS0000/00): ";
                    cin >> studId[i];
                    count2++;
                    if ((studId[j] != studId[i]) || count2 == 2)
                    {
                        break;
                    }
                } while (count2 < 3);
            }
        }

        // MARK

        for (int j = 0; j < numSubj; ++j)
        {
            cout << "Enter " << studId[i] << " 's " << subjName[j] << " mark (use 101 for NG): ";
            cin >> studMark[i][j];
            if (studMark[i][j] < 0 || studMark[i][j] > 101)
            {
                count3 = 0;
                do
                {
                    cout << "Please enter " << studId[i] << " 's" << subjName[j] << " mark correctly (use 101 for NG): ";
                    cin >> studMark[i][j];
                    if (studMark[i][j] >= 0 && studMark[i][j] < 102)
                    {
                        break;
                    }
                    count3++;
                } while (count3 < 3);
            }
            if (studMark[i][j] == 101)
            {
                gradeLetter[i][j] = "  ";
                gradeLetterPoint[i][j] = 0;
                studMark[i][j] = 0;
            }
            else if (studMark[i][j] >= 85 && studMark[i][j] <= 100)
            {
                gradeLetter[i][j] = "A ";
                gradeLetterPoint[i][j] = 4;
            }
            else if (studMark[i][j] >= 75)
            {
                gradeLetter[i][j] = "B+";
                gradeLetterPoint[i][j] = 3.5;
            }
            else if (studMark[i][j] >= 70)
            {
                gradeLetter[i][j] = "B ";
                gradeLetterPoint[i][j] = 3;
            }
            else if (studMark[i][j] >= 60)
            {
                gradeLetter[i][j] = "C+";
                gradeLetterPoint[i][j] = 2.5;
            }
            else if (studMark[i][j] >= 50)
            {
                gradeLetter[i][j] = "C ";
                gradeLetterPoint[i][j] = 2;
            }
            else if (studMark[i][j] >= 40)
            {
                gradeLetter[i][j] = "D ";
                gradeLetterPoint[i][j] = 1.5;
            }
            else if (studMark[i][j] > 0 && studMark[i][j] < 40)
            {
                gradeLetter[i][j] = "F ";
                gradeLetterPoint[i][j] = 0;
            }
            totalCrHr += crHr[j];
            sumGpa[i] += crHr[j] * gradeLetterPoint[i][j];
            sumMark[i] += studMark[i][j];
        }
        average[i] = sumMark[i] / numSubj;
        cgpa[i] = sumGpa[i] / totalCrHr;
    }

    cout << setw(40) << "STUDENT MArk SHEET" << endl;
    // 1
    cout << "______________________";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "______________";
    }
    cout << "________________";
    cout << endl;
    // 2
    cout << "Stud.ID";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "          " << subjName[i];
    }
    cout << "          ";
    cout << "Average      CGBA";
    cout << endl;
    // 3
    cout << "                ";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "____________";
    }
    cout << endl;
    // 4
    cout << "                ";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "Mark:Grade    ";
    }
    cout << endl;
    // 5
    cout << "________________";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "________________";
    }
    cout << "________________";
    cout << endl;
    for (int i = 0; i < numStud; i++)
    {
        cout << studId[i] << "        ";
        for (int j = 0; j < numSubj; j++)
        {
            cout << studMark[i][j] << ":" << gradeLetter[i][j] << "          ";
        }
        cout << average[i] << "       " << cgpa[i];
        cout << endl;
    }
    // 6
    cout << "______________________";
    for (int i = 0; i < numSubj; i++)
    {
        cout << "______________";
    }
    cout << "________________";
    cout << endl;
    do
    {
        cout << "Enter A to search a single students status \nEnter B to see top n students\nEnter E to end the program " << endl;
        cin >> menu;
        switch (menu)
        {
        case 'A':
            cout << "Enter ID of a student : ";
            cin >> searchID;
            for (int i = 0; i < numStud; i++)
            {
                if (searchID == studId[i])
                {
                    cout << studId[i];
                    cout << setw(40) << "STUDENT MArk SHEET" << endl;
                    // 1
                    cout << "______________________";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "______________";
                    }
                    cout << "________________";
                    cout << endl;
                    // 2
                    cout << "Stud.ID";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "          " << subjName[i];
                    }
                    cout << "          ";
                    cout << "Average      CGBA";
                    cout << endl;
                    // 3
                    cout << "                ";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "____________";
                    }
                    cout << endl;
                    // 4
                    cout << "                ";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "Mark:Grade    ";
                    }
                    cout << endl;
                    // 5
                    cout << "________________";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "________________";
                    }
                    cout << "________________";
                    cout << endl;
                    cout << studId[i] << "        ";
                    for (int j = 0; j < numSubj; j++)
                    {
                        cout << studMark[i][j] << ":" << gradeLetter[i][j] << "          ";
                    }
                    cout << average[i] << "       " << cgpa[i];
                    cout << endl;
                    cout << "______________________";
                    for (int i = 0; i < numSubj; i++)
                    {
                        cout << "______________";
                    }
                    cout << "________________";
                    cout << endl;
                }
            }
        }
        
    } while (menu != 'E');
    return 0;
}
