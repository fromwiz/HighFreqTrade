PROJECT_DIRECTORY=
SCREEN_NAME=delay
cd $PROJECT_DIRECTORY

screen -dmS $SCREEN_NAME
cmd1=$"export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$PROJECT_DIRECTORY"
screen -x -S $SCREEN_NAME -p 0 -X stuff "$cmd1"
screen -x -S $SCREEN_NAME -p 0 -X stuff $'\n'
cmd2=$"./functional_test"
screen -x -S $SCREEN_NAME -p 0 -X stuff "$cmd2"
screen -x -S $SCREEN_NAME -p 0 -X stuff $'\n'
echo `date --date='0 days ago' "+%Y-%m-%d %H:%M:%S"` "run program $JAR_NAME result:" >> run.log
screen -x $SCREEN_NAME

