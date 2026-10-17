; undefined FUN_080e71b4(void)
; entry 0x80e71b4  size 38 bytes

080E71B4: 10b5         push {r4,lr}
080E71B6: 041c         add r4,r0,#0x0
080E71B8: 607b         ldrb r0,[r4,#0xd]
080E71BA: 0228         cmp r0,#0x2
080E71BC: 07d0         beq 0x080e71ce
080E71BE: 0748         ldr r0,[0x080e71dc]
080E71C0: 617b         ldrb r1,[r4,#0xd]
080E71C2: 8900         lsl r1,r1,#0x2
080E71C4: 0918         add r1,r1,r0
080E71C6: 0968         ldr r1,[r1,#0x0]
080E71C8: 201c         add r0,r4,#0x0
080E71CA: 41f0d9fe     bl 0x08128f80
080E71CE: 201c         add r0,r4,#0x0
080E71D0: 35f70eff     bl 0x0801cff0
080E71D4: 10bc         pop {r4}
080E71D6: 01bc         pop {r0}
080E71D8: 0047         bx r0
