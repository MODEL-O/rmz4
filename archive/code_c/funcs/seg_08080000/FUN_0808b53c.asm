; undefined FUN_0808b53c(void)
; entry 0x808b53c  size 48 bytes

0808B53C: 30b5         push {r4,r5,lr}
0808B53E: 041c         add r4,r0,#0x0
0808B540: 211c         add r1,r4,#0x0
0808B542: b931         add r1,#0xb9
0808B544: 0025         mov r5,#0x0
0808B546: 6020         mov r0,#0x60
0808B548: 0870         strb r0,[r1,#0x0]
0808B54A: 201c         add r0,r4,#0x0
0808B54C: b830         add r0,#0xb8
0808B54E: 0178         ldrb r1,[r0,#0x0]
0808B550: 201c         add r0,r4,#0x0
0808B552: 00f035fb     bl 0x0808bbc0
0808B556: 0120         mov r0,#0x1
0808B558: a073         strb r0,[r4,#0xe]
0808B55A: e573         strb r5,[r4,#0xf]
0808B55C: 0348         ldr r0,[0x0808b56c]
0808B55E: 4168         ldr r1,[r0,#0x4]
0808B560: 201c         add r0,r4,#0x0
0808B562: 9df00dfd     bl 0x08128f80
0808B566: 30bc         pop {r4,r5}
0808B568: 01bc         pop {r0}
0808B56A: 0047         bx r0
