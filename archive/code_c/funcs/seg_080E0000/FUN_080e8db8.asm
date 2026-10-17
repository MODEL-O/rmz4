; undefined FUN_080e8db8(void)
; entry 0x80e8db8  size 28 bytes

080E8DB8: 827a         ldrb r2,[r0,#0xa]
080E8DBA: fe21         mov r1,#0xfe
080E8DBC: 1140         and r1,r2
080E8DBE: 8172         strb r1,[r0,#0xa]
080E8DC0: 044a         ldr r2,[0x080e8dd4]
080E8DC2: 417a         ldrb r1,[r0,#0x9]
080E8DC4: 8900         lsl r1,r1,#0x2
080E8DC6: 8918         add r1,r1,r2
080E8DC8: 0422         mov r2,#0x4
080E8DCA: c260         str r2,[r0,#0xc]
080E8DCC: 0968         ldr r1,[r1,#0x0]
080E8DCE: 0969         ldr r1,[r1,#0x10]
080E8DD0: 4161         str r1,[r0,#0x14]
080E8DD2: 7047         bx lr
