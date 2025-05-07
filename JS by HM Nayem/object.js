 let students = [
    student1 = {
        fName: "Razu",
        Roll: 03,
        GPA: 4.50
    },
    student2 = {
        fName: "Rahi",
        Roll: 05,
        GPA: 5.00
    },
    student3 = {
        fName: "Ratna",
        Roll: 55,
        GPA: 5.00
    }

    
];

for(let i in students){
    console.log("Name = " + students[i].fName + "  Roll = " + students[i].Roll + "  GPA = " + students[i].GPA);
}