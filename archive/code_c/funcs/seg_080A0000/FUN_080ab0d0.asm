; undefined FUN_080ab0d0(void)
; entry 0x80ab0d0  size 78 bytes

080AB0D0: 10b5         push {r4,lr}
080AB0D2: 041c         add r4,r0,#0x0
080AB0D4: e07b         ldrb r0,[r4,#0xf]
080AB0D6: 0028         cmp r0,#0x0
080AB0D8: 06d1         bne 0x080ab0e8
080AB0DA: 1149         ldr r1,[0x080ab120]
080AB0DC: 201c         add r0,r4,#0x0
080AB0DE: 71f70fff     bl 0x0801cf00
080AB0E2: e07b         ldrb r0,[r4,#0xf]
080AB0E4: 0130         add r0,#0x1
080AB0E6: e073         strb r0,[r4,#0xf]
080AB0E8: 201c         add r0,r4,#0x0
080AB0EA: 71f781ff     bl 0x0801cff0
080AB0EE: 201c         add r0,r4,#0x0
080AB0F0: 7430         add r0,#0x74
080AB0F2: 0c49         ldr r1,[0x080ab124]
080AB0F4: 5af746fb     bl 0x08005784
080AB0F8: 616d         ldr r1,[r4,#0x54]
080AB0FA: a26d         ldr r2,[r4,#0x58]
080AB0FC: 081c         add r0,r1,#0x0
080AB0FE: 111c         add r1,r2,#0x0
080AB100: 5df718fa     bl 0x08008534
080AB104: 0138         sub r0,#0x1
080AB106: a065         str r0,[r4,#0x58]
080AB108: 201c         add r0,r4,#0x0
080AB10A: 7330         add r0,#0x73
080AB10C: 0078         ldrb r0,[r0,#0x0]
080AB10E: 0328         cmp r0,#0x3
080AB110: 02d1         bne 0x080ab118
080AB112: 201c         add r0,r4,#0x0
080AB114: 00f07cfa     bl 0x080ab610
080AB118: 10bc         pop {r4}
080AB11A: 01bc         pop {r0}
080AB11C: 0047         bx r0
