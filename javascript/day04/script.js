let temp = Database.get();
temp.createTable("user", ["username", "password"], ["Nane", "asd"]);
temp.createTable("admin", ["username", "password", 'age'], ["Gagik", "xyz", 25]);

console.log(temp.getTable("admin"));
console.log(temp.getTable("user"));
temp = new Table();
console.log(temp.get(2));