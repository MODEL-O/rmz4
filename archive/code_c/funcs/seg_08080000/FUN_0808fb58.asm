; undefined FUN_0808fb58(void)
; entry 0x808fb58  size 60 bytes

0808FB58: f0b5         push {r4,r5,r6,r7,lr}
0808FB5A: 82b0         sub sp,#0x8
0808FB5C: 817a         ldrb r1,[r0,#0xa]
0808FB5E: 0909         lsr r1,r1,#0x4
0808FB60: 0122         mov r2,#0x1
0808FB62: 1140         and r1,r2
0808FB64: 426d         ldr r2,[r0,#0x54]
0808FB66: 0092         str r2,[sp,#0x0]
0808FB68: 806d         ldr r0,[r0,#0x58]
0808FB6A: 0190         str r0,[sp,#0x4]
0808FB6C: 0801         lsl r0,r1,#0x4
0808FB6E: 0143         orr r1,r0
0808FB70: 0e06         lsl r6,r1,#0x18
0808FB72: 0025         mov r5,#0x0
0808FB74: 074f         ldr r7,[0x0808fb94]
0808FB76: 0224         mov r4,#0x2
0808FB78: e919         add r1,r5,r7
0808FB7A: 6846         mov r0,sp
0808FB7C: 0022         mov r2,#0x0
0808FB7E: 330e         lsr r3,r6,#0x18
0808FB80: 45f084f8     bl 0x080d4c8c
0808FB84: 1c35         add r5,#0x1c
0808FB86: 013c         sub r4,#0x1
0808FB88: 002c         cmp r4,#0x0
0808FB8A: f5da         bge 0x0808fb78
0808FB8C: 02b0         add sp,#0x8
0808FB8E: f0bc         pop {r4,r5,r6,r7}
0808FB90: 01bc         pop {r0}
0808FB92: 0047         bx r0
