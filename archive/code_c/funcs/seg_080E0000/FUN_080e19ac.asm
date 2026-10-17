; undefined FUN_080e19ac(void)
; entry 0x80e19ac  size 50 bytes

080E19AC: 10b5         push {r4,lr}
080E19AE: 041c         add r4,r0,#0x0
080E19B0: 607b         ldrb r0,[r4,#0xd]
080E19B2: 0028         cmp r0,#0x0
080E19B4: 0ad1         bne 0x080e19cc
080E19B6: 201c         add r0,r4,#0x0
080E19B8: 7630         add r0,#0x76
080E19BA: 0088         ldrh r0,[r0,#0x0]
080E19BC: 0d21         mov r1,#0xd
080E19BE: 0143         orr r1,r0
080E19C0: 201c         add r0,r4,#0x0
080E19C2: 3bf79dfa     bl 0x0801cf00
080E19C6: 607b         ldrb r0,[r4,#0xd]
080E19C8: 0130         add r0,#0x1
080E19CA: 6073         strb r0,[r4,#0xd]
080E19CC: 201c         add r0,r4,#0x0
080E19CE: 00f007f8     bl 0x080e19e0
080E19D2: 201c         add r0,r4,#0x0
080E19D4: 00f028f8     bl 0x080e1a28
080E19D8: 10bc         pop {r4}
080E19DA: 01bc         pop {r0}
080E19DC: 0047         bx r0
