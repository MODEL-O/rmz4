; undefined FUN_08020088(void)
; entry 0x8020088  size 64 bytes

08020088: 70b5         push {r4,r5,r6,lr}
0802008A: be21         mov r1,#0xbe
0802008C: 4900         lsl r1,r1,#0x1
0802008E: 4618         add r6,r0,r1
08020090: 3078         ldrb r0,[r6,#0x0]
08020092: 0028         cmp r0,#0x0
08020094: 14d1         bne 0x080200c0
08020096: 0c4c         ldr r4,[0x080200c8]
08020098: 2089         ldrh r0,[r4,#0x8]
0802009A: 0125         mov r5,#0x1
0802009C: 2843         orr r0,r5
0802009E: 2081         strh r0,[r4,#0x8]
080200A0: 0a4a         ldr r2,[0x080200cc]
080200A2: 1179         ldrb r1,[r2,#0x4]
080200A4: f720         mov r0,#0xf7
080200A6: 0840         and r0,r1
080200A8: 1071         strb r0,[r2,#0x4]
080200AA: 0120         mov r0,#0x1
080200AC: fff7c6fa     bl 0x0801f63c
080200B0: 1034         add r4,#0x10
080200B2: 0748         ldr r0,[0x080200d0]
080200B4: 0068         ldr r0,[r0,#0x0]
080200B6: 4168         ldr r1,[r0,#0x4]
080200B8: 201c         add r0,r4,#0x0
080200BA: 07f099fa     bl 0x080275f0
080200BE: 3570         strb r5,[r6,#0x0]
080200C0: 0020         mov r0,#0x0
080200C2: 70bc         pop {r4,r5,r6}
080200C4: 02bc         pop {r1}
080200C6: 0847         bx r1
