; undefined FUN_0808bd6c(void)
; entry 0x808bd6c  size 60 bytes

0808BD6C: f0b5         push {r4,r5,r6,r7,lr}
0808BD6E: 82b0         sub sp,#0x8
0808BD70: 817a         ldrb r1,[r0,#0xa]
0808BD72: 0909         lsr r1,r1,#0x4
0808BD74: 0122         mov r2,#0x1
0808BD76: 1140         and r1,r2
0808BD78: 426d         ldr r2,[r0,#0x54]
0808BD7A: 0092         str r2,[sp,#0x0]
0808BD7C: 806d         ldr r0,[r0,#0x58]
0808BD7E: 0190         str r0,[sp,#0x4]
0808BD80: 0801         lsl r0,r1,#0x4
0808BD82: 0143         orr r1,r0
0808BD84: 0e06         lsl r6,r1,#0x18
0808BD86: 0025         mov r5,#0x0
0808BD88: 074f         ldr r7,[0x0808bda8]
0808BD8A: 0224         mov r4,#0x2
0808BD8C: e919         add r1,r5,r7
0808BD8E: 6846         mov r0,sp
0808BD90: 0022         mov r2,#0x0
0808BD92: 330e         lsr r3,r6,#0x18
0808BD94: 48f07aff     bl 0x080d4c8c
0808BD98: 1c35         add r5,#0x1c
0808BD9A: 013c         sub r4,#0x1
0808BD9C: 002c         cmp r4,#0x0
0808BD9E: f5da         bge 0x0808bd8c
0808BDA0: 02b0         add sp,#0x8
0808BDA2: f0bc         pop {r4,r5,r6,r7}
0808BDA4: 01bc         pop {r0}
0808BDA6: 0047         bx r0
