; undefined FUN_08001464(void)
; entry 0x8001464  size 38 bytes

08001464: f0b5         push {r4,r5,r6,r7,lr}
08001466: 0026         mov r6,#0x0
08001468: 084f         ldr r7,[0x0800148c]
0800146A: 0125         mov r5,#0x1
0800146C: f419         add r4,r6,r7
0800146E: 201c         add r0,r4,#0x0
08001470: 00f064f8     bl 0x0800153c
08001474: 1820         mov r0,#0x18
08001476: 2075         strb r0,[r4,#0x14]
08001478: 0420         mov r0,#0x4
0800147A: 6075         strb r0,[r4,#0x15]
0800147C: 1836         add r6,#0x18
0800147E: 013d         sub r5,#0x1
08001480: 002d         cmp r5,#0x0
08001482: f3da         bge 0x0800146c
08001484: f0bc         pop {r4,r5,r6,r7}
08001486: 01bc         pop {r0}
08001488: 0047         bx r0
