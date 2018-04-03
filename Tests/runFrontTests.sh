for file in `find FrontEndTests -name *.c`; do
    echo -e "Running prog with Test File : $file :\n";
    highlight $file -O ANSI;
    read;
    ../cmake-build-debug/pld_comp $file;
    echo -e "-----------------------------------------\n\n\n";
done
echo -e "Fin des tests!"
