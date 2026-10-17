; undefined FUN_080d0be0(void)
; entry 0x80d0be0  size 68 bytes

080D0BE0: 10b5         push {r4,lr}
080D0BE2: 0348         ldr r0,[0x080d0bf0]
080D0BE4: 0468         ldr r4,[r0,#0x0]
080D0BE6: 201c         add r0,r4,#0x0
080D0BE8: 34f764fc     bl 0x080054b4
080D0BEC: 14e0         b 0x080d0c18
080D0BF4: 0548         ldr r0,[0x080d0c0c]
080D0BF6: 0078         ldrb r0,[r0,#0x0]
080D0BF8: 0028         cmp r0,#0x0
080D0BFA: 09d0         beq 0x080d0c10
080D0BFC: 507a         ldrb r0,[r2,#0x9]
080D0BFE: 3028         cmp r0,#0x30
080D0C00: 0ad1         bne 0x080d0c18
080D0C02: 5169         ldr r1,[r2,#0x14]
080D0C04: 101c         add r0,r2,#0x0
080D0C06: 58f0bbf9     bl 0x08128f80
080D0C0A: 05e0         b 0x080d0c18
080D0C10: 5169         ldr r1,[r2,#0x14]
080D0C12: 101c         add r0,r2,#0x0
080D0C14: 58f0b4f9     bl 0x08128f80
080D0C18: e068         ldr r0,[r4,#0xc]
080D0C1A: 4068         ldr r0,[r0,#0x4]
080D0C1C: e060         str r0,[r4,#0xc]
080D0C1E: 021c         add r2,r0,#0x0
080D0C20: 201c         add r0,r4,#0x0
080D0C22: 1430         add r0,#0x14
080D0C24: 8242         cmp r2,r0
080D0C26: e5d1         bne 0x080d0bf4
080D0C28: 10bc         pop {r4}
080D0C2A: 01bc         pop {r0}
080D0C2C: 0047         bx r0
