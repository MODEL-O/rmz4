; undefined FUN_080120ec(void)
; entry 0x80120ec  size 42 bytes

080120EC: 00b5         push {lr}
080120EE: 031c         add r3,r0,#0x0
080120F0: 987b         ldrb r0,[r3,#0xe]
080120F2: 0028         cmp r0,#0x0
080120F4: 0dd1         bne 0x08012112
080120F6: d96d         ldr r1,[r3,#0x5c]
080120F8: 0909         lsr r1,r1,#0x4
080120FA: 4900         lsl r1,r1,#0x1
080120FC: 0648         ldr r0,[0x08012118]
080120FE: 0918         add r1,r1,r0
08012100: 0a88         ldrh r2,[r1,#0x0]
08012102: 0648         ldr r0,[0x0801211c]
08012104: 1040         and r0,r2
08012106: 0322         mov r2,#0x3
08012108: 1043         orr r0,r2
0801210A: 0880         strh r0,[r1,#0x0]
0801210C: 987b         ldrb r0,[r3,#0xe]
0801210E: 0130         add r0,#0x1
08012110: 9873         strb r0,[r3,#0xe]
08012112: 01bc         pop {r0}
08012114: 0047         bx r0
