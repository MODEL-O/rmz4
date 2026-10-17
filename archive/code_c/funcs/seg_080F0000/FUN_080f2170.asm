; undefined FUN_080f2170(void)
; entry 0x80f2170  size 42 bytes

080F2170: 10b5         push {r4,lr}
080F2172: 041c         add r4,r0,#0x0
080F2174: 606d         ldr r0,[r4,#0x54]
080F2176: 0949         ldr r1,[0x080f219c]
080F2178: 4018         add r0,r0,r1
080F217A: 6065         str r0,[r4,#0x54]
080F217C: 0848         ldr r0,[0x080f21a0]
080F217E: 211c         add r1,r4,#0x0
080F2180: 5431         add r1,#0x54
080F2182: 2df7c7fc     bl 0x0801fb14
080F2186: 8021         mov r1,#0x80
080F2188: 4902         lsl r1,r1,#0x9
080F218A: 8842         cmp r0,r1
080F218C: 02d9         bls 0x080f2194
080F218E: 201c         add r0,r4,#0x0
080F2190: f7f7dcf9     bl 0x080e954c
080F2194: 10bc         pop {r4}
080F2196: 01bc         pop {r0}
080F2198: 0047         bx r0
