function press(val) {
  document.getElementById("result").value += val;
}

function clearResult() {
  document.getElementById("result").value = "";
}

function calculate() {
  let exp = document.getElementById("result").value;

  try {
    document.getElementById("result").value = eval(exp);
  } catch {
    document.getElementById("result").value = "Error";
  }
}
function backspace() {
  let input = document.getElementById("result");
  input.value = input.value.slice(0, -1);
}