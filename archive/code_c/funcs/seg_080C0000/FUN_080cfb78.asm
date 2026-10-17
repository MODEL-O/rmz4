; undefined FUN_080cfb78(void)
; entry 0x80cfb78  size 72 bytes

080CFB78: 30b5         push {r4,r5,lr}
080CFB7A: 041c         add r4,r0,#0x0
080CFB7C: a56a         ldr r5,[r4,#0x28]
080CFB7E: e07b         ldrb r0,[r4,#0xf]
080CFB80: 0028         cmp r0,#0x0
080CFB82: 06d1         bne 0x080cfb92
080CFB84: 211c         add r1,r4,#0x0
080CFB86: b831         add r1,#0xb8
080CFB88: 6020         mov r0,#0x60
080CFB8A: 0860         str r0,[r1,#0x0]
080CFB8C: e07b         ldrb r0,[r4,#0xf]
080CFB8E: 0130         add r0,#0x1
080CFB90: e073         strb r0,[r4,#0xf]
080CFB92: 201c         add r0,r4,#0x0
080CFB94: 4df72cfa     bl 0x0801cff0
080CFB98: 686d         ldr r0,[r5,#0x54]
080CFB9A: 6065         str r0,[r4,#0x54]
080CFB9C: a86d         ldr r0,[r5,#0x58]
080CFB9E: 0849         ldr r1,[0x080cfbc0]
080CFBA0: 4018         add r0,r0,r1
080CFBA2: a065         str r0,[r4,#0x58]
080CFBA4: 211c         add r1,r4,#0x0
080CFBA6: b831         add r1,#0xb8
080CFBA8: 0868         ldr r0,[r1,#0x0]
080CFBAA: 421e         sub r2,r0,#0x1
080CFBAC: 0a60         str r2,[r1,#0x0]
080CFBAE: 002a         cmp r2,#0x0
080CFBB0: 03d1         bne 0x080cfbba
080CFBB2: 0120         mov r0,#0x1
080CFBB4: 6073         strb r0,[r4,#0xd]
080CFBB6: a273         strb r2,[r4,#0xe]
080CFBB8: e273         strb r2,[r4,#0xf]
080CFBBA: 30bc         pop {r4,r5}
080CFBBC: 01bc         pop {r0}
080CFBBE: 0047         bx r0
