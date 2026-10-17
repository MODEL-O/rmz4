; undefined FUN_080a19a0(void)
; entry 0x80a19a0  size 20 bytes

080A19A0: 00b5         push {lr}
080A19A2: 044a         ldr r2,[0x080a19b4]
080A19A4: 017c         ldrb r1,[r0,#0x10]
080A19A6: 8900         lsl r1,r1,#0x2
080A19A8: 8918         add r1,r1,r2
080A19AA: 0968         ldr r1,[r1,#0x0]
080A19AC: 87f0e8fa     bl 0x08128f80
080A19B0: 01bc         pop {r0}
080A19B2: 0047         bx r0
