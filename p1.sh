// largest
read -p 'Enter anumber ' a
read -p 'Enter another number ' b
read -p 'enter another number ' c
if [ $a -gt $b ] && [ $a -gt $c ]
then
    echo 'The largest number is ' $a
elif [ $b -gt $a ] && [ $b -gt $c ]
then
    echo 'The largest number is ' $b
else
    echo 'The largest number is ' $c
fi

// leapyear
read -p 'Enter a year:: ' y
echo 'Entered year is' $y
year=$y
year=$(( $year % 4 ))
if [ $year -eq 0 ]
then
    echo 'This is a leap year'
else
    echo 'This is not a leap year'
fi

// reverse
read -p 'Enter a sting ' str
length=${#str}
for (( i=length-1;i>=0;i-- ))
do
rev="$rev${str:$i:1}"
done
echo "Reverse of this number " $rev

//swap

read -p 'Enter first number ' a
read -p 'Enter second number ' b
echo 'inputed a' $a
echo 'inputed b' $b
temp=$a
a=$b
b=$temp
echo 'output a' $a
echo 'output b' $b

//array smallest
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
