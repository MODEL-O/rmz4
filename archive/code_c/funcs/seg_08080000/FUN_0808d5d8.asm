; undefined FUN_0808d5d8(void)
; entry 0x808d5d8  size 74 bytes

0808D5D8: f0b5         push {r4,r5,r6,r7,lr}
0808D5DA: 041c         add r4,r0,#0x0
0808D5DC: 261c         add r6,r4,#0x0
0808D5DE: 7436         add r6,#0x74
0808D5E0: 0d4f         ldr r7,[0x0808d618]
0808D5E2: 301c         add r0,r6,#0x0
0808D5E4: 391c         add r1,r7,#0x0
0808D5E6: 78f7cdf8     bl 0x08005784
0808D5EA: 251c         add r5,r4,#0x0
0808D5EC: bc35         add r5,#0xbc
0808D5EE: 2868         ldr r0,[r5,#0x0]
0808D5F0: 9df7f8fe     bl 0x0802b3e4
0808D5F4: 0028         cmp r0,#0x0
0808D5F6: 13d0         beq 0x0808d620
0808D5F8: 391c         add r1,r7,#0x0
0808D5FA: c039         sub r1,#0xc0
0808D5FC: 301c         add r0,r6,#0x0
0808D5FE: 78f7c1f8     bl 0x08005784
0808D602: 0021         mov r1,#0x0
0808D604: 2960         str r1,[r5,#0x0]
0808D606: 201c         add r0,r4,#0x0
0808D608: c130         add r0,#0xc1
0808D60A: 0078         ldrb r0,[r0,#0x0]
0808D60C: 0128         cmp r0,#0x1
0808D60E: 05d1         bne 0x0808d61c
0808D610: 201c         add r0,r4,#0x0
0808D612: 00f07ffa     bl 0x0808db14
0808D616: 03e0         b 0x0808d620
0808D61C: 6173         strb r1,[r4,#0xd]
0808D61E: a173         strb r1,[r4,#0xe]
0808D620: f0bc         pop {r4,r5,r6,r7}
0808D622: 01bc         pop {r0}
0808D624: 0047         bx r0
