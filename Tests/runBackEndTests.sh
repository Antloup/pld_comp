let passed_tests=0;
let total_tests=0;
for file in `find BackEndTests -name *.cpto`; do
    total_tests=$((total_tests+1));
    ../cmake-build-debug/pld_comp $file;
    file_base=`echo $file | sed "s/\.cpto//g"`;
    gcc -c $file_base.s -o temp.o && gcc temp.o -o temp -no-pie && ./temp > $file_base.output;
    result=`diff -q $file_base.output $file_base`;
    if [[ $result ]]; then
        echo "/!\ Test $file_base raté. :("
    else
        echo "Test $file_base OK"
        passed_tests=$((passed_tests+1));
    fi
    rm $file_base.s
    rm $file_base.output
done
echo -e "Nombre de tests passés : $passed_tests / $total_tests";