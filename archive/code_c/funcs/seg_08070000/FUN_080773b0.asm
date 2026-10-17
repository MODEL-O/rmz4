; undefined FUN_080773b0(void)
; entry 0x80773b0  size 64 bytes

080773B0: 30b5         push {r4,r5,lr}
080773B2: 847b         ldrb r4,[r0,#0xe]
080773B4: 021c         add r2,r0,#0x0
080773B6: c832         add r2,#0xc8
080773B8: 1168         ldr r1,[r2,#0x0]
080773BA: b531         add r1,#0xb5
080773BC: 0023         mov r3,#0x0
080773BE: 0b70         strb r3,[r1,#0x0]
080773C0: 1168         ldr r1,[r2,#0x0]
080773C2: b631         add r1,#0xb6
080773C4: 0125         mov r5,#0x1
080773C6: 0d70         strb r5,[r1,#0x0]
080773C8: 0432         add r2,#0x4
080773CA: 1168         ldr r1,[r2,#0x0]
080773CC: b631         add r1,#0xb6
080773CE: 0b70         strb r3,[r1,#0x0]
080773D0: 1168         ldr r1,[r2,#0x0]
080773D2: b931         add r1,#0xb9
080773D4: 0d70         strb r5,[r1,#0x0]
080773D6: 0134         add r4,#0x1
080773D8: 8473         strb r4,[r0,#0xe]
080773DA: c373         strb r3,[r0,#0xf]
080773DC: 044a         ldr r2,[0x080773f0]
080773DE: 417b         ldrb r1,[r0,#0xd]
080773E0: 8900         lsl r1,r1,#0x2
080773E2: 8918         add r1,r1,r2
080773E4: 0968         ldr r1,[r1,#0x0]
080773E6: b1f0cbfd     bl 0x08128f80
080773EA: 30bc         pop {r4,r5}
080773EC: 01bc         pop {r0}
080773EE: 0047         bx r0
