; undefined FUN_080c5f68(void)
; entry 0x80c5f68  size 38 bytes

080C5F68: 30b5         push {r4,r5,lr}
080C5F6A: 051c         add r5,r0,#0x0
080C5F6C: 2c1c         add r4,r5,#0x0
080C5F6E: b834         add r4,#0xb8
080C5F70: 2078         ldrb r0,[r4,#0x0]
080C5F72: 0028         cmp r0,#0x0
080C5F74: 05d0         beq 0x080c5f82
080C5F76: c520         mov r0,#0xc5
080C5F78: 4000         lsl r0,r0,#0x1
080C5F7A: 3cf7effd     bl 0x08002b5c
080C5F7E: 0020         mov r0,#0x0
080C5F80: 2070         strb r0,[r4,#0x0]
080C5F82: 281c         add r0,r5,#0x0
080C5F84: f7f738fa     bl 0x080bd3f8
080C5F88: 30bc         pop {r4,r5}
080C5F8A: 01bc         pop {r0}
080C5F8C: 0047         bx r0
