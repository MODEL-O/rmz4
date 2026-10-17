; undefined FUN_080e6c34(void)
; entry 0x80e6c34  size 32 bytes

080E6C34: 10b5         push {r4,lr}
080E6C36: 041c         add r4,r0,#0x0
080E6C38: 0649         ldr r1,[0x080e6c54]
080E6C3A: 607b         ldrb r0,[r4,#0xd]
080E6C3C: 8000         lsl r0,r0,#0x2
080E6C3E: 4018         add r0,r0,r1
080E6C40: 0168         ldr r1,[r0,#0x0]
080E6C42: 201c         add r0,r4,#0x0
080E6C44: 42f09cf9     bl 0x08128f80
080E6C48: 201c         add r0,r4,#0x0
080E6C4A: 36f7d1f9     bl 0x0801cff0
080E6C4E: 10bc         pop {r4}
080E6C50: 01bc         pop {r0}
080E6C52: 0047         bx r0
