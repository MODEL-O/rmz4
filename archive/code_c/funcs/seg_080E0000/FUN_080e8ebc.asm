; undefined FUN_080e8ebc(void)
; entry 0x80e8ebc  size 32 bytes

080E8EBC: 10b5         push {r4,lr}
080E8EBE: 041c         add r4,r0,#0x0
080E8EC0: 0649         ldr r1,[0x080e8edc]
080E8EC2: 607b         ldrb r0,[r4,#0xd]
080E8EC4: 8000         lsl r0,r0,#0x2
080E8EC6: 4018         add r0,r0,r1
080E8EC8: 0168         ldr r1,[r0,#0x0]
080E8ECA: 201c         add r0,r4,#0x0
080E8ECC: 40f058f8     bl 0x08128f80
080E8ED0: 201c         add r0,r4,#0x0
080E8ED2: 34f78df8     bl 0x0801cff0
080E8ED6: 10bc         pop {r4}
080E8ED8: 01bc         pop {r0}
080E8EDA: 0047         bx r0
