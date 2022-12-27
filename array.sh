read -p 'Enter the number of elements in the array:: ' n
declare -a array

echo 'Enter the elements:: '
for (( i=0;i<n;i++))
do
read array[$i]
done
min=${array[0]}
for i in "${array[@]}"
do
    if [[ "$i" -lt "$min" ]]; then
        min="$i"
    fi
done
echo 'The smallest number is ' $min