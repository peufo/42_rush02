#!/bin/sh

watch() {
	WORKING_PATH=$(pwd)
	chsum1=""

	echo "TARSTASTARS"
	while [[ true ]]
	do
		chsum2=$(find -L $WORKING_PATH -type f -name "*.[ch]" -exec md5 {} \;)
		if [[ $chsum1 != $chsum2 ]] ; then
			chsum1=$chsum2
			clear
			echo "\033[13;33;73mTEST RUNNING AT [ $(date) ]...\033[0m\n"

			echo "\n\n\033[13;33;73mNORMINETTE -R CheckDefine\033[0m\n"
			norminette -R CheckDefine

			echo "\n\n\033[13;33;73mCOMPILATION ET EXECUTION\033[0m\n"

			make fclean
			make
			if [ -f ./rush-02 ]; then
				: '
				echo "\n\nnombre 0"
				./rush-02 0

				echo "\n\nnombre 101"
				./rush-02 101
				'

				echo "\n\nnombre 110"
				./rush-02 110

				echo "\n\nemoji 110"
				./rush-02 emoji.dict 110

				: '
				echo "\n\nnombre 1 222 999"
				./rush-02 1222999

				echo "\n\nnombre 581467159585133255086535300454049840848"
				./rush-02 581467159585133255086535300454049840848

				echo "\n\nnombre trop grand"
				./rush-02 58146715958513325508653530045404984084809

				echo "\n\nemojis 581467159585133255086535300454049840848"
				./rush-02 emoji.dict 581467159585133255086535300454049840848

				echo "\n\nbroken 123"
				./rush-02 broken.dict 123
				'

			else
				echo "\n\n\033[13;33;73mEXECUTABLE NOT FOUND\033[0m"
			fi
		fi
		sleep 1
	done
}

watch
