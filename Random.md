## Comparison of random number functionality


## Initialization with Random Numbers

| Feature subset          | armadillo                    | eigen                  | numpy |
|-------------------------|------------------------------|------------------------|-------|
| Fill with random values | .randu(), .randn()           | .setRandom(rows, cols) |       |
| Reset seed              | arma_rng::set_seed_random()  | srand()                |       |
