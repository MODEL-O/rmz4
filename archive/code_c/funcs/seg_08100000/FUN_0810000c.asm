; undefined FUN_0810000c(void)
; entry 0x810000c  size 58 bytes

0810000C: 30b5         push {r4,r5,lr}
0810000E: 041c         add r4,r0,#0x0
08100010: a57b         ldrb r5,[r4,#0xe]
08100012: 002d         cmp r5,#0x0
08100014: 11d1         bne 0x0810003a
08100016: b021         mov r1,#0xb0
08100018: 0902         lsl r1,r1,#0x8
0810001A: 1cf771ff     bl 0x0801cf00
0810001E: 201c         add r0,r4,#0x0
08100020: 8c30         add r0,#0x8c
08100022: 0560         str r5,[r0,#0x0]
08100024: 0430         add r0,#0x4
08100026: 0560         str r5,[r0,#0x0]
08100028: 0430         add r0,#0x4
0810002A: 0570         strb r5,[r0,#0x0]
0810002C: a17a         ldrb r1,[r4,#0xa]
0810002E: fb20         mov r0,#0xfb
08100030: 0840         and r0,r1
08100032: a072         strb r0,[r4,#0xa]
08100034: a07b         ldrb r0,[r4,#0xe]
08100036: 0130         add r0,#0x1
08100038: a073         strb r0,[r4,#0xe]
0810003A: 201c         add r0,r4,#0x0
0810003C: 1cf7d8ff     bl 0x0801cff0
08100040: 30bc         pop {r4,r5}
08100042: 01bc         pop {r0}
08100044: 0047         bx r0
