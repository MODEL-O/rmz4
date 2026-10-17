; undefined FUN_080828f8(void)
; entry 0x80828f8  size 66 bytes

080828F8: 10b5         push {r4,lr}
080828FA: 041c         add r4,r0,#0x0
080828FC: a07b         ldrb r0,[r4,#0xe]
080828FE: 0028         cmp r0,#0x0
08082900: 02d0         beq 0x08082908
08082902: 0128         cmp r0,#0x1
08082904: 09d0         beq 0x0808291a
08082906: 15e0         b 0x08082934
08082908: 0c49         ldr r1,[0x0808293c]
0808290A: 201c         add r0,r4,#0x0
0808290C: 9af7f8fa     bl 0x0801cf00
08082910: 0c20         mov r0,#0xc
08082912: a074         strb r0,[r4,#0x12]
08082914: a07b         ldrb r0,[r4,#0xe]
08082916: 0130         add r0,#0x1
08082918: a073         strb r0,[r4,#0xe]
0808291A: a07c         ldrb r0,[r4,#0x12]
0808291C: 0138         sub r0,#0x1
0808291E: a074         strb r0,[r4,#0x12]
08082920: 0006         lsl r0,r0,#0x18
08082922: 010e         lsr r1,r0,#0x18
08082924: 0029         cmp r1,#0x0
08082926: 02d1         bne 0x0808292e
08082928: 0120         mov r0,#0x1
0808292A: 6073         strb r0,[r4,#0xd]
0808292C: a173         strb r1,[r4,#0xe]
0808292E: 201c         add r0,r4,#0x0
08082930: 9af75efb     bl 0x0801cff0
08082934: 10bc         pop {r4}
08082936: 01bc         pop {r0}
08082938: 0047         bx r0
