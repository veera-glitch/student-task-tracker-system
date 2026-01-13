#include <iostream>
#include <vector>
using namespace std;

/*
 Student Task Tracker System (STTS)
 A simple console-based C++ application
*/

struct Task {
    int id;
    string title;
    bool isCompleted;
};

vector<Task> tasks;
int taskCounter = 1;

// Function to add a new task
void addTask() {
    Task newTask;
    newTask.id = taskCounter++;

    cout << "Enter task title: ";
    cin.ignore();
    getline(cin, newTask.title);

    newTask.isCompleted = false;
    tasks.push_back(newTask);

    cout << "Task added successfully!\n";
}

// Function to view all tasks
void viewTasks() {
    if (tasks.empty()) {
        cout << "No tasks available.\n";
        return;
    }

    cout << "\n--- Task List ---\n";
    for (int i = 0; i < tasks.size(); i++) {
        cout << "ID: " << tasks[i].id
             << " | Title: " << tasks[i].title
             << " | Status: " 
             << (tasks[i].isCompleted ? "Completed" : "Pending")
             << endl;
    }
}

// Function to mark a task as completed
void completeTask() {
    int id;
    cout << "Enter task ID to mark as completed: ";
    cin >> id;

    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].id == id) {
            tasks[i].isCompleted = true;
            cout << "Task marked as completed!\n";
            return;
        }
    }

    cout << "Task not found.\n";
}

// Function to delete a task
void deleteTask() {
    int id;
    cout << "Enter task ID to delete: ";
    cin >> id;

    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].id == id) {
            tasks.erase(tasks.begin() + i);
            cout << "Task deleted successfully!\n";
            return;
        }
    }

    cout << "Task not found.\n";
}

int main() {
    int choice;

    do {
        cout << "\n===== Student Task Tracker System =====\n";
        cout << "1. Add Task\n";
        cout << "2. View Tasks\n";
        cout << "3. Complete Task\n";
        cout << "4. Delete Task\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addTask();
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                completeTask();
                break;
            case 4:
                deleteTask();
                break;
            case 5:
                cout << "Exiting system...\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 5);

    return 0;
}