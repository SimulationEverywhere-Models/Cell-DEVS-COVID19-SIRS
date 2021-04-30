
cd sirs_meta1
../cd++ -m"sirs_meta.ma" -l"results_meta/sirs_meta.log"

cd ../sirs_meta2
../cd++ -m"sirs_meta.ma" -l"results_meta/sirs_meta.log"

cd ../epidemic_sirs

make
./insert_scenario scenario1.var
../cd++ -m"sirs_zhong.ma" -l"scenario1_results/sirs_zhong.log"

./insert_scenario scenario3.var
../cd++ -m"sirs_zhong.ma" -l"scenario3_results/sirs_zhong.log"

./insert_scenario scenario4.var
../cd++ -m"sirs_zhong.ma" -l"scenario4_results/sirs_zhong.log" -t00:00:00:250
