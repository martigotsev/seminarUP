#include <iostream>
using namespace std;
const int cols = 3;
void fillMatrix(double matrix[][cols], int rows)
{
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cin >> matrix[i][j];
    }
}
}
void printMatrix(double matrix[][cols], int rows)
{
for (int i = 0; i < rows; i++)
{
    for (int j = 0; j < cols; j++)
    {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
}
int fillArray(int *array, int size)
{
for (int i = 0; i < size; i++)
    cin >> array[i];
}
int printArray(int *array, int size)
{
for (int i = 0; i < size; i++)
    cout << array[i] << " ";
}
int timeToExams(int *arrayDayTime, int day)
{
int timeToExams = 0;
for (int i = 0; i < day; i++)
{
    timeToExams += arrayDayTime[i];
}
return timeToExams;
}
int timeForTasks(double matrixTaskCount[][cols], int rows)
{
int timeForTask = 0;
for (int i = 0; i < rows; i++)
{
    timeForTask += matrixTaskCount[i][1];
}
return timeForTask;
}
void sortMatrixPoint(double matrixTaskCount[][cols], int rows)
{
if (rows == 0)
    return;
double maxPoint = (matrixTaskCount[0][2] / matrixTaskCount[0][1]);
for (int i = 1; i < rows; i++)
    if (maxPoint < matrixTaskCount[i][2] / matrixTaskCount[i][1])
    {
        maxPoint = matrixTaskCount[i][2] / matrixTaskCount[i][1];
        for (int j = 0; j < cols; j++)
        {
            int number = matrixTaskCount[0][j];
            matrixTaskCount[0][j] = matrixTaskCount[i][j];
            matrixTaskCount[i][j] = number;
        }
    }
return sortMatrixPoint(matrixTaskCount + 1, rows - 1);
}

void minuteToHours(int &minutes, int &hours)
{
hours = minutes / 60;
minutes -= hours * 60;
}
double finalPoint = 0;
void sum(double matrixTaskCount[][cols],int rows)
{
    for(int i=rows-1;i>=0;i--)
    {
        cout<<matrixTaskCount[i][1]<<endl;
        int p=0;
        while(p!=i)
        {   int sum1=0;
            for(int z=0;z<p;z++)
            {   sum1+=matrixTaskCount[z][1];
                cout<<sum1<<endl;;}
            p++;
        }
    }

}
void tasks(double matrixTaskCount[][cols], int rows,int rowsCopy, double yourtime)
{
if(yourtime>matrixTaskCount[0][1])
cout<<matrixTaskCount[0][2];

}

int main()
{
int taskCount;
do
{
    cout << "taskCounter=";
    cin >> taskCount;
} while (taskCount <= 0);
double matrixTaskCount[taskCount][cols];
fillMatrix(matrixTaskCount, taskCount);
printMatrix(matrixTaskCount, taskCount);
sortMatrixPoint(matrixTaskCount, taskCount);
printMatrix(matrixTaskCount, taskCount);
int day;
do
{
    cout << "day=";
    cin >> day;
} while (day <= 0);
int arrayDayTime[day];
fillArray(arrayDayTime, day);
printArray(arrayDayTime, day);
int yourTime = timeToExams(arrayDayTime, day);
cout<<yourTime;
double timeForTask = timeForTasks(matrixTaskCount, taskCount);
if (yourTime >= timeForTask)
{
    cout << "tasks: ";
    for (int i = 0; i < taskCount; i++)
        cout << matrixTaskCount[i][0] << " ";
    int hours = 0;
    int minutes = yourTime - timeForTask;
    minuteToHours(minutes, hours);
    cout << "\nTime remaining:" << hours << ":";
    if (minutes < 10)
        cout << "0";
    cout << minutes;
}
cout << endl;
tasks(matrixTaskCount, 0,taskCount, yourTime);
sum(matrixTaskCount,taskCount);

}