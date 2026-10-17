; undefined FUN_081009e0(void)
; entry 0x81009e0  size 20 bytes

081009E0: 044a         ldr r2,[0x081009f4]
081009E2: 417a         ldrb r1,[r0,#0x9]
081009E4: 8900         lsl r1,r1,#0x2
081009E6: 8918         add r1,r1,r2
081009E8: 0422         mov r2,#0x4
081009EA: c260         str r2,[r0,#0xc]
081009EC: 0968         ldr r1,[r1,#0x0]
081009EE: 0969         ldr r1,[r1,#0x10]
081009F0: 4161         str r1,[r0,#0x14]
081009F2: 7047         bx lr
