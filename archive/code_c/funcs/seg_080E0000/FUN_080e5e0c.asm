; undefined FUN_080e5e0c(void)
; entry 0x80e5e0c  size 32 bytes

080E5E0C: 10b5         push {r4,lr}
080E5E0E: 041c         add r4,r0,#0x0
080E5E10: 0649         ldr r1,[0x080e5e2c]
080E5E12: 607b         ldrb r0,[r4,#0xd]
080E5E14: 8000         lsl r0,r0,#0x2
080E5E16: 4018         add r0,r0,r1
080E5E18: 0168         ldr r1,[r0,#0x0]
080E5E1A: 201c         add r0,r4,#0x0
080E5E1C: 43f0b0f8     bl 0x08128f80
080E5E20: 201c         add r0,r4,#0x0
080E5E22: 37f7e5f8     bl 0x0801cff0
080E5E26: 10bc         pop {r4}
080E5E28: 01bc         pop {r0}
080E5E2A: 0047         bx r0
