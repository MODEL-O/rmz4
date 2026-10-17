; undefined FUN_080e0cbc(void)
; entry 0x80e0cbc  size 22 bytes

080E0CBC: 416d         ldr r1,[r0,#0x54]
080E0CBE: c26d         ldr r2,[r0,#0x5c]
080E0CC0: 8918         add r1,r1,r2
080E0CC2: 4165         str r1,[r0,#0x54]
080E0CC4: 816d         ldr r1,[r0,#0x58]
080E0CC6: 026e         ldr r2,[r0,#0x60]
080E0CC8: 8918         add r1,r1,r2
080E0CCA: 8165         str r1,[r0,#0x58]
080E0CCC: 4032         add r2,#0x40
080E0CCE: 0266         str r2,[r0,#0x60]
080E0CD0: 7047         bx lr
