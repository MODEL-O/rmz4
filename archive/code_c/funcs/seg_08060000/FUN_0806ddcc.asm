; undefined FUN_0806ddcc(void)
; entry 0x806ddcc  size 72 bytes

0806DDCC: 10b5         push {r4,lr}
0806DDCE: 041c         add r4,r0,#0x0
0806DDD0: e07b         ldrb r0,[r4,#0xf]
0806DDD2: 0028         cmp r0,#0x0
0806DDD4: 0fd1         bne 0x0806ddf6
0806DDD6: b520         mov r0,#0xb5
0806DDD8: 4000         lsl r0,r0,#0x1
0806DDDA: 94f799fe     bl 0x08002b10
0806DDDE: 201c         add r0,r4,#0x0
0806DDE0: 7430         add r0,#0x74
0806DDE2: 0c49         ldr r1,[0x0806de14]
0806DDE4: 97f7cefc     bl 0x08005784
0806DDE8: 0b49         ldr r1,[0x0806de18]
0806DDEA: 201c         add r0,r4,#0x0
0806DDEC: aff788f8     bl 0x0801cf00
0806DDF0: e07b         ldrb r0,[r4,#0xf]
0806DDF2: 0130         add r0,#0x1
0806DDF4: e073         strb r0,[r4,#0xf]
0806DDF6: 201c         add r0,r4,#0x0
0806DDF8: aff7faf8     bl 0x0801cff0
0806DDFC: 0748         ldr r0,[0x0806de1c]
0806DDFE: 807c         ldrb r0,[r0,#0x12]
0806DE00: 0121         mov r1,#0x1
0806DE02: 0140         and r1,r0
0806DE04: 0029         cmp r1,#0x0
0806DE06: 02d1         bne 0x0806de0e
0806DE08: 0320         mov r0,#0x3
0806DE0A: a073         strb r0,[r4,#0xe]
0806DE0C: e173         strb r1,[r4,#0xf]
0806DE0E: 10bc         pop {r4}
0806DE10: 01bc         pop {r0}
0806DE12: 0047         bx r0
