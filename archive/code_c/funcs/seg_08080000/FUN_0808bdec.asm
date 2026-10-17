; undefined FUN_0808bdec(void)
; entry 0x808bdec  size 60 bytes

0808BDEC: f0b5         push {r4,r5,r6,r7,lr}
0808BDEE: 82b0         sub sp,#0x8
0808BDF0: 817a         ldrb r1,[r0,#0xa]
0808BDF2: 0909         lsr r1,r1,#0x4
0808BDF4: 0122         mov r2,#0x1
0808BDF6: 1140         and r1,r2
0808BDF8: 426d         ldr r2,[r0,#0x54]
0808BDFA: 0092         str r2,[sp,#0x0]
0808BDFC: 806d         ldr r0,[r0,#0x58]
0808BDFE: 0190         str r0,[sp,#0x4]
0808BE00: 0801         lsl r0,r1,#0x4
0808BE02: 0143         orr r1,r0
0808BE04: 0e06         lsl r6,r1,#0x18
0808BE06: 0025         mov r5,#0x0
0808BE08: 074f         ldr r7,[0x0808be28]
0808BE0A: 0224         mov r4,#0x2
0808BE0C: e919         add r1,r5,r7
0808BE0E: 6846         mov r0,sp
0808BE10: 0022         mov r2,#0x0
0808BE12: 330e         lsr r3,r6,#0x18
0808BE14: 48f03aff     bl 0x080d4c8c
0808BE18: 1c35         add r5,#0x1c
0808BE1A: 013c         sub r4,#0x1
0808BE1C: 002c         cmp r4,#0x0
0808BE1E: f5da         bge 0x0808be0c
0808BE20: 02b0         add sp,#0x8
0808BE22: f0bc         pop {r4,r5,r6,r7}
0808BE24: 01bc         pop {r0}
0808BE26: 0047         bx r0
