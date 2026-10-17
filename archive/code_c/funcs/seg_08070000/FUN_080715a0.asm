; undefined FUN_080715a0(void)
; entry 0x80715a0  size 20 bytes

080715A0: 00b5         push {lr}
080715A2: 044a         ldr r2,[0x080715b4]
080715A4: 817b         ldrb r1,[r0,#0xe]
080715A6: 8900         lsl r1,r1,#0x2
080715A8: 8918         add r1,r1,r2
080715AA: 0968         ldr r1,[r1,#0x0]
080715AC: b7f0e8fc     bl 0x08128f80
080715B0: 01bc         pop {r0}
080715B2: 0047         bx r0
