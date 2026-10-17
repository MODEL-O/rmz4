; undefined FUN_08002348(void)
; entry 0x8002348  size 22 bytes

08002348: 00b5         push {lr}
0800234A: 0549         ldr r1,[0x08002360]
0800234C: 0022         mov r2,#0x0
0800234E: 081c         add r0,r1,#0x0
08002350: 1e30         add r0,#0x1e
08002352: 0280         strh r2,[r0,#0x0]
08002354: 0238         sub r0,#0x2
08002356: 8842         cmp r0,r1
08002358: fbda         bge 0x08002352
0800235A: 01bc         pop {r0}
0800235C: 0047         bx r0
