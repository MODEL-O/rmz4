; undefined FUN_080aec0c(void)
; entry 0x80aec0c  size 46 bytes

080AEC0C: 10b5         push {r4,lr}
080AEC0E: 041c         add r4,r0,#0x0
080AEC10: a07b         ldrb r0,[r4,#0xe]
080AEC12: 0028         cmp r0,#0x0
080AEC14: 01d1         bne 0x080aec1a
080AEC16: 0130         add r0,#0x1
080AEC18: a073         strb r0,[r4,#0xe]
080AEC1A: 201c         add r0,r4,#0x0
080AEC1C: 6ef7e8f9     bl 0x0801cff0
080AEC20: 201c         add r0,r4,#0x0
080AEC22: 7330         add r0,#0x73
080AEC24: 0078         ldrb r0,[r0,#0x0]
080AEC26: 0428         cmp r0,#0x4
080AEC28: 04d1         bne 0x080aec34
080AEC2A: 607b         ldrb r0,[r4,#0xd]
080AEC2C: 0130         add r0,#0x1
080AEC2E: 0021         mov r1,#0x0
080AEC30: 6073         strb r0,[r4,#0xd]
080AEC32: a173         strb r1,[r4,#0xe]
080AEC34: 10bc         pop {r4}
080AEC36: 01bc         pop {r0}
080AEC38: 0047         bx r0
