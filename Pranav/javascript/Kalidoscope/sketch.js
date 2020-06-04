let symmetry = 10;

let angle = 360 / symmetry;
let saveButton, clearButton, mouseButton, keyboardButton;
let slider;
let r, g, b;

function setup() {
  createCanvas(900, 890);
  angleMode(DEGREES);
  background(0);

  line(width / 2, width / 2);

  saveButton = createButton('save');
  saveButton.mousePressed(saveFile);

  clearButton = createButton('clear');
  clearButton.mousePressed(clearScreen);

}

function saveFile() {
  save('design.jpg');
}

function clearScreen() {
  background(0);
}


function mousePressed(){
r = random(0,255);
g = random(0,255);
b = random(0,255);
}
function draw() {
  translate(width / 2, height / 2);
  //rotate ()
  if (mouseX > 0 && mouseX < width && mouseY > 0 && mouseY < height) {
    let mx = mouseX - width / 2;
    let my = mouseY - height / 2;
    let pmx = pmouseX - width / 2;
    let pmy = pmouseY - height / 2;



    if (mouseIsPressed) {
      for (let i = 0; i < symmetry; i++) {
        rotate(angle);
        let sw = 4;
        stroke(r,g,b);
        //stroke(random(0, 255), random(0, 255), random(0, 255))
        strokeWeight(sw);
        line(mx, my, pmx, pmy);
        push();
        scale(1, -1);
        line(mx, my, pmx, pmy);
        pop();

      }
    }
  }
}