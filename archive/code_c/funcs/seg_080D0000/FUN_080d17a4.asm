; undefined FUN_080d17a4(void)
; entry 0x80d17a4  size 20 bytes

080D17A4: 044a         ldr r2,[0x080d17b8]
080D17A6: 417a         ldrb r1,[r0,#0x9]
080D17A8: 8900         lsl r1,r1,#0x2
080D17AA: 8918         add r1,r1,r2
080D17AC: 0422         mov r2,#0x4
080D17AE: c260         str r2,[r0,#0xc]
080D17B0: 0968         ldr r1,[r1,#0x0]
080D17B2: 0969         ldr r1,[r1,#0x10]
080D17B4: 4161         str r1,[r0,#0x14]
080D17B6: 7047         bx lr
