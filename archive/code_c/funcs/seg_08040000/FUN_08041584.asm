; undefined FUN_08041584(void)
; entry 0x8041584  size 76 bytes

08041584: 30b5         push {r4,r5,lr}
08041586: 051c         add r5,r0,#0x0
08041588: ec6a         ldr r4,[r5,#0x2c]
0804158A: 0321         mov r1,#0x3
0804158C: f9f706fa     bl 0x0803a99c
08041590: 0006         lsl r0,r0,#0x18
08041592: 010e         lsr r1,r0,#0x18
08041594: fa34         add r4,#0xfa
08041596: 2078         ldrb r0,[r4,#0x0]
08041598: 0228         cmp r0,#0x2
0804159A: 00d1         bne 0x0804159e
0804159C: 0121         mov r1,#0x1
0804159E: 0029         cmp r1,#0x0
080415A0: 0ed0         beq 0x080415c0
080415A2: 0649         ldr r1,[0x080415bc]
080415A4: 687a         ldrb r0,[r5,#0x9]
080415A6: 8000         lsl r0,r0,#0x2
080415A8: 4018         add r0,r0,r1
080415AA: 0221         mov r1,#0x2
080415AC: e960         str r1,[r5,#0xc]
080415AE: 0068         ldr r0,[r0,#0x0]
080415B0: 8068         ldr r0,[r0,#0x8]
080415B2: 6861         str r0,[r5,#0x14]
080415B4: 281c         add r0,r5,#0x0
080415B6: 00f00df8     bl 0x080415d4
080415BA: 08e0         b 0x080415ce
080415C0: 281c         add r0,r5,#0x0
080415C2: dbf715fd     bl 0x0801cff0
080415C6: 686d         ldr r0,[r5,#0x54]
080415C8: e96d         ldr r1,[r5,#0x5c]
080415CA: 4018         add r0,r0,r1
080415CC: 6865         str r0,[r5,#0x54]
080415CE: 30bc         pop {r4,r5}
080415D0: 01bc         pop {r0}
080415D2: 0047         bx r0
