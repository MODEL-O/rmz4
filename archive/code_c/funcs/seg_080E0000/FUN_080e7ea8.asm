; undefined FUN_080e7ea8(void)
; entry 0x80e7ea8  size 32 bytes

080E7EA8: 10b5         push {r4,lr}
080E7EAA: 041c         add r4,r0,#0x0
080E7EAC: 0649         ldr r1,[0x080e7ec8]
080E7EAE: 607b         ldrb r0,[r4,#0xd]
080E7EB0: 8000         lsl r0,r0,#0x2
080E7EB2: 4018         add r0,r0,r1
080E7EB4: 0168         ldr r1,[r0,#0x0]
080E7EB6: 201c         add r0,r4,#0x0
080E7EB8: 41f062f8     bl 0x08128f80
080E7EBC: 201c         add r0,r4,#0x0
080E7EBE: 35f797f8     bl 0x0801cff0
080E7EC2: 10bc         pop {r4}
080E7EC4: 01bc         pop {r0}
080E7EC6: 0047         bx r0
