; undefined FUN_081286ec(void)
; entry 0x81286ec  size 34 bytes

081286EC: 10b5         push {r4,lr}
081286EE: 021c         add r2,r0,#0x0
081286F0: 0904         lsl r1,r1,#0x10
081286F2: 090c         lsr r1,r1,#0x10
081286F4: 536b         ldr r3,[r2,#0x34]
081286F6: 0648         ldr r0,[0x08128710]
081286F8: 8342         cmp r3,r0
081286FA: 05d1         bne 0x08128708
081286FC: d183         strh r1,[r2,#0x1e]
081286FE: 948b         ldrh r4,[r2,#0x1c]
08128700: 081c         add r0,r1,#0x0
08128702: 6043         mul r0,r4
08128704: 0012         asr r0,r0,#0x8
08128706: 1084         strh r0,[r2,#0x20]
08128708: 10bc         pop {r4}
0812870A: 01bc         pop {r0}
0812870C: 0047         bx r0
