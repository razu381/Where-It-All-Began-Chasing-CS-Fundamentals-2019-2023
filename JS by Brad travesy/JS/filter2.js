const companies = [
    { name: "ABC Company", type: "Retail", startDate: "2021-01-01", endDate: "2022-12-31" },
{ name: "XYZ Corporation", type: "Finance", startDate: "2020-05-15", endDate: "2023-07-31" },
{ name: "123 Furniture", type: "Furniture", startDate: "2019-10-01", endDate: "2021-06-30" },
{ name: "Global Finance", type: "Finance", startDate: "2022-03-10", endDate: "2024-02-28" },
{ name: "Best Retailers", type: "Retail", startDate: "2020-07-01", endDate: "2023-04-30" },
{ name: "Tech Solutions", type: "Technology", startDate: "2022-08-15", endDate: "2024-11-30" },
{ name: "Fashion World", type: "Retail", startDate: "2021-03-01", endDate: "2023-08-31" },
{ name: "Investment Group", type: "Finance", startDate: "2020-09-10", endDate: "2022-05-31" },
{ name: "Home Decorators", type: "Furniture", startDate: "2019-06-01", endDate: "2021-12-31" },
{ name: "Digital Solutions", type: "Technology", startDate: "2022-01-01", endDate: "2023-12-31" }

]

let techComp = companies.filter(company => company.type === "Finance")

techComp.forEach(item => console.log(item.name));