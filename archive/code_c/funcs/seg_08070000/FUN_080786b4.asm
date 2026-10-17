; undefined FUN_080786b4(void)
; entry 0x80786b4  size 64 bytes

080786B4: 30b5         push {r4,r5,lr}
080786B6: 847b         ldrb r4,[r0,#0xe]
080786B8: 021c         add r2,r0,#0x0
080786BA: c832         add r2,#0xc8
080786BC: 1168         ldr r1,[r2,#0x0]
080786BE: b531         add r1,#0xb5
080786C0: 0025         mov r5,#0x0
080786C2: 0123         mov r3,#0x1
080786C4: 0b70         strb r3,[r1,#0x0]
080786C6: 1168         ldr r1,[r2,#0x0]
080786C8: b631         add r1,#0xb6
080786CA: 0b70         strb r3,[r1,#0x0]
080786CC: 0432         add r2,#0x4
080786CE: 1168         ldr r1,[r2,#0x0]
080786D0: b631         add r1,#0xb6
080786D2: 0d70         strb r5,[r1,#0x0]
080786D4: 1168         ldr r1,[r2,#0x0]
080786D6: b931         add r1,#0xb9
080786D8: 0b70         strb r3,[r1,#0x0]
080786DA: 0134         add r4,#0x1
080786DC: 8473         strb r4,[r0,#0xe]
080786DE: c573         strb r5,[r0,#0xf]
080786E0: 044a         ldr r2,[0x080786f4]
080786E2: 417b         ldrb r1,[r0,#0xd]
080786E4: 8900         lsl r1,r1,#0x2
080786E6: 8918         add r1,r1,r2
080786E8: 0968         ldr r1,[r1,#0x0]
080786EA: b0f049fc     bl 0x08128f80
080786EE: 30bc         pop {r4,r5}
080786F0: 01bc         pop {r0}
080786F2: 0047         bx r0
