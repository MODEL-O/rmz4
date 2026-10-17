; undefined FUN_081199ac(void)
; entry 0x81199ac  size 66 bytes

081199AC: 10b5         push {r4,lr}
081199AE: 041c         add r4,r0,#0x0
081199B0: 221c         add r2,r4,#0x0
081199B2: b432         add r2,#0xb4
081199B4: 137a         ldrb r3,[r2,#0x8]
081199B6: ff2b         cmp r3,#0xff
081199B8: 08d0         beq 0x081199cc
081199BA: 507a         ldrb r0,[r2,#0x9]
081199BC: 011c         add r1,r0,#0x0
081199BE: ff29         cmp r1,#0xff
081199C0: 04d0         beq 0x081199cc
081199C2: 8b42         cmp r3,r1
081199C4: 02d2         bcs 0x081199cc
081199C6: 191c         add r1,r3,#0x0
081199C8: 1072         strb r0,[r2,#0x8]
081199CA: 5172         strb r1,[r2,#0x9]
081199CC: 201c         add r0,r4,#0x0
081199CE: b430         add r0,#0xb4
081199D0: 827a         ldrb r2,[r0,#0xa]
081199D2: ff2a         cmp r2,#0xff
081199D4: 08d0         beq 0x081199e8
081199D6: c37a         ldrb r3,[r0,#0xb]
081199D8: 191c         add r1,r3,#0x0
081199DA: ff29         cmp r1,#0xff
081199DC: 04d0         beq 0x081199e8
081199DE: 8a42         cmp r2,r1
081199E0: 02d2         bcs 0x081199e8
081199E2: 111c         add r1,r2,#0x0
081199E4: 8372         strb r3,[r0,#0xa]
081199E6: c172         strb r1,[r0,#0xb]
081199E8: 10bc         pop {r4}
081199EA: 01bc         pop {r0}
081199EC: 0047         bx r0
