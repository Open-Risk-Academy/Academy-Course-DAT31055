# Comparison of member functions of the array classes supported by each library

TODO

## Member Functions operating on elements or groups of elements

| Member Functions                          | armadillo 9.600            | eigen 3.3.7 | numpy 1.16.4 |
|-------------------------------------------|----------------------------|-------------|--------------|
| Set the elements of an object to zero     | .zeros()                   |             |              |
| Set all the elements of an object to one  | .ones()                    |             |              |
| Create unity matrix                       | .eye()                     |             |              |
| Fill with random values                   | .randu(), .randn()         |             |              |
| Fill with specific value                  | .fill(value)               |             |              |
| Fill with lambda function                 | .imbue(lambda)             |             |              |
| Fill with random values                   | .randu(), .randn()         |             |              |
| Replace small values with zero            | .clean(threshold)          |             |              |
| Fill with lambda function                 | .imbue(lambda)             |             |              |
| Modify old value to new                   | .replace(old, new)         |             |              |
| Transform old value with lambda function  | .transform(lambda)         |             |              |
| Pass element ref to lambda function       | .for_each(lambda)          |             |              |
| Set the size of an object                 | .set_size()                |             |              |
| Reshape an object                         | .reshape()                 |             |              |
| Data preserving resize                    | .resize()                  |             |              |
| Copy shape of existing object             | .copy_size(A)              |             |              |
| Set size to zero                          | .reset()                   |             |              |
| Vector operations to cols / rows / slices | .each_col, .each_row       |             |              |
| Insert cols / rows / slices               | .insert_col, .insert_row   |             |              |
| Remove cols / rows / slices               | .shed_cols, .shed_rows     |             |              |
| Swap cols / rows                          | .swap_cols, .swap_rows     |             |              |
| Set real/imaginary part                   | .set_imag, .set_real       |             |              |
| Return flattened version                  | .as_col(), .as_row()       |             |              |
| Transpose / Hermitian                     | .t(), .st()                |             |              |
| Inverse                                   | .i()                       |             |              |
| Find Min / Max values                     | .min(), .max()             |             |              |
| Index of Min / Max values                 | .index_min(), .index_max() |             |              |
| Test for location or span                 | .in_range(row,col)         |             |              |
| Test for elements                         | .in_range(row,col)         |             |              |
| Test for vector shape                     | .is_vec(), .is_colvec      |             |              |
| Test for ordering                         | .is_sorted()               |             |              |
| Test for square shape                     | .is_square()               |             |              |
| Test for symmetry                         | .is_symmetric()            |             |              |
| Test for Hermitian                        | .is_hermitian()            |             |              |
| Test for Symmetric Positive Definite      | .is_sympd()                |             |              |
| Test for Finite elements (no NaN / Inf)   | .is_finite()               |             |              |
| Test for Infinities                       | .has_inf()                 |             |              |
| Test for NaN                              | .has_nan()                 |             |              |
| Raw print / Pretty print                  | .print(), .raw_print()     |             |              |
| Save to file / stream                     | .save()                    |             |              |

## Notes

* We do not specify explicitly the set of array classes for each method. E.g. obviously setting all elements to one does
  not apply to the sparse matrix class (where it exists)
* Refer to the documentation for subtle differences between functions that appear to have similar functionality!
* Member functions have some functionality overlap with [functions applied to single arrays](Functions.md)

## Iterators

| Iterators               | armadillo 9.600     | eigen 3.3.7 | numpy 1.16.4 |
| ----------------------- | ------------------- | ----------- | ------------ |
| Random access iterators | mat / vec::iterator |             |              |
| Bidirectional iterators | rowvec::iterator    |             |              |



