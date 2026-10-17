; undefined FUN_080b4c18(void)
; entry 0x80b4c18  size 20 bytes

080B4C18: 044a         ldr r2,[0x080b4c2c]
080B4C1A: 417a         ldrb r1,[r0,#0x9]
080B4C1C: 8900         lsl r1,r1,#0x2
080B4C1E: 8918         add r1,r1,r2
080B4C20: 0422         mov r2,#0x4
080B4C22: c260         str r2,[r0,#0xc]
080B4C24: 0968         ldr r1,[r1,#0x0]
080B4C26: 0969         ldr r1,[r1,#0x10]
080B4C28: 4161         str r1,[r0,#0x14]
080B4C2A: 7047         bx lr
