; undefined FUN_080ea944(void)
; entry 0x80ea944  size 50 bytes

080EA944: 10b5         push {r4,lr}
080EA946: 041c         add r4,r0,#0x0
080EA948: 607a         ldrb r0,[r4,#0x9]
080EA94A: 0228         cmp r0,#0x2
080EA94C: 10d1         bne 0x080ea970
080EA94E: 211c         add r1,r4,#0x0
080EA950: b831         add r1,#0xb8
080EA952: 0878         ldrb r0,[r1,#0x0]
080EA954: 1428         cmp r0,#0x14
080EA956: 0bd0         beq 0x080ea970
080EA958: 1420         mov r0,#0x14
080EA95A: 0870         strb r0,[r1,#0x0]
080EA95C: 0002         lsl r0,r0,#0x8
080EA95E: 4839         sub r1,#0x48
080EA960: 0978         ldrb r1,[r1,#0x0]
080EA962: 0143         orr r1,r0
080EA964: 201c         add r0,r4,#0x0
080EA966: 32f7cbfa     bl 0x0801cf00
080EA96A: 201c         add r0,r4,#0x0
080EA96C: 32f740fb     bl 0x0801cff0
080EA970: 10bc         pop {r4}
080EA972: 01bc         pop {r0}
080EA974: 0047         bx r0
