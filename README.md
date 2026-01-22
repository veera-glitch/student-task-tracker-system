

 
 Eke Vera Esther 
Software Engineering 
24/14978
Assignment 2.
README.md
#Student Task Tracker System (STTS)
This is a simple C++ console-based application that helps students:
-Add tasks
-View tasks
-Mark tasks as completed 
-Delete tasks
Author:Eke vera esther 24/14978
click the link below to view the code oof this project:
 [ view main.cpp](https://github.com/veera-glitch/student-task-tracker-system/blob/main/main.cpp)
 [view ful project] (https://github.com/veera-glitch/student-task-tracker-system)

STUDENT TASK TRACKER SYSTEM (STTS)

(A C++ Console-Based Application)



1. Requirement Analysis

Problem Description

Many students find it difficult to keep track of their assignments and personal study tasks. This often leads to forgotten tasks and poor time management.

Proposed Solution

The Student Task Tracker System (STTS) is a simple C++ console-based program that helps students manage their tasks by allowing them to add, view, complete, and delete tasks.

Functional Requirements

The system should allow the user to add a task

The system should display all saved tasks

The system should allow a task to be marked as completed

The system should allow a task to be deleted


Non-Functional Requirements

The system should be easy to use

The system should run fast

The system should work on any computer with a C++ compiler



2. System Design

System Architecture

The system is a single-user, console-based C++ application. It uses simple functions and data structures to perform its operations.

Data Structure Used

struct Task {
    int id;
    string title;
    bool isCompleted;
};

System Modules

Module Name and Function

1.addTask - Adds a new task
2.viewTasks- Displays all tasks
3.completeTask - Marks a task as completed.
4.deleteTask- Deletes a task



3. Implementation

The Student Task Tracker System was implemented using the C++ programming language.
The program uses basic C++ features such as:

Functions

Structures

Vectors

Conditional statements

Loops

The system runs in a console environment and does not require any graphical interface.


4. Testing

The system was tested manually to ensure that all functions work correctly.

Test Cases

Test	  Input	Expected Result

1. Test- Add Task Input -Task Expected Result- Task is added.
2. Test- View Tasks Expected Result-Tasks are displayed.
3. Test- Complete Task Input-TaskID Expected Result- Task status changes.
4. Test- Delete Task  Input-Task ID Expected Result- Task is removed.





5. Deployment

The system was deployed by compiling and running the C++ source file using a standard C++ compiler such as Dev-C++, Code::Blocks, or g++.




6. Maintenance

The system can be improved in the future by:

Adding file storage

Including task deadlines

Supporting multiple users





Conclusion

The Student Task Tracker System (STTS) successfully helps students manage their academic tasks. The system is simple, easy to use, and meets all the stated requirements.
