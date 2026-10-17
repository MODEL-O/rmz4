; undefined FUN_0801e17c(void)
; entry 0x801e17c  size 58 bytes

0801E17C: 10b5         push {r4,lr}
0801E17E: 0e48         ldr r0,[0x0801e1b8]
0801E180: 8921         mov r1,#0x89
0801E182: c900         lsl r1,r1,#0x3
0801E184: 4218         add r2,r0,r1
0801E186: 0021         mov r1,#0x0
0801E188: 1160         str r1,[r2,#0x0]
0801E18A: 041c         add r4,r0,#0x0
0801E18C: 211c         add r1,r4,#0x0
0801E18E: 8431         add r1,#0x84
0801E190: 2f23         mov r3,#0x2f
0801E192: 1068         ldr r0,[r2,#0x0]
0801E194: 0860         str r0,[r1,#0x0]
0801E196: 1160         str r1,[r2,#0x0]
0801E198: 1431         add r1,#0x14
0801E19A: 013b         sub r3,#0x1
0801E19C: 002b         cmp r3,#0x0
0801E19E: f8da         bge 0x0801e192
0801E1A0: 0021         mov r1,#0x0
0801E1A2: 064a         ldr r2,[0x0801e1bc]
0801E1A4: a018         add r0,r4,r2
0801E1A6: 0160         str r1,[r0,#0x0]
0801E1A8: 0548         ldr r0,[0x0801e1c0]
0801E1AA: 2118         add r1,r4,r0
0801E1AC: 3020         mov r0,#0x30
0801E1AE: 0880         strh r0,[r1,#0x0]
0801E1B0: 10bc         pop {r4}
0801E1B2: 01bc         pop {r0}
0801E1B4: 0047         bx r0
