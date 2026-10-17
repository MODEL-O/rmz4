; undefined FUN_080b8d64(void)
; entry 0x80b8d64  size 60 bytes

080B8D64: f0b5         push {r4,r5,r6,r7,lr}
080B8D66: 82b0         sub sp,#0x8
080B8D68: 817a         ldrb r1,[r0,#0xa]
080B8D6A: 0909         lsr r1,r1,#0x4
080B8D6C: 0122         mov r2,#0x1
080B8D6E: 1140         and r1,r2
080B8D70: 426d         ldr r2,[r0,#0x54]
080B8D72: 0092         str r2,[sp,#0x0]
080B8D74: 806d         ldr r0,[r0,#0x58]
080B8D76: 0190         str r0,[sp,#0x4]
080B8D78: 0801         lsl r0,r1,#0x4
080B8D7A: 0143         orr r1,r0
080B8D7C: 0e06         lsl r6,r1,#0x18
080B8D7E: 0025         mov r5,#0x0
080B8D80: 074f         ldr r7,[0x080b8da0]
080B8D82: 0324         mov r4,#0x3
080B8D84: e919         add r1,r5,r7
080B8D86: 6846         mov r0,sp
080B8D88: 0022         mov r2,#0x0
080B8D8A: 330e         lsr r3,r6,#0x18
080B8D8C: 1bf07eff     bl 0x080d4c8c
080B8D90: 1c35         add r5,#0x1c
080B8D92: 013c         sub r4,#0x1
080B8D94: 002c         cmp r4,#0x0
080B8D96: f5da         bge 0x080b8d84
080B8D98: 02b0         add sp,#0x8
080B8D9A: f0bc         pop {r4,r5,r6,r7}
080B8D9C: 01bc         pop {r0}
080B8D9E: 0047         bx r0
