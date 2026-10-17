; undefined FUN_0810bfe4(void)
; entry 0x810bfe4  size 62 bytes

0810BFE4: 10b5         push {r4,lr}
0810BFE6: 041c         add r4,r0,#0x0
0810BFE8: 10f758fe     bl 0x0801cc9c
0810BFEC: a17a         ldrb r1,[r4,#0xa]
0810BFEE: 0120         mov r0,#0x1
0810BFF0: 0843         orr r0,r1
0810BFF2: a072         strb r0,[r4,#0xa]
0810BFF4: 221c         add r2,r4,#0x0
0810BFF6: 4932         add r2,#0x49
0810BFF8: 1178         ldrb r1,[r2,#0x0]
0810BFFA: 0d20         mov r0,#0xd
0810BFFC: 4042         rsb r0,r0
0810BFFE: 0840         and r0,r1
0810C000: 1070         strb r0,[r2,#0x0]
0810C002: 211c         add r1,r4,#0x0
0810C004: 2531         add r1,#0x25
0810C006: 1120         mov r0,#0x11
0810C008: 0870         strb r0,[r1,#0x0]
0810C00A: 0649         ldr r1,[0x0810c024]
0810C00C: 201c         add r0,r4,#0x0
0810C00E: 10f777ff     bl 0x0801cf00
0810C012: 0548         ldr r0,[0x0810c028]
0810C014: 4168         ldr r1,[r0,#0x4]
0810C016: 0068         ldr r0,[r0,#0x0]
0810C018: 6065         str r0,[r4,#0x54]
0810C01A: a165         str r1,[r4,#0x58]
0810C01C: 10bc         pop {r4}
0810C01E: 01bc         pop {r0}
0810C020: 0047         bx r0
