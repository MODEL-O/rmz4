; undefined FUN_0810c068(void)
; entry 0x810c068  size 62 bytes

0810C068: 10b5         push {r4,lr}
0810C06A: 041c         add r4,r0,#0x0
0810C06C: 10f716fe     bl 0x0801cc9c
0810C070: a17a         ldrb r1,[r4,#0xa]
0810C072: 0120         mov r0,#0x1
0810C074: 0843         orr r0,r1
0810C076: a072         strb r0,[r4,#0xa]
0810C078: 221c         add r2,r4,#0x0
0810C07A: 4932         add r2,#0x49
0810C07C: 1178         ldrb r1,[r2,#0x0]
0810C07E: 0d20         mov r0,#0xd
0810C080: 4042         rsb r0,r0
0810C082: 0840         and r0,r1
0810C084: 1070         strb r0,[r2,#0x0]
0810C086: 211c         add r1,r4,#0x0
0810C088: 2531         add r1,#0x25
0810C08A: 1120         mov r0,#0x11
0810C08C: 0870         strb r0,[r1,#0x0]
0810C08E: 0649         ldr r1,[0x0810c0a8]
0810C090: 201c         add r0,r4,#0x0
0810C092: 10f735ff     bl 0x0801cf00
0810C096: 0548         ldr r0,[0x0810c0ac]
0810C098: 416d         ldr r1,[r0,#0x54]
0810C09A: 006d         ldr r0,[r0,#0x50]
0810C09C: 6065         str r0,[r4,#0x54]
0810C09E: a165         str r1,[r4,#0x58]
0810C0A0: 10bc         pop {r4}
0810C0A2: 01bc         pop {r0}
0810C0A4: 0047         bx r0
