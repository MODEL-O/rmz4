; undefined FUN_08001b24(void)
; entry 0x8001b24  size 16 bytes

08001B24: 00b5         push {lr}
08001B26: 0349         ldr r1,[0x08001b34]
08001B28: 008c         ldrh r0,[r0,#0x20]
08001B2A: 0880         strh r0,[r1,#0x0]
08001B2C: 26f160f9     bl 0x08127df0
08001B30: 01bc         pop {r0}
08001B32: 0047         bx r0
