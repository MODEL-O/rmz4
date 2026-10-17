; undefined FUN_08019d8c(void)
; entry 0x8019d8c  size 52 bytes

08019D8C: 00b5         push {lr}
08019D8E: 031c         add r3,r0,#0x0
08019D90: 987b         ldrb r0,[r3,#0xe]
08019D92: 0028         cmp r0,#0x0
08019D94: 12d1         bne 0x08019dbc
08019D96: d96d         ldr r1,[r3,#0x5c]
08019D98: 0909         lsr r1,r1,#0x4
08019D9A: 4900         lsl r1,r1,#0x1
08019D9C: 0848         ldr r0,[0x08019dc0]
08019D9E: 0918         add r1,r1,r0
08019DA0: 0a88         ldrh r2,[r1,#0x0]
08019DA2: 0848         ldr r0,[0x08019dc4]
08019DA4: 1040         and r0,r2
08019DA6: 0322         mov r2,#0x3
08019DA8: 1043         orr r0,r2
08019DAA: 0880         strh r0,[r1,#0x0]
08019DAC: f020         mov r0,#0xf0
08019DAE: 4000         lsl r0,r0,#0x1
08019DB0: 1865         str r0,[r3,#0x50]
08019DB2: c020         mov r0,#0xc0
08019DB4: 9864         str r0,[r3,#0x48]
08019DB6: 987b         ldrb r0,[r3,#0xe]
08019DB8: 0130         add r0,#0x1
08019DBA: 9873         strb r0,[r3,#0xe]
08019DBC: 01bc         pop {r0}
08019DBE: 0047         bx r0
