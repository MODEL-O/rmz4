; undefined FUN_080ba150(void)
; entry 0x80ba150  size 76 bytes

080BA150: 10b5         push {r4,lr}
080BA152: 041c         add r4,r0,#0x0
080BA154: e07b         ldrb r0,[r4,#0xf]
080BA156: 0028         cmp r0,#0x0
080BA158: 0dd1         bne 0x080ba176
080BA15A: 201c         add r0,r4,#0x0
080BA15C: 7430         add r0,#0x74
080BA15E: 0f49         ldr r1,[0x080ba19c]
080BA160: 4bf710fb     bl 0x08005784
080BA164: 0e49         ldr r1,[0x080ba1a0]
080BA166: 201c         add r0,r4,#0x0
080BA168: 62f7cafe     bl 0x0801cf00
080BA16C: 1020         mov r0,#0x10
080BA16E: a074         strb r0,[r4,#0x12]
080BA170: e07b         ldrb r0,[r4,#0xf]
080BA172: 0130         add r0,#0x1
080BA174: e073         strb r0,[r4,#0xf]
080BA176: 201c         add r0,r4,#0x0
080BA178: 62f73aff     bl 0x0801cff0
080BA17C: a07c         ldrb r0,[r4,#0x12]
080BA17E: 0028         cmp r0,#0x0
080BA180: 04d0         beq 0x080ba18c
080BA182: 0138         sub r0,#0x1
080BA184: a074         strb r0,[r4,#0x12]
080BA186: 0006         lsl r0,r0,#0x18
080BA188: 0028         cmp r0,#0x0
080BA18A: 04d1         bne 0x080ba196
080BA18C: 0021         mov r1,#0x0
080BA18E: 0220         mov r0,#0x2
080BA190: 6073         strb r0,[r4,#0xd]
080BA192: a173         strb r1,[r4,#0xe]
080BA194: e173         strb r1,[r4,#0xf]
080BA196: 10bc         pop {r4}
080BA198: 01bc         pop {r0}
080BA19A: 0047         bx r0
