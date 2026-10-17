; undefined FUN_080fe714(void)
; entry 0x80fe714  size 28 bytes

080FE714: 00b5         push {lr}
080FE716: 011c         add r1,r0,#0x0
080FE718: 087c         ldrb r0,[r1,#0x10]
080FE71A: 0028         cmp r0,#0x0
080FE71C: 03d1         bne 0x080fe726
080FE71E: 081c         add r0,r1,#0x0
080FE720: 00f022f8     bl 0x080fe768
080FE724: 02e0         b 0x080fe72c
080FE726: 081c         add r0,r1,#0x0
080FE728: 00f04af8     bl 0x080fe7c0
080FE72C: 01bc         pop {r0}
080FE72E: 0047         bx r0
