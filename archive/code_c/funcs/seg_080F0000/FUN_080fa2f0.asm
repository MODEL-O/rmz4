; undefined FUN_080fa2f0(void)
; entry 0x80fa2f0  size 28 bytes

080FA2F0: 827a         ldrb r2,[r0,#0xa]
080FA2F2: fe21         mov r1,#0xfe
080FA2F4: 1140         and r1,r2
080FA2F6: 8172         strb r1,[r0,#0xa]
080FA2F8: 044a         ldr r2,[0x080fa30c]
080FA2FA: 417a         ldrb r1,[r0,#0x9]
080FA2FC: 8900         lsl r1,r1,#0x2
080FA2FE: 8918         add r1,r1,r2
080FA300: 0422         mov r2,#0x4
080FA302: c260         str r2,[r0,#0xc]
080FA304: 0968         ldr r1,[r1,#0x0]
080FA306: 0969         ldr r1,[r1,#0x10]
080FA308: 4161         str r1,[r0,#0x14]
080FA30A: 7047         bx lr
