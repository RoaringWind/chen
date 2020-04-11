# Offical Guide: https://docs.python.org/zh-cn/3/howto/argparse.html
import argparse
parser = argparse.ArgumentParser()
#part1
parser.add_argument("square", type=int,
                    help="display a square of a given number")
#part1

parser.add_argument("-v", "--verbose", action="store_true",
                    help="increase output verbosity")

#part2
parser.add_argument("tri", type=int,
                    help="display a triiiiix of a given number")         
#part2

# two integers are read by order written in the python file.
args = parser.parse_args()
answer = args.square**2
answer1 = args.tri**3
if args.verbose:
    print("the square of {} equals {}".format(args.square, answer))   
    print("the triiiiiix of {} equals {}".format(args.tri, answer1))

else:
    print(answer)
    print(answer1)

# sample:
# $python args.py 2 3 -v
# $the square of 2 equals 4
# $the triiiiiix of 3 equals 27

# if you swap part1 and part2,the sample will be as follows:
# $python args.py 2 3 -v
# $the square of 3 equals 9
# $the triiiiiix of 2 equals 8