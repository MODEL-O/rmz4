; undefined FUN_0810d458(void)
; entry 0x810d458  size 54 bytes

0810D458: 00b5         push {lr}
0810D45A: 0d49         ldr r1,[0x0810d490]
0810D45C: 0860         str r0,[r1,#0x0]
0810D45E: 0d48         ldr r0,[0x0810d494]
0810D460: 0a18         add r2,r1,r0
0810D462: 0d48         ldr r0,[0x0810d498]
0810D464: 1060         str r0,[r2,#0x0]
0810D466: b322         mov r2,#0xb3
0810D468: d200         lsl r2,r2,#0x3
0810D46A: 8818         add r0,r1,r2
0810D46C: 0023         mov r3,#0x0
0810D46E: 0370         strb r3,[r0,#0x0]
0810D470: 0a48         ldr r0,[0x0810d49c]
0810D472: 0a18         add r2,r1,r0
0810D474: 1e20         mov r0,#0x1e
0810D476: 1070         strb r0,[r2,#0x0]
0810D478: 094a         ldr r2,[0x0810d4a0]
0810D47A: 8818         add r0,r1,r2
0810D47C: 0370         strb r3,[r0,#0x0]
0810D47E: 0948         ldr r0,[0x0810d4a4]
0810D480: 0918         add r1,r1,r0
0810D482: 1620         mov r0,#0x16
0810D484: 0870         strb r0,[r1,#0x0]
0810D486: 00f00ff8     bl 0x0810d4a8
0810D48A: 01bc         pop {r0}
0810D48C: 0047         bx r0
