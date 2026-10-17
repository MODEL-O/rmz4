; undefined FUN_08012918(void)
; entry 0x8012918  size 26 bytes

08012918: 00b5         push {lr}
0801291A: 031c         add r3,r0,#0x0
0801291C: 9a7b         ldrb r2,[r3,#0xe]
0801291E: 002a         cmp r2,#0x0
08012920: 05d1         bne 0x0801292e
08012922: 0448         ldr r0,[0x08012934]
08012924: f021         mov r1,#0xf0
08012926: c902         lsl r1,r1,#0xb
08012928: 0160         str r1,[r0,#0x0]
0801292A: 501c         add r0,r2,#0x1
0801292C: 9873         strb r0,[r3,#0xe]
0801292E: 01bc         pop {r0}
08012930: 0047         bx r0
