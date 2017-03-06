# http://www.phy.mtu.edu/~suits/notefreqs.html
while read n f
do echo -n "#define $n "
   echo "count($f)"|bc freq.bc
done < notes.txt
