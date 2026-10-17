; undefined FUN_080b0770(void)
; entry 0x80b0770  size 38 bytes

080B0770: 00b5         push {lr}
080B0772: 021c         add r2,r0,#0x0
080B0774: 0848         ldr r0,[0x080b0798]
080B0776: 0068         ldr r0,[r0,#0x0]
080B0778: 406d         ldr r0,[r0,#0x54]
080B077A: 516d         ldr r1,[r2,#0x54]
080B077C: 401a         sub r0,r0,r1
080B077E: 0012         asr r0,r0,#0x8
080B0780: 0028         cmp r0,#0x0
080B0782: 00da         bge 0x080b0786
080B0784: 4042         rsb r0,r0
080B0786: 4f28         cmp r0,#0x4f
080B0788: 03dc         bgt 0x080b0792
080B078A: 0021         mov r1,#0x0
080B078C: 0120         mov r0,#0x1
080B078E: 5073         strb r0,[r2,#0xd]
080B0790: 9173         strb r1,[r2,#0xe]
080B0792: 01bc         pop {r0}
080B0794: 0047         bx r0
