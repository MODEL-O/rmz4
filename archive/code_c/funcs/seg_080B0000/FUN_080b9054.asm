; undefined FUN_080b9054(void)
; entry 0x80b9054  size 76 bytes

080B9054: 10b5         push {r4,lr}
080B9056: 041c         add r4,r0,#0x0
080B9058: e07b         ldrb r0,[r4,#0xf]
080B905A: 0028         cmp r0,#0x0
080B905C: 0dd1         bne 0x080b907a
080B905E: 201c         add r0,r4,#0x0
080B9060: 7430         add r0,#0x74
080B9062: 0f49         ldr r1,[0x080b90a0]
080B9064: 4cf78efb     bl 0x08005784
080B9068: 0e49         ldr r1,[0x080b90a4]
080B906A: 201c         add r0,r4,#0x0
080B906C: 63f748ff     bl 0x0801cf00
080B9070: 1020         mov r0,#0x10
080B9072: a074         strb r0,[r4,#0x12]
080B9074: e07b         ldrb r0,[r4,#0xf]
080B9076: 0130         add r0,#0x1
080B9078: e073         strb r0,[r4,#0xf]
080B907A: 201c         add r0,r4,#0x0
080B907C: 63f7b8ff     bl 0x0801cff0
080B9080: a07c         ldrb r0,[r4,#0x12]
080B9082: 0028         cmp r0,#0x0
080B9084: 04d0         beq 0x080b9090
080B9086: 0138         sub r0,#0x1
080B9088: a074         strb r0,[r4,#0x12]
080B908A: 0006         lsl r0,r0,#0x18
080B908C: 0028         cmp r0,#0x0
080B908E: 04d1         bne 0x080b909a
080B9090: 0021         mov r1,#0x0
080B9092: 0220         mov r0,#0x2
080B9094: 6073         strb r0,[r4,#0xd]
080B9096: a173         strb r1,[r4,#0xe]
080B9098: e173         strb r1,[r4,#0xf]
080B909A: 10bc         pop {r4}
080B909C: 01bc         pop {r0}
080B909E: 0047         bx r0
