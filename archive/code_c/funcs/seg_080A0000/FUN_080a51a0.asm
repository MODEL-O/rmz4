; undefined FUN_080a51a0(void)
; entry 0x80a51a0  size 20 bytes

080A51A0: 00b5         push {lr}
080A51A2: 044a         ldr r2,[0x080a51b4]
080A51A4: 417b         ldrb r1,[r0,#0xd]
080A51A6: 8900         lsl r1,r1,#0x2
080A51A8: 8918         add r1,r1,r2
080A51AA: 0968         ldr r1,[r1,#0x0]
080A51AC: 83f0e8fe     bl 0x08128f80
080A51B0: 01bc         pop {r0}
080A51B2: 0047         bx r0
