; undefined FUN_080e4b30(void)
; entry 0x80e4b30  size 32 bytes

080E4B30: 10b5         push {r4,lr}
080E4B32: 041c         add r4,r0,#0x0
080E4B34: 0649         ldr r1,[0x080e4b50]
080E4B36: 607b         ldrb r0,[r4,#0xd]
080E4B38: 8000         lsl r0,r0,#0x2
080E4B3A: 4018         add r0,r0,r1
080E4B3C: 0168         ldr r1,[r0,#0x0]
080E4B3E: 201c         add r0,r4,#0x0
080E4B40: 44f01efa     bl 0x08128f80
080E4B44: 201c         add r0,r4,#0x0
080E4B46: 38f753fa     bl 0x0801cff0
080E4B4A: 10bc         pop {r4}
080E4B4C: 01bc         pop {r0}
080E4B4E: 0047         bx r0
