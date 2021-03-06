#If you system lacks any module, install it by help of google.
#further details in blog.
from sys import argv
from urllib.request import urlopen
import json
import time
import easygui
 
script , friends = argv
txt = open(friends).read()
 
#make sure that friends.txt file has EXACT same spelling of handles(space separated) of your friends.
 
#li will be a list containing all you friends. I suggest to add your name 
#too,to get updated with your system test results along with your friends.
li = txt.split()
 
def main():
    rem = []
 
    #flag will cause the first iteration go without any alerts.This will cause the code detect the
    #solution after it starts.Otherwise you will have to cancel all alerts of first iteration (sucks).
    flag = False
    print("CONSOLE :")
    while 1:
        for user in li:
            #preparing url for a particular friend.Below three lines are just json and api stuff.
            #I have set count = 15 (code will track last 15 solutions of user).
            url = 'http://codeforces.com/api/user.status?handle=' + user +'&from=1&count=15'
            json_obj = urlopen(url)
            data = json.load(json_obj)
 
            #iterate through all x solutions of user.
            for pick in data['result']:
                #Considering Accepted solutions.
                if pick['verdict'] == "OK":
 
                    #This will be used for system tests.
                    if pick['testset'] == "TESTS": 
                        myobj = pick['problem']
                        #temp is an attempt to make a submission uniquely enter in rem. (through SubmissionID) 
                        temp = str(pick['id']) + pick['verdict']
 
                        if temp not in rem:
                            rem.append(temp)
                            create = user + "- |" + myobj['index'] + "|" + myobj['name'] 
                            if flag == True:
                                easygui.msgbox(create, "Accepted!!")
                                print ("[Accepted!]"  , create)
 
                    #this will be used for pretests 
                    elif pick['testset']  == "PRETESTS":
                        myobj = pick['problem']
                        temp =  pick['id']
                        if temp not in rem:
                            rem.append(temp)
                            create = user + "- |" + myobj['index'] + "|" + myobj['name'] 
                            easygui.msgbox(create, "Pretest-passed!!")
                            print("[pretest-passed]"  , create)
 
                #this will run when non Accepted solutions.Comment everything 
                #in below else if you do not wish to see wrong submissions.
                elif pick['verdict'] != "TESTING":
                    myobj = pick['problem']
                    temp  = str(pick['id']) + pick['verdict']
 
                    if temp not in rem:
                        rem.append(temp)
                        create = user + "- |" + myobj['index'] + "|" + myobj['name']
                        if flag == True:
                            easygui.msgbox(create, pick['verdict']) 
                            print("[" + pick['verdict'] + "]", create)                                            
        #we have cached all previous solutions at rem list.from now on it  
        #will detect only new submitted solutions.Used only at first iteration.
        flag = True
 
        #insert time according to you patience.Unit is seconds.
        time.sleep(180)
 
if __name__ == '__main__':
    main()