## Array Classes 

Comparison of the different n-dimensional array types supported by each library


## Fundamental n-dim array classes

Key relevant characteristics:
* The maximum dimensionality of arrays
* Static versus dynamic shape of arrays
* The handling of sparse arrays

When multiple variations exist, only one array form is depicted (for example 
ignoring variations between static / dynamic arrays)

| Feature subset            | armadillo   | eigen              | numpy          |
|---------------------------|-------------|--------------------|----------------|
| dense column vector class | Col<type>   | VectorXd           | numpy.array()  |
| dense row vector class    | Row<type>   | MatrixXd           | numpy.array()  |
| dense matrix class        | Mat<type>   | MatrixXd           | numpy.matrix() |
| sparse matrix class       | SpMat<type> | SparseMatrix       | scipy          |
| dense cube class          | Cube<type>  | Tensor<type, 3>    | numpy.array()  |
| dense tensor class        |             | Tensor<type, Rank> | numpy.array()  |


### Notes

* VectorXi, VectorXf, VectorXi are eigen aliases for one-dimensional matrices of the corresponding type (integer, float, double). The generic syntax is Matrix<type, Dynamic, Dynamic>
* Armadillo features the _field_ class to store arbitrary objects in matrix-like or cube-like layout
* The numpy (2D) matrix class is [deprecated](https://docs.scipy.org/doc/numpy/reference/generated/numpy.matrix.html) in favor of regular n-dim arrays
* Numpy does not support sparse arrays. 2D sparse arrays are provided instead by [Scipy.sparse](https://docs.scipy.org/doc/scipy/reference/sparse.html)
* Tensors are part of [Eigen/unsupported](https://bitbucket.org/eigen/eigen/src/default/unsupported/Eigen/CXX11/src/Tensor/README.md)

## Various auxiliary functions

| Feature subset                                           | armadillo  | eigen         | numpy |
|----------------------------------------------------------|------------|---------------|-------|
| change size without keeping elements (fast)              | .set_size  |               |       |
| change size while keeping elements                       | .reshape   |               |       |
| change size while keeping elements and preserving layout | .resize    | .resize       |       |
| change size to be same as given object                   | .copy_size |               |       |
| change size to empty                                     | .reset     |               |       |
| row size                                                 |            | .rows()       |       |
| col size                                                 |            | .cols()       |       |
| find general dimension                                   |            | .dimension(N) |       |

## Element Initialization / Array Generation

| Feature subset                           | armadillo            | eigen                           | numpy |
|------------------------------------------|----------------------|---------------------------------|-------|
| initializer list                         | vec v = { 1, 2, 3 }; |                                 |       |
| return identity matrix                   | eye                  |                                 |       |
| Set the elements of an object to zero    | .zeros()             | .setZero()                      |       |
| Set all the elements of an object to one | .ones()              | .setOnes()                      |       |
| Create unity matrix                      | .eye()               | .setIdentity()                  |       |
| Fill with specific value                 | .fill(value)         | .setConstant(rows, cols, value) |       |
| Fill with lambda function                | .imbue(lambda)       |                                 |       |
| Fill with random values                  | .randu(), .randn()   |                                 |       |
| Replace small values with zero           | .clean(threshold)    |                                 |       |
| Fill with lambda function                | .imbue(lambda)       |                                 |       |

## Element-wise Array Operators (for arrays of identical shapes)


| Feature subset   | armadillo | eigen | numpy |
|------------------|-----------|-------|-------|
| addition         | +         | +     | +     |
| subtraction      | -         | -     | -     |
| scalar multiply  | *         | *     | *     |
| elementwise div  | /         |       | /     |
| Schur product(1) | %         |       | *     |
| modulo div       |           |       | %     |
| equality         | ==        |       | ==    |
| inequality       | !=        |       | !=    |
| greater or equal | >=        |       | >=    |
| less or equal    | <=        |       | <=    |
| greater          | >         |       | >     |
| less             | <         |       | <     |

* (1) Elementwise multiplication


## Element Access and Views

| Feature subset       | armadillo             | eigen | numpy |
|----------------------|-----------------------|-------|-------|
| Access               | .at(i, j), (i,j), [i] |       |       |
| Contiguous views     | .col, .cols, .submat  |       |       |
| Non-Contiguous views | .elem, .cols, .submat |       |       |
| Read/write diagonal  | .diag()               |       |       |
| Raw Pointer to elem  | .memptr()             |       |       |
| Raw Pointer to col   | .colptr()             |       |       |

### Notes
* Some forms of access imply bounds checking while others not. Check the documentation