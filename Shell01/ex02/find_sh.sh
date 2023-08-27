for file in ` find . -type f -name "*.sh"`
do
	baseFilename=`basename $file .sh`
	echo $baseFilename
done
