#!/bin/sh

watch() {
    WORKING_PATH=$(pwd)
    chsum1=""

    while [[ true ]]
    do
        chsum2=$(find -L $WORKING_PATH -type f -name "*.[ch]" -exec md5 {} \;)
        if [[ $chsum1 != $chsum2 ]] ; then
            chsum1=$chsum2
            clear
            echo "TEST RUNNING AT [ $(date) ]\n\n\n"

            norminette

            echo "\n\n"
          
            make fclean
            make
           
            echo "\n\n"

            echo "\n\nnombre null"
            ./rush-02 -4

            echo "\n\nnombre 0"
            ./rush-02 0
             
            echo "\n\nnombre 15"
            ./rush-02 15

            echo "\n\nnombre 100"
            ./rush-02 100

            echo "\n\nnombre 101"
            ./rush-02 101

            echo "\n\nnombre 110"
            ./rush-02 110
            
            echo "\n\nnombre 111"
            ./rush-02 111

            echo "\n\nnombre 1000"
            ./rush-02 1000

            echo "\n\nnombre 1001"
            ./rush-02 1001
            
            echo "\n\nnombre 999 999"
            ./rush-02 999999

            echo "\n\nnombre 1 000 000"
            ./rush-02 1000000

            echo "\n\nnombre 1 222 999"
            ./rush-02 1222999
            
            echo "\n\nnombre 12345678987654321"
            ./rush-02 12345678987654321

            echo "\n\nnombre 581467159585133255086535300454049840848"
            ./rush-02 581467159585133255086535300454049840848
        
             echo "\n\nnombre 58146715958513325508653530045404984084809"
            ./rush-02 58146715958513325508653530045404984084809

             echo "\n\nnombre emjoi 581467159585133255086535300454049840848"
            ./rush-02 emoji.dict 581467159585133255086535300454049840848
        fi
        sleep 1
    done
}

watch