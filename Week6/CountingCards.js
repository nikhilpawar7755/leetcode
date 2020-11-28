var count = 0;

function cc(card) {
  // Only change code below this line
  if ( card == 2 || card == 3 || card == 4 || card == 5 || card == 6 ){
    count = count + 1;
  } else if (card == 10 || card == 'J' || card == 'Q' || card == 'K' || card == 'A'){
    count = count - 1;
  }
  let str;
 if (count > 0){
   str = 'Bet';
 }else if (count <= 0){
   str = 'Hold';
 }
 str = `${count} ${str}`
  return str;
  // Only change code above this line
}

cc(2); cc(3); cc(7); cc('K'); cc('A');
