; undefined FUN_080772a4(void)
; entry 0x80772a4  size 64 bytes

080772A4: 30b5         push {r4,r5,lr}
080772A6: 847b         ldrb r4,[r0,#0xe]
080772A8: 021c         add r2,r0,#0x0
080772AA: c832         add r2,#0xc8
080772AC: 1168         ldr r1,[r2,#0x0]
080772AE: b531         add r1,#0xb5
080772B0: 0025         mov r5,#0x0
080772B2: 0123         mov r3,#0x1
080772B4: 0b70         strb r3,[r1,#0x0]
080772B6: 1168         ldr r1,[r2,#0x0]
080772B8: b631         add r1,#0xb6
080772BA: 0b70         strb r3,[r1,#0x0]
080772BC: 0432         add r2,#0x4
080772BE: 1168         ldr r1,[r2,#0x0]
080772C0: b631         add r1,#0xb6
080772C2: 0d70         strb r5,[r1,#0x0]
080772C4: 1168         ldr r1,[r2,#0x0]
080772C6: b931         add r1,#0xb9
080772C8: 0b70         strb r3,[r1,#0x0]
080772CA: 0134         add r4,#0x1
080772CC: 8473         strb r4,[r0,#0xe]
080772CE: c573         strb r5,[r0,#0xf]
080772D0: 044a         ldr r2,[0x080772e4]
080772D2: 417b         ldrb r1,[r0,#0xd]
080772D4: 8900         lsl r1,r1,#0x2
080772D6: 8918         add r1,r1,r2
080772D8: 0968         ldr r1,[r1,#0x0]
080772DA: b1f051fe     bl 0x08128f80
080772DE: 30bc         pop {r4,r5}
080772E0: 01bc         pop {r0}
080772E2: 0047         bx r0
