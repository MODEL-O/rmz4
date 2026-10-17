; undefined FUN_080ab09c(void)
; entry 0x80ab09c  size 46 bytes

080AB09C: 00b5         push {lr}
080AB09E: 031c         add r3,r0,#0x0
080AB0A0: b830         add r0,#0xb8
080AB0A2: 0121         mov r1,#0x1
080AB0A4: 0170         strb r1,[r0,#0x0]
080AB0A6: 0130         add r0,#0x1
080AB0A8: 0170         strb r1,[r0,#0x0]
080AB0AA: 191c         add r1,r3,#0x0
080AB0AC: a431         add r1,#0xa4
080AB0AE: 0022         mov r2,#0x0
080AB0B0: 0820         mov r0,#0x8
080AB0B2: 0880         strh r0,[r1,#0x0]
080AB0B4: 0420         mov r0,#0x4
080AB0B6: 5873         strb r0,[r3,#0xd]
080AB0B8: 9a73         strb r2,[r3,#0xe]
080AB0BA: da73         strb r2,[r3,#0xf]
080AB0BC: 0348         ldr r0,[0x080ab0cc]
080AB0BE: 0169         ldr r1,[r0,#0x10]
080AB0C0: 181c         add r0,r3,#0x0
080AB0C2: 7df05dff     bl 0x08128f80
080AB0C6: 01bc         pop {r0}
080AB0C8: 0047         bx r0
