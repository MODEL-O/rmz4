; undefined FUN_0808580c(void)
; entry 0x808580c  size 28 bytes

0808580C: 10b5         push {r4,lr}
0808580E: 041c         add r4,r0,#0x0
08085810: fff7f2fd     bl 0x080853f8
08085814: 0006         lsl r0,r0,#0x18
08085816: 010e         lsr r1,r0,#0x18
08085818: 0029         cmp r1,#0x0
0808581A: 02d1         bne 0x08085822
0808581C: 0520         mov r0,#0x5
0808581E: 6073         strb r0,[r4,#0xd]
08085820: a173         strb r1,[r4,#0xe]
08085822: 10bc         pop {r4}
08085824: 01bc         pop {r0}
08085826: 0047         bx r0
