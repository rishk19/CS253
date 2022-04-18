#!/bin/bash

# Functionality 1

if [ $# != 2 ]
then
    echo "Incorrect number of inputs given!"
    exit 1

fi




# Functionality 2

output_file=$2
input_file=$1

 
if [ -f "$input_file" ]
then
    :
else
    echo "No such file exists !"
    exit 1
fi




# Functionality 3

required_fields=("Name" "PredominantDegree" "HighestDegree" "Region" "Geography" "AdmissionRate" "AverageCost" "Expenditure")
OLDIFS=$IFS
IFS=','
counter=0
read -r first_line<"$input_file"
indexes=()
for i in ${first_line[@]}
do
    j=0
    while [[ $j < ${#required_fields[@]} ]]
    do
	if [[ $i == ${required_fields[$j]} ]]
	then
	    indexes+=($counter)
	fi

	j=$((j+1))
    done
    counter=$((counter+1))
done

input_cleaned="input_without_header.csv"
sed 1d "$input_file" >"$input_cleaned"

if [ -f "$output_file" ]
then
    rm "$output_file"
fi

while IFS=',' read -r line || [ -n "$line" ]
do
    read -a line1 <<<"$line"
    modified_line=()
    #echo "${#line1[@]}"
    for i in ${indexes[@]}
    do
	modified_line+=("${line1[$i]}")
	#echo $i
	#echo "${line1[$i]}"
    done
    echo "${modified_line[@]}">> "$output_file"
done < "$input_cleaned"





# Functonality 4

echo >> "$output_file"

while IFS=',' read -r line || [ -n "$line" ]
do
    read -a line1 <<<"$line"
    if [[ ${line1[${indexes[2]}]} == "Bachelor's" ]]
    then
	echo "${line1[${indexes[0]}]}">> "$output_file"
    fi
    
done < "$input_cleaned"





# Functionality 5

echo >> "$output_file"

geography_types=()


while IFS=',' read -r line || [ -n "$line" ]
do
    read -a line1 <<<"$line"
    if [ -z "$geography_types" ]
    then
	geography_types+=(${line1[${indexes[4]}]})
    else
	flag=0
	for i in ${geography_types[@]}
	do
	    if [[ ${line1[${indexes[4]}]} == $i ]]
	    then
		flag=1
	    fi
	done
	if [[ $flag == 0 ]]
	then
	    geography_types+=(${line1[${indexes[4]}]})
	fi
	
    fi
done < "$input_cleaned"


totals=()
averages=()
for i in ${geography_types[@]}
do
    averages+=(0.0)
    totals+=(0.0)
done
    
while IFS=',' read -r line || [ -n "$line" ]
do
    read -a line1 <<<"$line"
    if [ -z "$geography_types" ]
    then
	echo "No such coloumn found"
	exit 1
    else
	for i in ${!geography_types[@]}
	do
	    if [[ ${line1[${indexes[4]}]} == ${geography_types[$i]} ]]
	    then
		averages[$i]=`echo ${averages[$i]} + ${line1[${indexes[5]}]} | bc`	 
		totals[$i]=`echo ${totals[$i]} + 1 | bc`
	    fi
	done
	
    fi
done < "$input_cleaned"

echo "Geography: Average Admission Rate" >>"$output_file"

for i in ${!geography_types[@]}
do
    averages[$i]=$(awk "BEGIN {print ${averages[$i]}/${totals[$i]}}" )
    echo "${geography_types[$i]}:${averages[i]}" >>"$output_file"
    
done





# Functionality 6
sorted_input="input_sorted.csv"
sort --field-separator=',' --key=16 -nr "$input_cleaned" >"$sorted_input"

a=0
echo >> "$output_file"
while [[ $a < 5 ]]
do
    IFS=','
    read -r line
    read -a line1 <<<"$line"
    echo ${line1[0]} >> "$output_file"
    a=$((a+1))
    
done<"$sorted_input"

rm "$sorted_input"
rm "$input_cleaned"


