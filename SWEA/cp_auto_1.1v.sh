# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    cp_auto_1.1v.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/12 19:41:51 by yujo              #+#    #+#              #
#    Updated: 2020/03/23 18:54:05 by yujo             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

## ver 1.0 20/03/13 cp $1 ~/$2 를 통해 자동으로 이동 경로를 설정해서 보내준다.

## ver 1.1 update 20/03/13 ###########################################
#																	 #
#  어떤 파일이 어디로 이동 되었는지 출력 해준다.					 #
#  이를 통해 원하는 파일이 원하는 경로로 이동 됐는지 확인할 수 있다. #
#																	 #
######################################################################

## ver 1.1. update 20/03/23 ###########################################
#																	  #
#  SWEA 문제를 품에 따라SWEA용 bash가 필요해 일부 내용과 경로를 수정. #
#																	  #
#######################################################################

if [ $2 == "1" ]
then
	g="D1"
elif [ $2 == "2" ]
then
	g="D2"
elif [ $2 == "3" ]
then
	g="D3"
elif [ $2 == "4" ]
then
	p="D4"
fi

# 파일명을 alphabet 단위로 입력 받아 해당 폴더로 cp를 한다.
cp $1 ../../../42cursus/my_study/Algorithm_ps/SWEA/$g
# oo파일이 oo폴더로 이동 된 것을 출력해준다.
echo "$1 copied my_study/BOJ $g folder"

# b = Bronze , s = Silver...

