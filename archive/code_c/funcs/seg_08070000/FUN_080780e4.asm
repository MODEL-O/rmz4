; undefined FUN_080780e4(void)
; entry 0x80780e4  size 64 bytes

080780E4: 30b5         push {r4,r5,lr}
080780E6: 847b         ldrb r4,[r0,#0xe]
080780E8: 021c         add r2,r0,#0x0
080780EA: c832         add r2,#0xc8
080780EC: 1168         ldr r1,[r2,#0x0]
080780EE: b531         add r1,#0xb5
080780F0: 0025         mov r5,#0x0
080780F2: 0123         mov r3,#0x1
080780F4: 0b70         strb r3,[r1,#0x0]
080780F6: 1168         ldr r1,[r2,#0x0]
080780F8: b631         add r1,#0xb6
080780FA: 0b70         strb r3,[r1,#0x0]
080780FC: 0432         add r2,#0x4
080780FE: 1168         ldr r1,[r2,#0x0]
08078100: b631         add r1,#0xb6
08078102: 0d70         strb r5,[r1,#0x0]
08078104: 1168         ldr r1,[r2,#0x0]
08078106: b931         add r1,#0xb9
08078108: 0b70         strb r3,[r1,#0x0]
0807810A: 0134         add r4,#0x1
0807810C: 8473         strb r4,[r0,#0xe]
0807810E: c573         strb r5,[r0,#0xf]
08078110: 044a         ldr r2,[0x08078124]
08078112: 417b         ldrb r1,[r0,#0xd]
08078114: 8900         lsl r1,r1,#0x2
08078116: 8918         add r1,r1,r2
08078118: 0968         ldr r1,[r1,#0x0]
0807811A: b0f031ff     bl 0x08128f80
0807811E: 30bc         pop {r4,r5}
08078120: 01bc         pop {r0}
08078122: 0047         bx r0
