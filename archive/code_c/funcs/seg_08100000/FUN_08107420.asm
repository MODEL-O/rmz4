; undefined FUN_08107420(void)
; entry 0x8107420  size 26 bytes

08107420: 10b5         push {r4,lr}
08107422: 041c         add r4,r0,#0x0
08107424: 607b         ldrb r0,[r4,#0xd]
08107426: 0528         cmp r0,#0x5
08107428: 61d8         bhi 0x081074ee
0810742A: 8000         lsl r0,r0,#0x2
0810742C: 0149         ldr r1,[0x08107434]
0810742E: 4018         add r0,r0,r1
08107430: 0068         ldr r0,[r0,#0x0]
08107432: 8746         mov pc,r0
081074EE: 10bc         pop {r4}
081074F0: 01bc         pop {r0}
081074F2: 0047         bx r0
