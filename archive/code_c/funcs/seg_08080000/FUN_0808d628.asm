; undefined FUN_0808d628(void)
; entry 0x808d628  size 74 bytes

0808D628: f0b5         push {r4,r5,r6,r7,lr}
0808D62A: 041c         add r4,r0,#0x0
0808D62C: 261c         add r6,r4,#0x0
0808D62E: 7436         add r6,#0x74
0808D630: 0d4f         ldr r7,[0x0808d668]
0808D632: 301c         add r0,r6,#0x0
0808D634: 391c         add r1,r7,#0x0
0808D636: 78f7a5f8     bl 0x08005784
0808D63A: 251c         add r5,r4,#0x0
0808D63C: bc35         add r5,#0xbc
0808D63E: 2868         ldr r0,[r5,#0x0]
0808D640: 9df7d0fe     bl 0x0802b3e4
0808D644: 0028         cmp r0,#0x0
0808D646: 13d0         beq 0x0808d670
0808D648: 391c         add r1,r7,#0x0
0808D64A: c039         sub r1,#0xc0
0808D64C: 301c         add r0,r6,#0x0
0808D64E: 78f799f8     bl 0x08005784
0808D652: 0021         mov r1,#0x0
0808D654: 2960         str r1,[r5,#0x0]
0808D656: 201c         add r0,r4,#0x0
0808D658: c130         add r0,#0xc1
0808D65A: 0078         ldrb r0,[r0,#0x0]
0808D65C: 0128         cmp r0,#0x1
0808D65E: 05d1         bne 0x0808d66c
0808D660: 201c         add r0,r4,#0x0
0808D662: 00f057fa     bl 0x0808db14
0808D666: 03e0         b 0x0808d670
0808D66C: 6173         strb r1,[r4,#0xd]
0808D66E: a173         strb r1,[r4,#0xe]
0808D670: f0bc         pop {r4,r5,r6,r7}
0808D672: 01bc         pop {r0}
0808D674: 0047         bx r0
