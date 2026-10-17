; undefined FUN_0802b478(void)
; entry 0x802b478  size 74 bytes

0802B478: 70b5         push {r4,r5,r6,lr}
0802B47A: 124e         ldr r6,[0x0802b4c4]
0802B47C: 3068         ldr r0,[r6,#0x0]
0802B47E: daf725f8     bl 0x080054cc
0802B482: 051c         add r5,r0,#0x0
0802B484: 002d         cmp r5,#0x0
0802B486: 0bd0         beq 0x0802b4a0
0802B488: 0f48         ldr r0,[0x0802b4c8]
0802B48A: 0068         ldr r0,[r0,#0x0]
0802B48C: 8542         cmp r5,r0
0802B48E: 07d0         beq 0x0802b4a0
0802B490: fff7f2ff     bl 0x0802b478
0802B494: 041c         add r4,r0,#0x0
0802B496: 3068         ldr r0,[r6,#0x0]
0802B498: 291c         add r1,r5,#0x0
0802B49A: daf795f8     bl 0x080055c8
0802B49E: 251c         add r5,r4,#0x0
0802B4A0: 0020         mov r0,#0x0
0802B4A2: 2874         strb r0,[r5,#0x10]
0802B4A4: 0021         mov r1,#0x0
0802B4A6: 2884         strh r0,[r5,#0x20]
0802B4A8: 281c         add r0,r5,#0x0
0802B4AA: 2230         add r0,#0x22
0802B4AC: 0170         strb r1,[r0,#0x0]
0802B4AE: e97a         ldrb r1,[r5,#0xb]
0802B4B0: 1020         mov r0,#0x10
0802B4B2: 0843         orr r0,r1
0802B4B4: e872         strb r0,[r5,#0xb]
0802B4B6: 287f         ldrb r0,[r5,#0x1c]
0802B4B8: 6877         strb r0,[r5,#0x1d]
0802B4BA: 281c         add r0,r5,#0x0
0802B4BC: 70bc         pop {r4,r5,r6}
0802B4BE: 02bc         pop {r1}
0802B4C0: 0847         bx r1
