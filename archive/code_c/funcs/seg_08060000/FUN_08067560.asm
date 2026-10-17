; undefined FUN_08067560(void)
; entry 0x8067560  size 80 bytes

08067560: 10b5         push {r4,lr}
08067562: 041c         add r4,r0,#0x0
08067564: a07b         ldrb r0,[r4,#0xe]
08067566: 0028         cmp r0,#0x0
08067568: 13d1         bne 0x08067592
0806756A: 1149         ldr r1,[0x080675b0]
0806756C: 201c         add r0,r4,#0x0
0806756E: b5f7c7fc     bl 0x0801cf00
08067572: 201c         add r0,r4,#0x0
08067574: 7430         add r0,#0x74
08067576: 0f49         ldr r1,[0x080675b4]
08067578: 9ef704f9     bl 0x08005784
0806757C: 6320         mov r0,#0x63
0806757E: 9bf7c7fa     bl 0x08002b10
08067582: 211c         add r1,r4,#0x0
08067584: 5431         add r1,#0x54
08067586: 1020         mov r0,#0x10
08067588: b8f76cfc     bl 0x0801fe64
0806758C: a07b         ldrb r0,[r4,#0xe]
0806758E: 0130         add r0,#0x1
08067590: a073         strb r0,[r4,#0xe]
08067592: 201c         add r0,r4,#0x0
08067594: b5f72cfd     bl 0x0801cff0
08067598: 201c         add r0,r4,#0x0
0806759A: 7330         add r0,#0x73
0806759C: 0078         ldrb r0,[r0,#0x0]
0806759E: 0328         cmp r0,#0x3
080675A0: 03d1         bne 0x080675aa
080675A2: 0021         mov r1,#0x0
080675A4: 0b20         mov r0,#0xb
080675A6: 6073         strb r0,[r4,#0xd]
080675A8: a173         strb r1,[r4,#0xe]
080675AA: 10bc         pop {r4}
080675AC: 01bc         pop {r0}
080675AE: 0047         bx r0
