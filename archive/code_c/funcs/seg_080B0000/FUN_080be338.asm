; undefined FUN_080be338(void)
; entry 0x80be338  size 48 bytes

080BE338: 10b5         push {r4,lr}
080BE33A: 041c         add r4,r0,#0x0
080BE33C: 0a49         ldr r1,[0x080be368]
080BE33E: 607b         ldrb r0,[r4,#0xd]
080BE340: 8000         lsl r0,r0,#0x2
080BE342: 4018         add r0,r0,r1
080BE344: 0168         ldr r1,[r0,#0x0]
080BE346: 201c         add r0,r4,#0x0
080BE348: 6af01afe     bl 0x08128f80
080BE34C: 0006         lsl r0,r0,#0x18
080BE34E: 0028         cmp r0,#0x0
080BE350: 07d1         bne 0x080be362
080BE352: 0648         ldr r0,[0x080be36c]
080BE354: 617b         ldrb r1,[r4,#0xd]
080BE356: 8900         lsl r1,r1,#0x2
080BE358: 0918         add r1,r1,r0
080BE35A: 0968         ldr r1,[r1,#0x0]
080BE35C: 201c         add r0,r4,#0x0
080BE35E: 6af00ffe     bl 0x08128f80
080BE362: 10bc         pop {r4}
080BE364: 01bc         pop {r0}
080BE366: 0047         bx r0
