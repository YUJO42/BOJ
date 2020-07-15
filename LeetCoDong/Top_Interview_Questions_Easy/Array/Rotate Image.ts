/**
 Do not return anything, modify matrix in-place instead.
 */
/**
 Do not return anything, modify matrix in-place instead.
 */
function rotate(matrix: number[][]): void {
  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < i + 1; j++) {
      let temp = matrix[i][j];
      matrix[i][j] = matrix[j][i];
      matrix[j][i] = temp;
    }
  }
  for (let i = 0; i < matrix.length; i++) {
    for (let j = 0; j < Math.floor(matrix.length / 2); j++) {
      let temp = matrix[i][j];
      matrix[i][j] = matrix[i][matrix[i].length - j - 1];
      matrix[i][matrix[i].length - j - 1] = temp;
    }
  }
}

// test code

console.log(
  rotate([
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9],
  ])
);

console.log(
  rotate([
    [5, 1, 9, 11],
    [2, 4, 8, 10],
    [13, 3, 6, 7],
    [15, 14, 12, 16],
  ])
);


// test code

console.log(rotate([
	[1,2,3],
	[4,5,6],
	[7,8,9]
]))

console.log(rotate([
	[ 5, 1, 9,11],
	[ 2, 4, 8,10],
	[13, 3, 6, 7],
	[15,14,12,16]
]))
