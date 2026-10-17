; undefined FUN_080a51b8(void)
; entry 0x80a51b8  size 64 bytes

080A51B8: 10b5         push {r4,lr}
080A51BA: 041c         add r4,r0,#0x0
080A51BC: 00f06af8     bl 0x080a5294
080A51C0: a17a         ldrb r1,[r4,#0xa]
080A51C2: fe20         mov r0,#0xfe
080A51C4: 0840         and r0,r1
080A51C6: 0021         mov r1,#0x0
080A51C8: a072         strb r0,[r4,#0xa]
080A51CA: 201c         add r0,r4,#0x0
080A51CC: 8c30         add r0,#0x8c
080A51CE: 0160         str r1,[r0,#0x0]
080A51D0: 0430         add r0,#0x4
080A51D2: 0160         str r1,[r0,#0x0]
080A51D4: 0430         add r0,#0x4
080A51D6: 0170         strb r1,[r0,#0x0]
080A51D8: a17a         ldrb r1,[r4,#0xa]
080A51DA: fb20         mov r0,#0xfb
080A51DC: 0840         and r0,r1
080A51DE: a072         strb r0,[r4,#0xa]
080A51E0: 0549         ldr r1,[0x080a51f8]
080A51E2: 607a         ldrb r0,[r4,#0x9]
080A51E4: 8000         lsl r0,r0,#0x2
080A51E6: 4018         add r0,r0,r1
080A51E8: 0421         mov r1,#0x4
080A51EA: e160         str r1,[r4,#0xc]
080A51EC: 0068         ldr r0,[r0,#0x0]
080A51EE: 0069         ldr r0,[r0,#0x10]
080A51F0: 6061         str r0,[r4,#0x14]
080A51F2: 10bc         pop {r4}
080A51F4: 01bc         pop {r0}
080A51F6: 0047         bx r0
