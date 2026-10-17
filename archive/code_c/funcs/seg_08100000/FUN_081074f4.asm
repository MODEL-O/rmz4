; undefined FUN_081074f4(void)
; entry 0x81074f4  size 26 bytes

081074F4: 10b5         push {r4,lr}
081074F6: 041c         add r4,r0,#0x0
081074F8: 607b         ldrb r0,[r4,#0xd]
081074FA: 0428         cmp r0,#0x4
081074FC: 3dd8         bhi 0x0810757a
081074FE: 8000         lsl r0,r0,#0x2
08107500: 0149         ldr r1,[0x08107508]
08107502: 4018         add r0,r0,r1
08107504: 0068         ldr r0,[r0,#0x0]
08107506: 8746         mov pc,r0
0810757A: 10bc         pop {r4}
0810757C: 01bc         pop {r0}
0810757E: 0047         bx r0
