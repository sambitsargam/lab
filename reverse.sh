read -p 'Enter a sting ' str
length=${#str}
for (( i=length-1;i>=0;i-- ))
do
rev="$rev${str:$i:1}"
done
echo "Reverse of this number " $rev