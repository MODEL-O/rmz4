; undefined FUN_0808b780(void)
; entry 0x808b780  size 40 bytes

0808B780: 10b5         push {r4,lr}
0808B782: 041c         add r4,r0,#0x0
0808B784: e07b         ldrb r0,[r4,#0xf]
0808B786: 0028         cmp r0,#0x0
0808B788: 01d1         bne 0x0808b78e
0808B78A: 0130         add r0,#0x1
0808B78C: e073         strb r0,[r4,#0xf]
0808B78E: 201c         add r0,r4,#0x0
0808B790: 00f092fa     bl 0x0808bcb8
0808B794: 0128         cmp r0,#0x1
0808B796: 04d1         bne 0x0808b7a2
0808B798: 0021         mov r1,#0x0
0808B79A: 0220         mov r0,#0x2
0808B79C: 6073         strb r0,[r4,#0xd]
0808B79E: a173         strb r1,[r4,#0xe]
0808B7A0: e173         strb r1,[r4,#0xf]
0808B7A2: 10bc         pop {r4}
0808B7A4: 01bc         pop {r0}
0808B7A6: 0047         bx r0
