; undefined FUN_080f6028(void)
; entry 0x80f6028  size 32 bytes

080F6028: 30b5         push {r4,r5,lr}
080F602A: 041c         add r4,r0,#0x0
080F602C: a57b         ldrb r5,[r4,#0xe]
080F602E: 002d         cmp r5,#0x0
080F6030: 07d1         bne 0x080f6042
080F6032: ba21         mov r1,#0xba
080F6034: c901         lsl r1,r1,#0x7
080F6036: 26f763ff     bl 0x0801cf00
080F603A: e565         str r5,[r4,#0x5c]
080F603C: a07b         ldrb r0,[r4,#0xe]
080F603E: 0130         add r0,#0x1
080F6040: a073         strb r0,[r4,#0xe]
080F6042: 30bc         pop {r4,r5}
080F6044: 01bc         pop {r0}
080F6046: 0047         bx r0
