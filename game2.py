#start a game
import random
#print("""1.UUU UUC UUA + 2.UCU UCC UCA UCG + 3.UGU UGC UGA +
#4.UGG + 5.UGG,UUG,UAG + 6.CUU CUC + 7.CAU CAC CAA CCU CCC CCA CCG +
#8.CGU CGC CGA +9.CGG + 10.AUU AUC + 11.AUA AUG +12.ACU ACC ACA
#ACG AAU AAC AAA AGU AGC AGA + 13.AAG + 14.AGG + 15.Arg GAU GUU GUC GUA GUG
#+ 16.GCU GCC GCA GCG + 17.GAC GAA GGU GGC GGA GGG GAG""")
print(" 1.AUG 2.UUA 3.UGA")
def thanks():
    print('thanks for playing')
    print(d,'more are left')

def chosse():
    words =['AUG','UUA','UGA']
    pick = random.choice(words)
    return pick
def play():
    c=0
    d=0
    while True:
        picked_word = chosse()
        print("pick a word by computer")
        st=input("enter a name of amino acid ")
        if st==picked_word:
            print('you are gessing corret')
            break
        else :
            print('better luck next time')
            c += 1
            d += 1
        if c == 0:
            thanks ()
            if d != 0:
                break
if __name__ == '__main__':
     
    # play() function calling
    play()

