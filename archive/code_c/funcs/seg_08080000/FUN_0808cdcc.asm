; undefined FUN_0808cdcc(void)
; entry 0x808cdcc  size 60 bytes

0808CDCC: f0b5         push {r4,r5,r6,r7,lr}
0808CDCE: 82b0         sub sp,#0x8
0808CDD0: 817a         ldrb r1,[r0,#0xa]
0808CDD2: 0909         lsr r1,r1,#0x4
0808CDD4: 0122         mov r2,#0x1
0808CDD6: 1140         and r1,r2
0808CDD8: 426d         ldr r2,[r0,#0x54]
0808CDDA: 0092         str r2,[sp,#0x0]
0808CDDC: 806d         ldr r0,[r0,#0x58]
0808CDDE: 0190         str r0,[sp,#0x4]
0808CDE0: 0801         lsl r0,r1,#0x4
0808CDE2: 0143         orr r1,r0
0808CDE4: 0e06         lsl r6,r1,#0x18
0808CDE6: 0025         mov r5,#0x0
0808CDE8: 074f         ldr r7,[0x0808ce08]
0808CDEA: 0124         mov r4,#0x1
0808CDEC: e919         add r1,r5,r7
0808CDEE: 6846         mov r0,sp
0808CDF0: 0022         mov r2,#0x0
0808CDF2: 330e         lsr r3,r6,#0x18
0808CDF4: 47f04aff     bl 0x080d4c8c
0808CDF8: 1c35         add r5,#0x1c
0808CDFA: 013c         sub r4,#0x1
0808CDFC: 002c         cmp r4,#0x0
0808CDFE: f5da         bge 0x0808cdec
0808CE00: 02b0         add sp,#0x8
0808CE02: f0bc         pop {r4,r5,r6,r7}
0808CE04: 01bc         pop {r0}
0808CE06: 0047         bx r0
