// const companies = [
//     { name: "ABC Company", type: "Retail", startDate: "2021_01_01", endDate: "2022_12_31" },
// { name: "XYZ Corporation", type: "Finance", startDate: "2020_05_15", endDate: "2023_07_31" },
// { name: "123 Furniture", type: "Furniture", startDate: "2019_10_01", endDate: "2021_06_30" },
// { name: "Global Finance", type: "Finance", startDate: "2022_03_10", endDate: "2024_02_28" },
// { name: "Best Retailers", type: "Retail", startDate: "2020_07_01", endDate: "2023_04_30" },
// { name: "Tech Solutions", type: "Technology", startDate: "2022_08_15", endDate: "2024_11_30" },
// { name: "Fashion World", type: "Retail", startDate: "2021_03_01", endDate: "2023_08_31" },
// { name: "Investment Group", type: "Finance", startDate: "2020_09_10", endDate: "2022_05_31" },
// { name: "Home Decorators", type: "Furniture", startDate: "2019_06_01", endDate: "2021_12_31" },
// { name: "Digital Solutions", type: "Technology", startDate: "2022_01_01", endDate: "2023_12_31" }

// ]


// let techComp = companies.map((company) => {
//     return {
//         name: company.name,
//         type: company.type
//     }
// })

// console.log(techComp)



//ARRAY REDUCE
let cart = [
    {product_1: "Cap", price: 500},
    {product_2: "nose tie", price: 005},
    {product_3: "head wash", price: 550},
    {product_4: "nuasea tablet", price: 210},
    {product_6: "medicine", price: 160},
    {product_7: "pancake", price: 760},
]

//let total = cart.reduce((prev,curr) => prev+curr.price,0);

let total = cart.reduce((prev,current) => {
    return prev + current.price
},0)
console.log(total)