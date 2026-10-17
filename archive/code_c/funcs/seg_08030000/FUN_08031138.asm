; undefined FUN_08031138(void)
; entry 0x8031138  size 20 bytes

08031138: 00b5         push {lr}
0803113A: 044a         ldr r2,[0x0803114c]
0803113C: c17b         ldrb r1,[r0,#0xf]
0803113E: 8900         lsl r1,r1,#0x2
08031140: 8918         add r1,r1,r2
08031142: 0968         ldr r1,[r1,#0x0]
08031144: f7f01cff     bl 0x08128f80
08031148: 01bc         pop {r0}
0803114A: 0047         bx r0
