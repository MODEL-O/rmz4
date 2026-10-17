; undefined FUN_08092300(void)
; entry 0x8092300  size 20 bytes

08092300: 00b5         push {lr}
08092302: 044a         ldr r2,[0x08092314]
08092304: 417b         ldrb r1,[r0,#0xd]
08092306: 8900         lsl r1,r1,#0x2
08092308: 8918         add r1,r1,r2
0809230A: 0968         ldr r1,[r1,#0x0]
0809230C: 96f038fe     bl 0x08128f80
08092310: 01bc         pop {r0}
08092312: 0047         bx r0
