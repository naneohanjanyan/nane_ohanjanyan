class Table {
    columns;
    values;
    constructor(name) {
      this.name = name;
    }
    get(id) {
      let arr = JSON.parse(localStorage.getItem('db'));
      return arr.find(el => el.values[0] === id);
    }
  }