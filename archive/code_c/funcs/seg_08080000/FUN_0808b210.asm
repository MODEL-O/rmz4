; undefined FUN_0808b210(void)
; entry 0x808b210  size 36 bytes

0808B210: 00b5         push {lr}
0808B212: 021c         add r2,r0,#0x0
0808B214: 0906         lsl r1,r1,#0x18
0808B216: 131c         add r3,r2,#0x0
0808B218: b533         add r3,#0xb5
0808B21A: 1a78         ldrb r2,[r3,#0x0]
0808B21C: 0132         add r2,#0x1
0808B21E: 1a70         strb r2,[r3,#0x0]
0808B220: 1206         lsl r2,r2,#0x18
0808B222: 8a42         cmp r2,r1
0808B224: 04d3         bcc 0x0808b230
0808B226: 0020         mov r0,#0x0
0808B228: 1870         strb r0,[r3,#0x0]
0808B22A: 0248         ldr r0,[0x0808b234]
0808B22C: 77f770fc     bl 0x08002b10
0808B230: 02bc         pop {r1}
0808B232: 0847         bx r1
