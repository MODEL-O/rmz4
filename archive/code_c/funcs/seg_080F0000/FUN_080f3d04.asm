; undefined FUN_080f3d04(void)
; entry 0x80f3d04  size 56 bytes

080F3D04: 00b5         push {lr}
080F3D06: 827a         ldrb r2,[r0,#0xa]
080F3D08: 0221         mov r1,#0x2
080F3D0A: 1143         orr r1,r2
080F3D0C: 8172         strb r1,[r0,#0xa]
080F3D0E: c27a         ldrb r2,[r0,#0xb]
080F3D10: 0821         mov r1,#0x8
080F3D12: 1143         orr r1,r2
080F3D14: c172         strb r1,[r0,#0xb]
080F3D16: 017c         ldrb r1,[r0,#0x10]
080F3D18: c900         lsl r1,r1,#0x3
080F3D1A: 084a         ldr r2,[0x080f3d3c]
080F3D1C: 8918         add r1,r1,r2
080F3D1E: 0163         str r1,[r0,#0x30]
080F3D20: 0123         mov r3,#0x1
080F3D22: c384         strh r3,[r0,#0x26]
080F3D24: 064a         ldr r2,[0x080f3d40]
080F3D26: 417a         ldrb r1,[r0,#0x9]
080F3D28: 8900         lsl r1,r1,#0x2
080F3D2A: 8918         add r1,r1,r2
080F3D2C: c360         str r3,[r0,#0xc]
080F3D2E: 0968         ldr r1,[r1,#0x0]
080F3D30: 4968         ldr r1,[r1,#0x4]
080F3D32: 4161         str r1,[r0,#0x14]
080F3D34: 00f006f8     bl 0x080f3d44
080F3D38: 01bc         pop {r0}
080F3D3A: 0047         bx r0
