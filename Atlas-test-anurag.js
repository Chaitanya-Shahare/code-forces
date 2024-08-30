function fun(arr, edges) {
  let maxAmount = 0;
  const n = arr.length;

  // Function to check if the subset is valid (no cold war pairs)
  function isValidSubset(subset) {
    for (let [a, b] of edges) {
      if (subset.includes(a) && subset.includes(b)) {
        return false;
      }
    }
    return true;
  }

  // Iterate through all possible subsets (2^n possibilities)
  for (let i = 0; i < 1 << n; i++) {
    let currentSubset = [];
    let currentMoney = 0;

    for (let j = 0; j < n; j++) {
      if (i & (1 << j)) {
        currentSubset.push(j + 1);
        currentMoney += arr[j];
      }
    }

    if (isValidSubset(currentSubset)) {
      maxAmount = Math.max(maxAmount, currentMoney);
    }
  }

  return maxAmount.toString();
}

// Reading input from stdin
process.stdin.on("data", function (input_) {
  input_ = input_.toString().replace(/\n$/, "").split("\n");
  let idx_ = 0;

  let arr = input_[idx_++]
    .trim()
    .split(" ")
    .map(function (el) {
      return parseInt(el, 10);
    });

  let E = parseInt(input_[idx_++].trim(), 10);
  let edges = [];

  for (let i_edges = 0; i_edges < E; i_edges++) {
    edges.push(
      input_[idx_++]
        .trim()
        .split(" ")
        .map(function (el) {
          return parseInt(el, 10);
        })
    );
  }

  let out_ = fun(arr, edges);
  process.stdout.write(out_);
  process.exit();
});
