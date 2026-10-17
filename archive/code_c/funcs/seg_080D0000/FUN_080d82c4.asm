; undefined FUN_080d82c4(void)
; entry 0x80d82c4  size 28 bytes

080D82C4: 827a         ldrb r2,[r0,#0xa]
080D82C6: fe21         mov r1,#0xfe
080D82C8: 1140         and r1,r2
080D82CA: 8172         strb r1,[r0,#0xa]
080D82CC: 044a         ldr r2,[0x080d82e0]
080D82CE: 417a         ldrb r1,[r0,#0x9]
080D82D0: 8900         lsl r1,r1,#0x2
080D82D2: 8918         add r1,r1,r2
080D82D4: 0422         mov r2,#0x4
080D82D6: c260         str r2,[r0,#0xc]
080D82D8: 0968         ldr r1,[r1,#0x0]
080D82DA: 0969         ldr r1,[r1,#0x10]
080D82DC: 4161         str r1,[r0,#0x14]
080D82DE: 7047         bx lr
