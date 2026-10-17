; undefined FUN_080bede0(void)
; entry 0x80bede0  size 72 bytes

080BEDE0: 30b5         push {r4,r5,lr}
080BEDE2: 051c         add r5,r0,#0x0
080BEDE4: 1048         ldr r0,[0x080bee28]
080BEDE6: 0068         ldr r0,[r0,#0x0]
080BEDE8: 46f78afb     bl 0x08005500
080BEDEC: 041c         add r4,r0,#0x0
080BEDEE: 002c         cmp r4,#0x0
080BEDF0: 16d0         beq 0x080bee20
080BEDF2: 211c         add r1,r4,#0x0
080BEDF4: 2531         add r1,#0x25
080BEDF6: 0023         mov r3,#0x0
080BEDF8: 0820         mov r0,#0x8
080BEDFA: 0870         strb r0,[r1,#0x0]
080BEDFC: 0b49         ldr r1,[0x080bee2c]
080BEDFE: 0620         mov r0,#0x6
080BEE00: 6072         strb r0,[r4,#0x9]
080BEE02: 8869         ldr r0,[r1,#0x18]
080BEE04: 0068         ldr r0,[r0,#0x0]
080BEE06: 6061         str r0,[r4,#0x14]
080BEE08: 0022         mov r2,#0x0
080BEE0A: 2384         strh r3,[r4,#0x20]
080BEE0C: 201c         add r0,r4,#0x0
080BEE0E: 2230         add r0,#0x22
080BEE10: 0270         strb r2,[r0,#0x0]
080BEE12: 2868         ldr r0,[r5,#0x0]
080BEE14: 6968         ldr r1,[r5,#0x4]
080BEE16: 6065         str r0,[r4,#0x54]
080BEE18: a165         str r1,[r4,#0x58]
080BEE1A: 0320         mov r0,#0x3
080BEE1C: 2074         strb r0,[r4,#0x10]
080BEE1E: 6274         strb r2,[r4,#0x11]
080BEE20: 201c         add r0,r4,#0x0
080BEE22: 30bc         pop {r4,r5}
080BEE24: 02bc         pop {r1}
080BEE26: 0847         bx r1
