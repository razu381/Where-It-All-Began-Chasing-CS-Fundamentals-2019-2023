let library = [
    {
        title: "Moddhanno",
        author: "Humayun ahmed",
        status: {
            own: true,
            reading: false,
            read: false,
        }
    },
    {
        title: "Shesher kabita",
        author: "Rabindranath Tagor",
        status: {
            own: true,
            reading: false,
            read: false,
        }
    },
    {
        title: "Ogni Purush",
        author: "Kazi anwar",
        status: {
            own: true,
            reading: false,
            read: false,
        }
    }
]

library[0].status.read = true;
library[1].status.read = true;
library[2].status.read = true;

let {title: firstBook} = library[0];

let json_str = JSON.stringify(library)

console.log("Hello Razu")