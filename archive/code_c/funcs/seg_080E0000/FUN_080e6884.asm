; undefined FUN_080e6884(void)
; entry 0x80e6884  size 32 bytes

080E6884: 10b5         push {r4,lr}
080E6886: 041c         add r4,r0,#0x0
080E6888: 0649         ldr r1,[0x080e68a4]
080E688A: 607b         ldrb r0,[r4,#0xd]
080E688C: 8000         lsl r0,r0,#0x2
080E688E: 4018         add r0,r0,r1
080E6890: 0168         ldr r1,[r0,#0x0]
080E6892: 201c         add r0,r4,#0x0
080E6894: 42f074fb     bl 0x08128f80
080E6898: 201c         add r0,r4,#0x0
080E689A: 36f7a9fb     bl 0x0801cff0
080E689E: 10bc         pop {r4}
080E68A0: 01bc         pop {r0}
080E68A2: 0047         bx r0
