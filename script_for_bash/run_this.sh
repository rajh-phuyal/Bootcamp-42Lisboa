#put this in your main exercise folder
#and change some values based on requirements
echo -------- Files Check --------
ls */**
echo -------- Norme Check --------
norminette -R checkforfordbiddensourceheader .
echo -------- Compilations --------
cd ./ex00
# change the values based on the number of exercises: {0,1,2,3,4,5,6,7,8,9, ?}
for exercise in {0,1,2,3,4,5,6,7,8,9};
do
	echo -------- EX0$exercise --------
	if gcc -Wall -Wextra -Werror -o executable *.c
	then
		echo -------- Run EX0$exercise --------
		./executable
	else
		echo Program did not compile!
	cd ../ex0$exercise
	fi
done