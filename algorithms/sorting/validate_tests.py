import os


with open(os.path.join("output_cpp.txt"),"r") as cpp, open(os.path.join("output_python.txt"),"r") as py:
    i,check = 1,0
    for cline,pline in zip(cpp,py):
        cline = cpp.readline()
        pline = py.readline()
        if cline==pline:
            pass
        else:
            print(f"{i} {cline} {pline}")
            check+=1
        i+=1

    print(f"Finished test with {check} errors")



