; undefined FUN_0806737c(void)
; entry 0x806737c  size 78 bytes

0806737C: 10b5         push {r4,lr}
0806737E: 041c         add r4,r0,#0x0
08067380: a07b         ldrb r0,[r4,#0xe]
08067382: 0028         cmp r0,#0x0
08067384: 10d1         bne 0x080673a8
08067386: 1149         ldr r1,[0x080673cc]
08067388: 201c         add r0,r4,#0x0
0806738A: b5f7b9fd     bl 0x0801cf00
0806738E: 6020         mov r0,#0x60
08067390: 9bf7befb     bl 0x08002b10
08067394: 6120         mov r0,#0x61
08067396: 9bf7bbfb     bl 0x08002b10
0806739A: 211c         add r1,r4,#0x0
0806739C: b431         add r1,#0xb4
0806739E: 6120         mov r0,#0x61
080673A0: 8885         strh r0,[r1,#0x2c]
080673A2: a07b         ldrb r0,[r4,#0xe]
080673A4: 0130         add r0,#0x1
080673A6: a073         strb r0,[r4,#0xe]
080673A8: 201c         add r0,r4,#0x0
080673AA: b5f721fe     bl 0x0801cff0
080673AE: 201c         add r0,r4,#0x0
080673B0: 7130         add r0,#0x71
080673B2: 0078         ldrb r0,[r0,#0x0]
080673B4: 0006         lsl r0,r0,#0x18
080673B6: 0016         asr r0,r0,#0x18
080673B8: 0428         cmp r0,#0x4
080673BA: 03dd         ble 0x080673c4
080673BC: 0021         mov r1,#0x0
080673BE: 0720         mov r0,#0x7
080673C0: 6073         strb r0,[r4,#0xd]
080673C2: a173         strb r1,[r4,#0xe]
080673C4: 10bc         pop {r4}
080673C6: 01bc         pop {r0}
080673C8: 0047         bx r0
