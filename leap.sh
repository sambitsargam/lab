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