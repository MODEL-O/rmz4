; undefined FUN_0808ce0c(void)
; entry 0x808ce0c  size 60 bytes

0808CE0C: f0b5         push {r4,r5,r6,r7,lr}
0808CE0E: 82b0         sub sp,#0x8
0808CE10: 817a         ldrb r1,[r0,#0xa]
0808CE12: 0909         lsr r1,r1,#0x4
0808CE14: 0122         mov r2,#0x1
0808CE16: 1140         and r1,r2
0808CE18: 426d         ldr r2,[r0,#0x54]
0808CE1A: 0092         str r2,[sp,#0x0]
0808CE1C: 806d         ldr r0,[r0,#0x58]
0808CE1E: 0190         str r0,[sp,#0x4]
0808CE20: 0801         lsl r0,r1,#0x4
0808CE22: 0143         orr r1,r0
0808CE24: 0e06         lsl r6,r1,#0x18
0808CE26: 0025         mov r5,#0x0
0808CE28: 074f         ldr r7,[0x0808ce48]
0808CE2A: 0224         mov r4,#0x2
0808CE2C: e919         add r1,r5,r7
0808CE2E: 6846         mov r0,sp
0808CE30: 0022         mov r2,#0x0
0808CE32: 330e         lsr r3,r6,#0x18
0808CE34: 47f02aff     bl 0x080d4c8c
0808CE38: 1c35         add r5,#0x1c
0808CE3A: 013c         sub r4,#0x1
0808CE3C: 002c         cmp r4,#0x0
0808CE3E: f5da         bge 0x0808ce2c
0808CE40: 02b0         add sp,#0x8
0808CE42: f0bc         pop {r4,r5,r6,r7}
0808CE44: 01bc         pop {r0}
0808CE46: 0047         bx r0
