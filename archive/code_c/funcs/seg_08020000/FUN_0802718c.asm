; undefined FUN_0802718c(void)
; entry 0x802718c  size 64 bytes

0802718C: 70b5         push {r4,r5,r6,lr}
0802718E: be21         mov r1,#0xbe
08027190: 4900         lsl r1,r1,#0x1
08027192: 4618         add r6,r0,r1
08027194: 3078         ldrb r0,[r6,#0x0]
08027196: 0028         cmp r0,#0x0
08027198: 14d1         bne 0x080271c4
0802719A: 0c4c         ldr r4,[0x080271cc]
0802719C: 2089         ldrh r0,[r4,#0x8]
0802719E: 0125         mov r5,#0x1
080271A0: 2843         orr r0,r5
080271A2: 2081         strh r0,[r4,#0x8]
080271A4: 0a4a         ldr r2,[0x080271d0]
080271A6: 1179         ldrb r1,[r2,#0x4]
080271A8: f720         mov r0,#0xf7
080271AA: 0840         and r0,r1
080271AC: 1071         strb r0,[r2,#0x4]
080271AE: 0120         mov r0,#0x1
080271B0: f8f744fa     bl 0x0801f63c
080271B4: 1034         add r4,#0x10
080271B6: 0748         ldr r0,[0x080271d4]
080271B8: 006c         ldr r0,[r0,#0x40]
080271BA: 4168         ldr r1,[r0,#0x4]
080271BC: 201c         add r0,r4,#0x0
080271BE: 00f017fa     bl 0x080275f0
080271C2: 3570         strb r5,[r6,#0x0]
080271C4: 0020         mov r0,#0x0
080271C6: 70bc         pop {r4,r5,r6}
080271C8: 02bc         pop {r1}
080271CA: 0847         bx r1
