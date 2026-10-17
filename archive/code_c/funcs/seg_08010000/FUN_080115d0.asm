; undefined FUN_080115d0(void)
; entry 0x80115d0  size 40 bytes

080115D0: 00b5         push {lr}
080115D2: 0021         mov r1,#0x0
080115D4: 0182         strh r1,[r0,#0x10]
080115D6: 0821         mov r1,#0x8
080115D8: 4182         strh r1,[r0,#0x12]
080115DA: 0749         ldr r1,[0x080115f8]
080115DC: 8020         mov r0,#0x80
080115DE: 4001         lsl r0,r0,#0x5
080115E0: 4880         strh r0,[r1,#0x2]
080115E2: 7620         mov r0,#0x76
080115E4: f1f794fa     bl 0x08002b10
080115E8: 0449         ldr r1,[0x080115fc]
080115EA: 0548         ldr r0,[0x08011600]
080115EC: 0918         add r1,r1,r0
080115EE: 0878         ldrb r0,[r1,#0x0]
080115F0: 0130         add r0,#0x1
080115F2: 0870         strb r0,[r1,#0x0]
080115F4: 01bc         pop {r0}
080115F6: 0047         bx r0
