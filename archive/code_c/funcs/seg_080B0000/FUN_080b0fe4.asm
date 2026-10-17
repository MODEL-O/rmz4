; undefined FUN_080b0fe4(void)
; entry 0x80b0fe4  size 28 bytes

080B0FE4: 827a         ldrb r2,[r0,#0xa]
080B0FE6: fe21         mov r1,#0xfe
080B0FE8: 1140         and r1,r2
080B0FEA: 8172         strb r1,[r0,#0xa]
080B0FEC: 044a         ldr r2,[0x080b1000]
080B0FEE: 417a         ldrb r1,[r0,#0x9]
080B0FF0: 8900         lsl r1,r1,#0x2
080B0FF2: 8918         add r1,r1,r2
080B0FF4: 0422         mov r2,#0x4
080B0FF6: c260         str r2,[r0,#0xc]
080B0FF8: 0968         ldr r1,[r1,#0x0]
080B0FFA: 0969         ldr r1,[r1,#0x10]
080B0FFC: 4161         str r1,[r0,#0x14]
080B0FFE: 7047         bx lr
