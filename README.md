# Susceptible-Infected-Recovered-Susceptible Disease Spread Model

Bidimensional Cell-DEVS adaptation of the Geo-Entity Cellular Automata presented by [Zhong et al.](https://link.springer.com/article/10.1007/s11430-009-0044-9).
However, rules have been re-interpreted by [Kevin Henares](mailto:khenares@ucm.es).
The Scenarios and modifications in this project have been done by Glenn Davidson, Carleton University

## Overview of folders in project:
- alternate_json    - json files to be used with the models if the default json in the model directory is not desired
- epidemic_sirs     - the original sirs model before any modifications, contains three scenarios
- seirs_incubation  - an incomplete implementation of a seirs model, does not compile
- sirs_meta1        - a simulation similar to those done in epidemic_sirs, but with different infectivity profile
- sirs_meta2        - a simulation similar to those done in epidemic_sirs, but with different infectivity profile
- var_generators    - a tool that can be used to generate .var files for the sirs_meta and sirs_zhong models
- webm              - a set of videos of scenarios run

## How to run the model:

1) Copy CD++ 2.0 to cov_sirs directory

2) Run models by either running their shell scripts individually, or run the set (5 simulations) all at once

To run all models and scenarios by opening a terminal in cov_sirs and typing:
```shell
> ./runall.sh
```
this will execute the models and scenarios in epidemic_sirs, sirs_meta1, sirs_meta2, for a total of 5 simulations, and will take 15-20 minutes to complete

The scenarios can also be run individually using the shell scripts in the model folders "epidemic_sirs", "sirs_meta1" and "sirs_meta2". See the README.me in model directories for more information

3) Upload the results to DEVS WebViewer using the .ma, .log01 (in results folders), and options.json
- The .pal can be used instead of the .json but the .json contains a more detailed view.
