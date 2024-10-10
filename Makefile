countOdds: countOdds.cpp
	g++ -o countOdds countOdds.cpp -std=c++20
installcompi:
	conda install -y --solver=classic -c conda-forge gxx
	conda install -y --solver=classic -c conda-forge libffi
	conda install -y --solver=classic conda-forge::conda-libmamba-solver conda-forge::libmamba
	conda-forge::libmambapy conda-forge::libarchive
avg: avg.cpp
	g++ -o avg avg.cpp -std=c++20