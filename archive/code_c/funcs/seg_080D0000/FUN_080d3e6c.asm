; undefined FUN_080d3e6c(void)
; entry 0x80d3e6c  size 46 bytes

080D3E6C: 836a         ldr r3,[r0,#0x28]
080D3E6E: 827a         ldrb r2,[r0,#0xa]
080D3E70: fe21         mov r1,#0xfe
080D3E72: 1140         and r1,r2
080D3E74: 8172         strb r1,[r0,#0xa]
080D3E76: a121         mov r1,#0xa1
080D3E78: 4900         lsl r1,r1,#0x1
080D3E7A: 5b18         add r3,r3,r1
080D3E7C: 1a78         ldrb r2,[r3,#0x0]
080D3E7E: 0521         mov r1,#0x5
080D3E80: 4942         rsb r1,r1
080D3E82: 1140         and r1,r2
080D3E84: 1970         strb r1,[r3,#0x0]
080D3E86: 054a         ldr r2,[0x080d3e9c]
080D3E88: 417a         ldrb r1,[r0,#0x9]
080D3E8A: 8900         lsl r1,r1,#0x2
080D3E8C: 8918         add r1,r1,r2
080D3E8E: 0422         mov r2,#0x4
080D3E90: c260         str r2,[r0,#0xc]
080D3E92: 0968         ldr r1,[r1,#0x0]
080D3E94: 0969         ldr r1,[r1,#0x10]
080D3E96: 4161         str r1,[r0,#0x14]
080D3E98: 7047         bx lr
