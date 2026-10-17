; undefined FUN_080eaabc(void)
; entry 0x80eaabc  size 38 bytes

080EAABC: 00b5         push {lr}
080EAABE: 021c         add r2,r0,#0x0
080EAAC0: 111c         add r1,r2,#0x0
080EAAC2: ba31         add r1,#0xba
080EAAC4: 0888         ldrh r0,[r1,#0x0]
080EAAC6: 0028         cmp r0,#0x0
080EAAC8: 01d0         beq 0x080eaace
080EAACA: 0138         sub r0,#0x1
080EAACC: 0880         strh r0,[r1,#0x0]
080EAACE: 0548         ldr r0,[0x080eaae4]
080EAAD0: 517b         ldrb r1,[r2,#0xd]
080EAAD2: 8900         lsl r1,r1,#0x2
080EAAD4: 0918         add r1,r1,r0
080EAAD6: 0968         ldr r1,[r1,#0x0]
080EAAD8: 101c         add r0,r2,#0x0
080EAADA: 3ef051fa     bl 0x08128f80
080EAADE: 01bc         pop {r0}
080EAAE0: 0047         bx r0
