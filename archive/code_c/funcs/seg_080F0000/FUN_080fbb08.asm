; undefined FUN_080fbb08(void)
; entry 0x80fbb08  size 44 bytes

080FBB08: 30b5         push {r4,r5,lr}
080FBB0A: 051c         add r5,r0,#0x0
080FBB0C: 2c1c         add r4,r5,#0x0
080FBB0E: bd34         add r4,#0xbd
080FBB10: 2078         ldrb r0,[r4,#0x0]
080FBB12: 0028         cmp r0,#0x0
080FBB14: 05d0         beq 0x080fbb22
080FBB16: 3620         mov r0,#0x36
080FBB18: 06f784fd     bl 0x08002624
080FBB1C: 0020         mov r0,#0x0
080FBB1E: 2070         strb r0,[r4,#0x0]
080FBB20: 02e0         b 0x080fbb28
080FBB22: ac20         mov r0,#0xac
080FBB24: 06f77efd     bl 0x08002624
080FBB28: 281c         add r0,r5,#0x0
080FBB2A: edf70ffd     bl 0x080e954c
080FBB2E: 30bc         pop {r4,r5}
080FBB30: 01bc         pop {r0}
080FBB32: 0047         bx r0
