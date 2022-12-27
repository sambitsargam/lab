read -p 'Enter first number ' a
read -p 'Enter second number ' b
echo 'inputed a' $a
echo 'inputed b' $b
temp=$a
a=$b
b=$temp
echo 'output a' $a
echo 'output b' $b