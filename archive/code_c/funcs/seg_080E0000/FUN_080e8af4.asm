; undefined FUN_080e8af4(void)
; entry 0x80e8af4  size 20 bytes

080E8AF4: 044a         ldr r2,[0x080e8b08]
080E8AF6: 417a         ldrb r1,[r0,#0x9]
080E8AF8: 8900         lsl r1,r1,#0x2
080E8AFA: 8918         add r1,r1,r2
080E8AFC: 0422         mov r2,#0x4
080E8AFE: c260         str r2,[r0,#0xc]
080E8B00: 0968         ldr r1,[r1,#0x0]
080E8B02: 0969         ldr r1,[r1,#0x10]
080E8B04: 4161         str r1,[r0,#0x14]
080E8B06: 7047         bx lr
