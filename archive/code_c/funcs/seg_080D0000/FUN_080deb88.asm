; undefined FUN_080deb88(void)
; entry 0x80deb88  size 38 bytes

080DEB88: 826a         ldr r2,[r0,#0x28]
080DEB8A: b632         add r2,#0xb6
080DEB8C: 1178         ldrb r1,[r2,#0x0]
080DEB8E: 0139         sub r1,#0x1
080DEB90: 1170         strb r1,[r2,#0x0]
080DEB92: 827a         ldrb r2,[r0,#0xa]
080DEB94: fe21         mov r1,#0xfe
080DEB96: 1140         and r1,r2
080DEB98: 8172         strb r1,[r0,#0xa]
080DEB9A: 054a         ldr r2,[0x080debb0]
080DEB9C: 417a         ldrb r1,[r0,#0x9]
080DEB9E: 8900         lsl r1,r1,#0x2
080DEBA0: 8918         add r1,r1,r2
080DEBA2: 0422         mov r2,#0x4
080DEBA4: c260         str r2,[r0,#0xc]
080DEBA6: 0968         ldr r1,[r1,#0x0]
080DEBA8: 0969         ldr r1,[r1,#0x10]
080DEBAA: 4161         str r1,[r0,#0x14]
080DEBAC: 7047         bx lr
