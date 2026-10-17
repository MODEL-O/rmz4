; undefined FUN_080a3168(void)
; entry 0x80a3168  size 30 bytes

080A3168: 00b5         push {lr}
080A316A: 021c         add r2,r0,#0x0
080A316C: 0648         ldr r0,[0x080a3188]
080A316E: 011c         add r1,r0,#0x0
080A3170: 2631         add r1,#0x26
080A3172: 0878         ldrb r0,[r1,#0x0]
080A3174: 0028         cmp r0,#0x0
080A3176: 01d0         beq 0x080a317c
080A3178: ff30         add r0,#0xff
080A317A: 0870         strb r0,[r1,#0x0]
080A317C: 101c         add r0,r2,#0x0
080A317E: dcf7b5fb     bl 0x0807f8ec
080A3182: 01bc         pop {r0}
080A3184: 0047         bx r0
