; undefined FUN_0811d8c4(void)
; entry 0x811d8c4  size 42 bytes

0811D8C4: 10b5         push {r4,lr}
0811D8C6: 0022         mov r2,#0x0
0811D8C8: 0949         ldr r1,[0x0811d8f0]
0811D8CA: 4318         add r3,r0,r1
0811D8CC: ff24         mov r4,#0xff
0811D8CE: 9818         add r0,r3,r2
0811D8D0: 0178         ldrb r1,[r0,#0x0]
0811D8D2: 2143         orr r1,r4
0811D8D4: 0170         strb r1,[r0,#0x0]
0811D8D6: 501c         add r0,r2,#0x1
0811D8D8: 0006         lsl r0,r0,#0x18
0811D8DA: 020e         lsr r2,r0,#0x18
0811D8DC: 032a         cmp r2,#0x3
0811D8DE: f6d9         bls 0x0811d8ce
0811D8E0: 0620         mov r0,#0x6
0811D8E2: ebf7f7fa     bl 0x08108ed4
0811D8E6: 0120         mov r0,#0x1
0811D8E8: 10bc         pop {r4}
0811D8EA: 02bc         pop {r1}
0811D8EC: 0847         bx r1
