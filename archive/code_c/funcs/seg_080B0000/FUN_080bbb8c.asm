; undefined FUN_080bbb8c(void)
; entry 0x80bbb8c  size 66 bytes

080BBB8C: 10b5         push {r4,lr}
080BBB8E: 041c         add r4,r0,#0x0
080BBB90: e07b         ldrb r0,[r4,#0xf]
080BBB92: 0028         cmp r0,#0x0
080BBB94: 0bd1         bne 0x080bbbae
080BBB96: 201c         add r0,r4,#0x0
080BBB98: 7430         add r0,#0x74
080BBB9A: 0d49         ldr r1,[0x080bbbd0]
080BBB9C: 49f7f2fd     bl 0x08005784
080BBBA0: 0c49         ldr r1,[0x080bbbd4]
080BBBA2: 201c         add r0,r4,#0x0
080BBBA4: 61f7acf9     bl 0x0801cf00
080BBBA8: e07b         ldrb r0,[r4,#0xf]
080BBBAA: 0130         add r0,#0x1
080BBBAC: e073         strb r0,[r4,#0xf]
080BBBAE: 201c         add r0,r4,#0x0
080BBBB0: 61f71efa     bl 0x0801cff0
080BBBB4: 201c         add r0,r4,#0x0
080BBBB6: 7330         add r0,#0x73
080BBBB8: 0078         ldrb r0,[r0,#0x0]
080BBBBA: 0328         cmp r0,#0x3
080BBBBC: 04d1         bne 0x080bbbc8
080BBBBE: 0021         mov r1,#0x0
080BBBC0: 0620         mov r0,#0x6
080BBBC2: 6073         strb r0,[r4,#0xd]
080BBBC4: a173         strb r1,[r4,#0xe]
080BBBC6: e173         strb r1,[r4,#0xf]
080BBBC8: 10bc         pop {r4}
080BBBCA: 01bc         pop {r0}
080BBBCC: 0047         bx r0
