; undefined FUN_080853f8(void)
; entry 0x80853f8  size 32 bytes

080853F8: 00b5         push {lr}
080853FA: 426d         ldr r2,[r0,#0x54]
080853FC: 816d         ldr r1,[r0,#0x58]
080853FE: 8020         mov r0,#0x80
08085400: 0001         lsl r0,r0,#0x4
08085402: 0918         add r1,r1,r0
08085404: 101c         add r0,r2,#0x0
08085406: 82f7d5fc     bl 0x08007db4
0808540A: 0028         cmp r0,#0x0
0808540C: 01db         blt 0x08085412
0808540E: 0020         mov r0,#0x0
08085410: 00e0         b 0x08085414
08085412: 0120         mov r0,#0x1
08085414: 02bc         pop {r1}
08085416: 0847         bx r1
