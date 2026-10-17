; undefined FUN_080fe7c4(void)
; entry 0x80fe7c4  size 20 bytes

080FE7C4: 826a         ldr r2,[r0,#0x28]
080FE7C6: 516d         ldr r1,[r2,#0x54]
080FE7C8: 034b         ldr r3,[0x080fe7d8]
080FE7CA: c918         add r1,r1,r3
080FE7CC: 4165         str r1,[r0,#0x54]
080FE7CE: 916d         ldr r1,[r2,#0x58]
080FE7D0: 024a         ldr r2,[0x080fe7dc]
080FE7D2: 8918         add r1,r1,r2
080FE7D4: 8165         str r1,[r0,#0x58]
080FE7D6: 7047         bx lr
