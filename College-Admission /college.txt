# College-Admission
As the governing body of college admissions, we want a system that can match students to colleges based on their marks.

Assume we are given this list of colleges, their capacities, and minimum cut off marks respectively.

| Name | Maximum capacity | Cut off marks |
| :---         |     :---:      |          ---: |
| IIT          | 2              | 180           |
| NIT          | 1              | 150           |

Fetch the list of students, marks and college preference (only one college) as dynamic input from the user.

Assign students to colleges based on their total marks, i.e.: a student with higher total marks should get more preference in college selection compared to another student with lesser marks. Also, a student can be assigned to a college only if their total marks is equal to or greater than the college's defined cut off marks.

NOTE: The input (college details) can be hard coded, and need not be read from the console. However, there should be a clear separation between such hard coding and actual application logic so that the hard coding can be easily replaced by dynamic user/file/database input without requiring any change in the core application logic.

# Output:<br>
Enter number of Students: 8<br>
Enter student name: Ajay<br>
Enter marks: 170<br>
Enter student college preference: NIT<br>
Enter student name: Rakesh<br>
Enter marks: 180<br>
Enter student college preference: NIT<br>
Enter student name: Praveen<br>
Enter marks: 183<br>
Enter student college preference: IIT<br>
Enter student name: Ram<br>
Enter marks: 165<br>
Enter student college preference: IIT<br>
Enter student name: Rani<br>
Enter marks: 195<br>
Enter student college preference: IIT<br>
Enter student name: Prem<br>
Enter marks: 199<br>
Enter student college preference: IIT<br>
Enter student name: Rohit<br>
Enter marks: 149<br>
Enter student college preference: NIT<br>
Enter student name: Surya<br>
Enter marks: 130<br>
Enter student college preference: IIT<br>

Ajay: NIT<br>
Rakesh: -<br>
Praveen: IIT<br>
Ram: -<br>
Rani: IIT<br>
Prem: -<br>
Rohit: -<br>
Surya: -<br>
