![made-with-python](https://img.shields.io/badge/Made%20with-Python-1f425f.svg)
[![GitHub license](https://img.shields.io/github/license/Naereen/StrapDown.js.svg)](https://github.com/Naereen/StrapDown.js/blob/master/LICENSE)
[![Percentage of issues still open](http://isitmaintained.com/badge/open/Naereen/badges.svg)](http://isitmaintained.com/project/Naereen/badges "Percentage of issues still open")

# Numpymatrix Project Description

## Objectives

The main objective of the numpymatrix project is to compare and contrast the functionality and performance of select popular linear algebra libraries using numpy as the baseline.

In the current version three libraries are compared: Two C++ libraries (armadillo, eigen), a python library ( numpy/linalg):

* [Numpy](https://www.numpy.org) NumPy is the fundamental package for scientific computing with Python. It contains among other things a powerful N-dimensional array object and sophisticated (broadcasting) functions, tools for integrating C/C++ and Fortran code and Fourier transform, and random number capabilities
* [Armadillo](http://arma.sourceforge.net) C++ library for linear algebra & scientif+\ic computing. Aiming towards a good balance between speed and ease of use. Provides high-level syntax and functionality deliberately similar to Matlab
* [Eigen](http://eigen.tuxfamily.org) Eigen is a C++ template library for linear algebra: matrices, vectors, numerical solvers, and related algorithms

This comparison can be used to:

* identify missing / desirable features
* as a learning tool for those new to numerical linear algebra / scientific computing
* as a refresher tool when migrating between languages / frameworks
* as a test suite comparing implementations ([TODO](TODO.md))

A secondary objective is to preserve the old numpy.matrix API which has *some* [advantages](https://numpy.org/doc/stable/user/numpy-for-matlab-users.html) over the numpy.ndarray API.

## Structure

The structure of the numpymatrix project is as follows:

* Documentation in the form of markdown files including tables with the reported feature comparisons. For convenience each markdown file includes one table
* A source code directory with a collection of simple scripts written in the respective languages that illustrates a *sample* of the functionality

## Project Notes

### Limited Completeness

There are several other high quality libraries for numerical linear algebra. Non-inclusion in this comparison is not a quality judgement. Contributions to complete the library/features comparison are welcome!

### Not Apples with Oranges

The different numerical linear algebra libraries compared here do not have the same development stage, scope and/or domain targets. Numpy, for example, bills itself as a broad scientific computing framework and occupies a unique position in the python ecosystem (compared. e.g., to several independent linear algebra projects available the C++ universe).

### Specific Focus

The comparison is currently exclusively focused on the implemented _mathematical features_ of the different libraries. 

It does **not** address:

* numerical robustness
* memory efficiency
* computational performance
* concurrency and CPU/GPU optimizations
* extensibility
* code quality
* licensing characteristics
* community aspects

just to mention some of the attributes that may be important when deciding which library to adopt for a given task / project. Some of the above dimensions might make sense to include in this comparison in the future

## How to use this comparison

The primary use of numpymatrix is envisaged to be as online documentation / training.

At present limited code samples are provided to demonstrate select features. Each code sample reproduces the same (or parallel) sequence of calculations. These samples are not meant to exhaustively illustrate all functionality, merely to showcase the look and feel of each library. Only features available in all libraries are included in such samples.

NB: To run the examples you need working installations of C++ and python respectively (versions C++17 and 3.9 respectively)

## Library Versions

The initial comparison is based on the documentation of the latest available versions as of September 2022:

* armadillo 11.4
* eigen 3.3.9
* numpy 1.23.0

## The Comparison Tables

For better usability, features are grouped in common subsets. This is irrespective of how they are grouped within the libraries themselves.

[Overview Tables](Overview.md)
