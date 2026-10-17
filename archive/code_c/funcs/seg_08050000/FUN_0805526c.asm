; undefined FUN_0805526c(void)
; entry 0x805526c  size 42 bytes

0805526C: 00b5         push {lr}
0805526E: 806d         ldr r0,[r0,#0x58]
08055270: 0649         ldr r1,[0x0805528c]
08055272: c96b         ldr r1,[r1,#0x3c]
08055274: 401a         sub r0,r0,r1
08055276: a621         mov r1,#0xa6
08055278: 4902         lsl r1,r1,#0x9
0805527A: 4018         add r0,r0,r1
0805527C: 8021         mov r1,#0x80
0805527E: 8902         lsl r1,r1,#0xa
08055280: 8842         cmp r0,r1
08055282: 05d8         bhi 0x08055290
08055284: 0020         mov r0,#0x0
08055286: b8f7b5fa     bl 0x0800d7f4
0805528A: 04e0         b 0x08055296
08055290: 0120         mov r0,#0x1
08055292: b8f7affa     bl 0x0800d7f4
08055296: 01bc         pop {r0}
08055298: 0047         bx r0
