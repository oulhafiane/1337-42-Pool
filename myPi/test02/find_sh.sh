find . -name "*.sh" | sed 's/\.\///g' | sed 's/\.sh//g' | cut -d "/" -f 2
