import sys
import os

def format(path):
    if not os.path.exists(path):
        print("Error: path doesn't exist: %s" % path)
    else:
        os.chdir(path)
        print("cd to " + os.getcwd())
        entries = os.scandir()
        for f in entries:
            if f.is_dir():
                print("%s is a directory, continue." % f.name)
                continue
            name = extract(f.name)
            os.mkdir(name)   # create new folder
            os.rename(f.path, name + "/" + f.name)
            os.open(name + "/README.md", os.O_CREAT)

# gets rid of the file's suffix
def extract(f):
     return f[:f.index(".")]

def usage():
    print("Usage: $0 folderName")

def main():
    if len(sys.argv) < 2:
        usage()
        sys.exit(-1)
    for folderName in sys.argv[1:]:
        format(folderName)

if __name__ == '__main__':
    main()
