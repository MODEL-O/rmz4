; undefined FUN_0800243c(void)
; entry 0x800243c  size 34 bytes

0800243C: 10b5         push {r4,lr}
0800243E: 0124         mov r4,#0x1
08002440: 0749         ldr r1,[0x08002460]
08002442: 0b1c         add r3,r1,#0x0
08002444: 0f22         mov r2,#0xf
08002446: 0888         ldrh r0,[r1,#0x0]
08002448: 0028         cmp r0,#0x0
0800244A: 00d0         beq 0x0800244e
0800244C: 1c86         strh r4,[r3,#0x30]
0800244E: 1433         add r3,#0x14
08002450: 0231         add r1,#0x2
08002452: 013a         sub r2,#0x1
08002454: 002a         cmp r2,#0x0
08002456: f6da         bge 0x08002446
08002458: 10bc         pop {r4}
0800245A: 01bc         pop {r0}
0800245C: 0047         bx r0
