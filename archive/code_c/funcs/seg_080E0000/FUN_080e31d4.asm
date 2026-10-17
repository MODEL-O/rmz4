; undefined FUN_080e31d4(void)
; entry 0x80e31d4  size 32 bytes

080E31D4: 10b5         push {r4,lr}
080E31D6: 041c         add r4,r0,#0x0
080E31D8: 0649         ldr r1,[0x080e31f4]
080E31DA: 607b         ldrb r0,[r4,#0xd]
080E31DC: 8000         lsl r0,r0,#0x2
080E31DE: 4018         add r0,r0,r1
080E31E0: 0168         ldr r1,[r0,#0x0]
080E31E2: 201c         add r0,r4,#0x0
080E31E4: 45f0ccfe     bl 0x08128f80
080E31E8: 201c         add r0,r4,#0x0
080E31EA: 39f701ff     bl 0x0801cff0
080E31EE: 10bc         pop {r4}
080E31F0: 01bc         pop {r0}
080E31F2: 0047         bx r0
