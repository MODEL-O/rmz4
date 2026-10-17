; undefined FUN_080844ec(void)
; entry 0x80844ec  size 46 bytes

080844EC: 10b5         push {r4,lr}
080844EE: 041c         add r4,r0,#0x0
080844F0: 98f77efd     bl 0x0801cff0
080844F4: a06d         ldr r0,[r4,#0x58]
080844F6: 0949         ldr r1,[0x0808451c]
080844F8: 4018         add r0,r0,r1
080844FA: a065         str r0,[r4,#0x58]
080844FC: 211c         add r1,r4,#0x0
080844FE: b431         add r1,#0xb4
08084500: 4968         ldr r1,[r1,#0x4]
08084502: 8842         cmp r0,r1
08084504: 06da         bge 0x08084514
08084506: a165         str r1,[r4,#0x58]
08084508: 0020         mov r0,#0x0
0808450A: 0221         mov r1,#0x2
0808450C: 6173         strb r1,[r4,#0xd]
0808450E: a073         strb r0,[r4,#0xe]
08084510: 7f20         mov r0,#0x7f
08084512: e074         strb r0,[r4,#0x13]
08084514: 10bc         pop {r4}
08084516: 01bc         pop {r0}
08084518: 0047         bx r0
