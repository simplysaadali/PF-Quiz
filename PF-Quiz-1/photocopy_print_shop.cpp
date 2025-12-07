/*
Write a program for a photocopy and print shop. Read N print jobs and number of pages per job.
Charge 5 per page. If pages > 80 for a job, apply 10% discount to that job’s total.
Print the final amount for each job and the total sum. Use variables, loops, IO and if/else.
Push your code to GitHub and paste the repository URL as answer.  
*/

#include <iostream>
using namespace std;

int main(){
    int printJobs, jobCost;
    float totalAmount = 0;

    cout << "Please enter number of print jobs you have done: ";
    cin>>printJobs;

    for(int i=1; i<=printJobs; i++){
        int pagesToPrint;

        cout << "Please enter pages printed for customer " << i << ": ";
        cin >> pagesToPrint;

        // as it is mentioned that cost of one page is 5.
        jobCost = pagesToPrint * 5;

        // applying 10% discount as mentioned if pages are more than 80.
        if(pagesToPrint > 80){
            jobCost = jobCost - (jobCost * 10/100);
        }

        cout << "Amount for job " << i << " is: " << jobCost << endl;

        totalAmount = totalAmount + jobCost;
    }

    cout << endl << "The total earnings done from all the customers are: " << totalAmount;
    return 0;
}