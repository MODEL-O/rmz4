; undefined FUN_080d83d8(void)
; entry 0x80d83d8  size 28 bytes

080D83D8: 827a         ldrb r2,[r0,#0xa]
080D83DA: fe21         mov r1,#0xfe
080D83DC: 1140         and r1,r2
080D83DE: 8172         strb r1,[r0,#0xa]
080D83E0: 044a         ldr r2,[0x080d83f4]
080D83E2: 417a         ldrb r1,[r0,#0x9]
080D83E4: 8900         lsl r1,r1,#0x2
080D83E6: 8918         add r1,r1,r2
080D83E8: 0422         mov r2,#0x4
080D83EA: c260         str r2,[r0,#0xc]
080D83EC: 0968         ldr r1,[r1,#0x0]
080D83EE: 0969         ldr r1,[r1,#0x10]
080D83F0: 4161         str r1,[r0,#0x14]
080D83F2: 7047         bx lr
