; undefined FUN_08067e78(void)
; entry 0x8067e78  size 64 bytes

08067E78: 10b5         push {r4,lr}
08067E7A: 041c         add r4,r0,#0x0
08067E7C: a07b         ldrb r0,[r4,#0xe]
08067E7E: 0028         cmp r0,#0x0
08067E80: 09d1         bne 0x08067e96
08067E82: 0d49         ldr r1,[0x08067eb8]
08067E84: 201c         add r0,r4,#0x0
08067E86: b5f73bf8     bl 0x0801cf00
08067E8A: 6520         mov r0,#0x65
08067E8C: 9af740fe     bl 0x08002b10
08067E90: a07b         ldrb r0,[r4,#0xe]
08067E92: 0130         add r0,#0x1
08067E94: a073         strb r0,[r4,#0xe]
08067E96: 201c         add r0,r4,#0x0
08067E98: b5f7aaf8     bl 0x0801cff0
08067E9C: 201c         add r0,r4,#0x0
08067E9E: 7130         add r0,#0x71
08067EA0: 0078         ldrb r0,[r0,#0x0]
08067EA2: 0006         lsl r0,r0,#0x18
08067EA4: 0016         asr r0,r0,#0x18
08067EA6: 0328         cmp r0,#0x3
08067EA8: 03dd         ble 0x08067eb2
08067EAA: 0021         mov r1,#0x0
08067EAC: 1820         mov r0,#0x18
08067EAE: 6073         strb r0,[r4,#0xd]
08067EB0: a173         strb r1,[r4,#0xe]
08067EB2: 10bc         pop {r4}
08067EB4: 01bc         pop {r0}
08067EB6: 0047         bx r0
