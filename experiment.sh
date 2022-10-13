#!/bin/bash


for i in 256 512 768 1024 1280 1536 1792 2048

do 
	./matrix_math 1 $i	

done



for i in 256 512 768 1024 1280 1536 1792 2048

do
	./matrix_math 2 $i
	
done

