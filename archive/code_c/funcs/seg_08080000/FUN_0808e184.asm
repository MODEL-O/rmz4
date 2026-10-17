; undefined FUN_0808e184(void)
; entry 0x808e184  size 58 bytes

0808E184: 00b5         push {lr}
0808E186: 021c         add r2,r0,#0x0
0808E188: 906a         ldr r0,[r2,#0x28]
0808E18A: 007b         ldrb r0,[r0,#0xc]
0808E18C: 0128         cmp r0,#0x1
0808E18E: 0fd9         bls 0x0808e1b0
0808E190: 0649         ldr r1,[0x0808e1ac]
0808E192: 507a         ldrb r0,[r2,#0x9]
0808E194: 8000         lsl r0,r0,#0x2
0808E196: 4018         add r0,r0,r1
0808E198: 0221         mov r1,#0x2
0808E19A: d160         str r1,[r2,#0xc]
0808E19C: 0068         ldr r0,[r0,#0x0]
0808E19E: 8068         ldr r0,[r0,#0x8]
0808E1A0: 5061         str r0,[r2,#0x14]
0808E1A2: 101c         add r0,r2,#0x0
0808E1A4: 00f09cfa     bl 0x0808e6e0
0808E1A8: 0ae0         b 0x0808e1c0
0808E1B0: 0448         ldr r0,[0x0808e1c4]
0808E1B2: 517b         ldrb r1,[r2,#0xd]
0808E1B4: 8900         lsl r1,r1,#0x2
0808E1B6: 0918         add r1,r1,r0
0808E1B8: 0968         ldr r1,[r1,#0x0]
0808E1BA: 101c         add r0,r2,#0x0
0808E1BC: 9af0e0fe     bl 0x08128f80
0808E1C0: 01bc         pop {r0}
0808E1C2: 0047         bx r0
