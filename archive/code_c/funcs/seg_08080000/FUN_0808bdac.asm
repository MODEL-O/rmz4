; undefined FUN_0808bdac(void)
; entry 0x808bdac  size 60 bytes

0808BDAC: f0b5         push {r4,r5,r6,r7,lr}
0808BDAE: 82b0         sub sp,#0x8
0808BDB0: 817a         ldrb r1,[r0,#0xa]
0808BDB2: 0909         lsr r1,r1,#0x4
0808BDB4: 0122         mov r2,#0x1
0808BDB6: 1140         and r1,r2
0808BDB8: 426d         ldr r2,[r0,#0x54]
0808BDBA: 0092         str r2,[sp,#0x0]
0808BDBC: 806d         ldr r0,[r0,#0x58]
0808BDBE: 0190         str r0,[sp,#0x4]
0808BDC0: 0801         lsl r0,r1,#0x4
0808BDC2: 0143         orr r1,r0
0808BDC4: 0e06         lsl r6,r1,#0x18
0808BDC6: 0025         mov r5,#0x0
0808BDC8: 074f         ldr r7,[0x0808bde8]
0808BDCA: 0124         mov r4,#0x1
0808BDCC: e919         add r1,r5,r7
0808BDCE: 6846         mov r0,sp
0808BDD0: 0022         mov r2,#0x0
0808BDD2: 330e         lsr r3,r6,#0x18
0808BDD4: 48f05aff     bl 0x080d4c8c
0808BDD8: 1c35         add r5,#0x1c
0808BDDA: 013c         sub r4,#0x1
0808BDDC: 002c         cmp r4,#0x0
0808BDDE: f5da         bge 0x0808bdcc
0808BDE0: 02b0         add sp,#0x8
0808BDE2: f0bc         pop {r4,r5,r6,r7}
0808BDE4: 01bc         pop {r0}
0808BDE6: 0047         bx r0
