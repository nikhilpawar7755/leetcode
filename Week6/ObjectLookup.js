// Setup
function phoneticLookup(val) {
    var result = "";
  
    let lookup = {
      "alpha" : "Adams",
      "bravo" : "Boston",
      "charlie" : "Chicago",
      "delta" : "Denver",
      "echo" : "Easy",
      "foxtrot" : "Frank"
    }
  
    return lookup[val] // Only change code above this line
  }
  
  phoneticLookup("charlie");
  