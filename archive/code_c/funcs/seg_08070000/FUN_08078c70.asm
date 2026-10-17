; undefined FUN_08078c70(void)
; entry 0x8078c70  size 30 bytes

08078C70: 10b5         push {r4,lr}
08078C72: 041c         add r4,r0,#0x0
08078C74: 00f0fcfa     bl 0x08079270
08078C78: 0549         ldr r1,[0x08078c90]
08078C7A: 607b         ldrb r0,[r4,#0xd]
08078C7C: 8000         lsl r0,r0,#0x2
08078C7E: 4018         add r0,r0,r1
08078C80: 0168         ldr r1,[r0,#0x0]
08078C82: 201c         add r0,r4,#0x0
08078C84: b0f07cf9     bl 0x08128f80
08078C88: 10bc         pop {r4}
08078C8A: 01bc         pop {r0}
08078C8C: 0047         bx r0
