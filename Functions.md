# Comparison of available functions operating on the array classes

TODO

## Univariate Functions

| Univariate Functions of Arrays          | armadillo 9.600            | eigen 3.3.7 | numpy 1.16.4 |
| --------------------------------------- | -------------------------- | ----------- | ------------ |
| obtain magnitude of each element        | abs(A)                     |             |              |
| accumulate (sum) all elements           | accu(A)                    |             |              |
| check whether all elements are non-zero | all(A)                     |             |              |
| check whether any element is non-zero   | any(A)                     |             |              |
| phase angle of each element             | arg(A)                     |             |              |
| convert 1x1 matrix to pure scalar       | as_scalar()                |             |              |
| obtain clamped elements                 | clamp(A)                   |             |              |
| condition number of matrix              | cond(A)                    |             |              |
| obtain complex conjugate                | conj(A)                    |             |              |
| convert between matrix types            | conv_to< type >            |             |              |
| cumulative sum                          | cumsum(A)                  |             |              |
| cumulative product                      | cumprod(A)                 |             |              |
| determinant                             | det(A)                     |             |              |
| generate diagonal matrix                | diagmat(A)                 |             |              |
| extract specified diagonal              | diagvec(A, k)              |             |              |
| differences between adjacent elements   | diff(A)                    |             |              |
| distance to next largest floating point | eps(A)                     |             |              |
| matrix exponential                      | expmat(A)                  |             |              |
| symmetric matrix exponential            | expmat_sym(A)              |             |              |
| indices of non-zero elements            | find(A)                    |             |              |
| indices of finite elements              | find_finite(A)             |             |              |
| indices of non-finite elements          | find_nonfinite(A)          |             |              |
| indices of unique elements              | find_unique(A)             |             |              |
| flip matrix (L/R, U/D)                  | fliplr(A),flipud(A)        |             |              |
| extract imaginary/real part             | imag(A), real(A)           |             |              |
| convert linear index to subscripts      | ind2sub(size(A), index)    |             |              |
| indices of extremum values              | index_min(A), index_max(A) |             |              |
| in-place transpose                      | inplace_trans(A)           |             |              |
| log determinant                         | log_det(A)                 |             |              |
| matrix logarithm                        | logmat(A)                  |             |              |
| symmetric matrix logarithm              | logmat_sympd(A)            |             |              |
| return extremum values                  | min(A), max(A)             |             |              |
| return non-zero values                  | nonzeros(A)                |             |              |
| various norms                           | norm(A)                    |             |              |
| normalise vectors to unit p-norm        | normalise(A)               |             |              |
| product of elements                     | prod(A)                    |             |              |
| rank of matrix                          | rank(A)                    |             |              |
| reciprocal of condition number          | rcond(A)                   |             |              |
| replicate elements                      | repelem(A)                 |             |              |
| replicate matrix in block-like fashion  | repmat(A)                  |             |              |
| change size while keeping elements      | reshape(A)                 |             |              |
| change size while preserving layout     | resize(A)                  |             |              |
| reverse order of elements               | reverse(A)                 |             |              |
| roots of polynomial                     | roots(P)                   |             |              |
| shift elements                          | shift(A)                   |             |              |
| randomly shuffle elements               | shuffle(A)                 |             |              |
| obtain dimensions of given object       | size(A)                    |             |              |
| sort elements                           | sort(A)                    |             |              |
| vector describing sorted order          | sort_index(A)              |             |              |
| square root of matrix                   | sqrtmat(A)                 |             |              |
| square root of symmetric matrix         | sqrtmat_sympd(A)           |             |              |
| sum of elements                         | sum(A)                     |             |              |
| convert subscripts to linear index      | sub2ind                    |             |              |
| generate symmetric matrix               | symmatu(A)                 |             |              |
| sum of diagonal elements (trace)        | trace(A)                   |             |              |
| transpose of matrix                     | trans(A)                   |             |              |
| trapezoidal numerical integration       | trapz(A, X)                |             |              |
| copy upper/lower triangular part        | trimatu(A)                 |             |              |
| return unique elements                  | unique(A)                  |             |              |
| flatten matrix into vector              | vectorise(A)               |             |              |
| element-wise functions (various)        | exp(A), sin(A), ...        |             |              |

## Bivariate Functions

| Bivariate Functions of Arrays           | armadillo 9.600                | eigen 3.3.7 | numpy 1.16.4 |
| --------------------------------------- | ------------------------------ | ----------- | ------------ |
| affine matrix multiplication            | affmul(A,B)                    |             |              |
| approximate equality                    | approx_equal(A,B)              |             |              |
| cross product                           | cross(A,B)                     |             |              |
| dot products                            | dot(A,B), cdot, norm_dot       |             |              |
| common elements in two vectors/matrices | intersect(A,B)                 |             |              |
| concatenation of matrices / cubes       | join_rows(A,B), join_cols(A,B) |             |              |
| Kronecker tensor product                | kron(A,B)                      |             |              |
| infimum and supremum                    |                                |             |              |

## Notes

* Only one form is shown (B=F(A) in preference to F(B, A))
* Additional functional arguments generally not shown (Consult the libraries documentation!)
* The enumeration does not include functions indicated as deprecated