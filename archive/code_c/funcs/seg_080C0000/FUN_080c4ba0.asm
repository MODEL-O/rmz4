; undefined FUN_080c4ba0(void)
; entry 0x80c4ba0  size 36 bytes

080C4BA0: 30b5         push {r4,r5,lr}
080C4BA2: 051c         add r5,r0,#0x0
080C4BA4: 2c1c         add r4,r5,#0x0
080C4BA6: b834         add r4,#0xb8
080C4BA8: 2078         ldrb r0,[r4,#0x0]
080C4BAA: 0028         cmp r0,#0x0
080C4BAC: 04d0         beq 0x080c4bb8
080C4BAE: 0548         ldr r0,[0x080c4bc4]
080C4BB0: 3df7d4ff     bl 0x08002b5c
080C4BB4: 0020         mov r0,#0x0
080C4BB6: 2070         strb r0,[r4,#0x0]
080C4BB8: 281c         add r0,r5,#0x0
080C4BBA: f8f71dfc     bl 0x080bd3f8
080C4BBE: 30bc         pop {r4,r5}
080C4BC0: 01bc         pop {r0}
080C4BC2: 0047         bx r0
