; undefined FUN_0809e058(void)
; entry 0x809e058  size 50 bytes

0809E058: 30b5         push {r4,r5,lr}
0809E05A: 041c         add r4,r0,#0x0
0809E05C: 251c         add r5,r4,#0x0
0809E05E: c035         add r5,#0xc0
0809E060: 2868         ldr r0,[r5,#0x0]
0809E062: 8df7bff9     bl 0x0802b3e4
0809E066: 0028         cmp r0,#0x0
0809E068: 0cd0         beq 0x0809e084
0809E06A: 201c         add r0,r4,#0x0
0809E06C: 7430         add r0,#0x74
0809E06E: 0749         ldr r1,[0x0809e08c]
0809E070: 67f788fb     bl 0x08005784
0809E074: 0021         mov r1,#0x0
0809E076: 2960         str r1,[r5,#0x0]
0809E078: 0420         mov r0,#0x4
0809E07A: 6073         strb r0,[r4,#0xd]
0809E07C: a173         strb r1,[r4,#0xe]
0809E07E: e173         strb r1,[r4,#0xf]
0809E080: 3220         mov r0,#0x32
0809E082: a074         strb r0,[r4,#0x12]
0809E084: 30bc         pop {r4,r5}
0809E086: 01bc         pop {r0}
0809E088: 0047         bx r0
