var sqlite3 = require('sqlite3').verbose();
var db = new sqlite3.Database('./todos.db');

module.exports.db = db;