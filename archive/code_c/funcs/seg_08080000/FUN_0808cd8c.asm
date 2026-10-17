; undefined FUN_0808cd8c(void)
; entry 0x808cd8c  size 60 bytes

0808CD8C: f0b5         push {r4,r5,r6,r7,lr}
0808CD8E: 82b0         sub sp,#0x8
0808CD90: 817a         ldrb r1,[r0,#0xa]
0808CD92: 0909         lsr r1,r1,#0x4
0808CD94: 0122         mov r2,#0x1
0808CD96: 1140         and r1,r2
0808CD98: 426d         ldr r2,[r0,#0x54]
0808CD9A: 0092         str r2,[sp,#0x0]
0808CD9C: 806d         ldr r0,[r0,#0x58]
0808CD9E: 0190         str r0,[sp,#0x4]
0808CDA0: 0801         lsl r0,r1,#0x4
0808CDA2: 0143         orr r1,r0
0808CDA4: 0e06         lsl r6,r1,#0x18
0808CDA6: 0025         mov r5,#0x0
0808CDA8: 074f         ldr r7,[0x0808cdc8]
0808CDAA: 0224         mov r4,#0x2
0808CDAC: e919         add r1,r5,r7
0808CDAE: 6846         mov r0,sp
0808CDB0: 0022         mov r2,#0x0
0808CDB2: 330e         lsr r3,r6,#0x18
0808CDB4: 47f06aff     bl 0x080d4c8c
0808CDB8: 1c35         add r5,#0x1c
0808CDBA: 013c         sub r4,#0x1
0808CDBC: 002c         cmp r4,#0x0
0808CDBE: f5da         bge 0x0808cdac
0808CDC0: 02b0         add sp,#0x8
0808CDC2: f0bc         pop {r4,r5,r6,r7}
0808CDC4: 01bc         pop {r0}
0808CDC6: 0047         bx r0
