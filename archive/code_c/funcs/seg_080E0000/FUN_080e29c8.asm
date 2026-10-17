; undefined FUN_080e29c8(void)
; entry 0x80e29c8  size 32 bytes

080E29C8: 10b5         push {r4,lr}
080E29CA: 041c         add r4,r0,#0x0
080E29CC: 0649         ldr r1,[0x080e29e8]
080E29CE: 607b         ldrb r0,[r4,#0xd]
080E29D0: 8000         lsl r0,r0,#0x2
080E29D2: 4018         add r0,r0,r1
080E29D4: 0168         ldr r1,[r0,#0x0]
080E29D6: 201c         add r0,r4,#0x0
080E29D8: 46f0d2fa     bl 0x08128f80
080E29DC: 201c         add r0,r4,#0x0
080E29DE: 3af707fb     bl 0x0801cff0
080E29E2: 10bc         pop {r4}
080E29E4: 01bc         pop {r0}
080E29E6: 0047         bx r0
