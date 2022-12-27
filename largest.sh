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