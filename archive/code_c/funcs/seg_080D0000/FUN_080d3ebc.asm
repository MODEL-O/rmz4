; undefined FUN_080d3ebc(void)
; entry 0x80d3ebc  size 68 bytes

080D3EBC: 10b5         push {r4,lr}
080D3EBE: 0006         lsl r0,r0,#0x18
080D3EC0: 040e         lsr r4,r0,#0x18
080D3EC2: 0448         ldr r0,[0x080d3ed4]
080D3EC4: 0068         ldr r0,[r0,#0x0]
080D3EC6: 31f71bfb     bl 0x08005500
080D3ECA: 031c         add r3,r0,#0x0
080D3ECC: 002b         cmp r3,#0x0
080D3ECE: 03d1         bne 0x080d3ed8
080D3ED0: 0020         mov r0,#0x0
080D3ED2: 14e0         b 0x080d3efe
080D3ED8: 191c         add r1,r3,#0x0
080D3EDA: 2531         add r1,#0x25
080D3EDC: 0022         mov r2,#0x0
080D3EDE: 0120         mov r0,#0x1
080D3EE0: 0870         strb r0,[r1,#0x0]
080D3EE2: 0849         ldr r1,[0x080d3f04]
080D3EE4: 0e20         mov r0,#0xe
080D3EE6: 5872         strb r0,[r3,#0x9]
080D3EE8: 886b         ldr r0,[r1,#0x38]
080D3EEA: 0068         ldr r0,[r0,#0x0]
080D3EEC: 5861         str r0,[r3,#0x14]
080D3EEE: 0020         mov r0,#0x0
080D3EF0: 1a84         strh r2,[r3,#0x20]
080D3EF2: 191c         add r1,r3,#0x0
080D3EF4: 2231         add r1,#0x22
080D3EF6: 0870         strb r0,[r1,#0x0]
080D3EF8: 1c74         strb r4,[r3,#0x10]
080D3EFA: 5874         strb r0,[r3,#0x11]
080D3EFC: 181c         add r0,r3,#0x0
080D3EFE: 10bc         pop {r4}
080D3F00: 02bc         pop {r1}
080D3F02: 0847         bx r1
