; undefined FUN_0808e63c(void)
; entry 0x808e63c  size 58 bytes

0808E63C: 00b5         push {lr}
0808E63E: 021c         add r2,r0,#0x0
0808E640: 906a         ldr r0,[r2,#0x28]
0808E642: 007b         ldrb r0,[r0,#0xc]
0808E644: 0128         cmp r0,#0x1
0808E646: 0fd9         bls 0x0808e668
0808E648: 0649         ldr r1,[0x0808e664]
0808E64A: 507a         ldrb r0,[r2,#0x9]
0808E64C: 8000         lsl r0,r0,#0x2
0808E64E: 4018         add r0,r0,r1
0808E650: 0221         mov r1,#0x2
0808E652: d160         str r1,[r2,#0xc]
0808E654: 0068         ldr r0,[r0,#0x0]
0808E656: 8068         ldr r0,[r0,#0x8]
0808E658: 5061         str r0,[r2,#0x14]
0808E65A: 101c         add r0,r2,#0x0
0808E65C: 00f040f8     bl 0x0808e6e0
0808E660: 0ae0         b 0x0808e678
0808E668: 0448         ldr r0,[0x0808e67c]
0808E66A: 517b         ldrb r1,[r2,#0xd]
0808E66C: 8900         lsl r1,r1,#0x2
0808E66E: 0918         add r1,r1,r0
0808E670: 0968         ldr r1,[r1,#0x0]
0808E672: 101c         add r0,r2,#0x0
0808E674: 9af084fc     bl 0x08128f80
0808E678: 01bc         pop {r0}
0808E67A: 0047         bx r0
