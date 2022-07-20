class Database {
  static id = 1;
  static instance = null;

  static get() {
    if (localStorage.getItem("db") === null) {
      localStorage.setItem("db", JSON.stringify([], undefined, 2));
    }
    if (!Database.instance) {
      Database.instance = new Database();
    }
    return Database.instance;
  }

  getTable(name) {
    const arr = JSON.parse(localStorage.getItem("db"));
    for (let i = 0; i < arr.length; i++) {
      if (arr[i].name === `${name}`) return new Table(name);
    }
  }

  createTable(name, column, values = null) {
    let arr = [];
    arr = JSON.parse(localStorage.getItem("db"));

    if (!arr.find((element) => element.name === name)) {
      arr.push({
        name: `${name}`,
        columns: ['id', ...column],
        values: [Database.id, ...values],
      });
    }
    this.save(arr);
    Database.id++;
  }

  save(arr) {
    localStorage.setItem("db", JSON.stringify(arr));
  }
}

