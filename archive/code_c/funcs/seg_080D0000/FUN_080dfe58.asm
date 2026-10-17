; undefined FUN_080dfe58(void)
; entry 0x80dfe58  size 56 bytes

080DFE58: 10b5         push {r4,lr}
080DFE5A: 031c         add r3,r0,#0x0
080DFE5C: 7433         add r3,#0x74
080DFE5E: 1978         ldrb r1,[r3,#0x0]
080DFE60: 0b4a         ldr r2,[0x080dfe90]
080DFE62: 8906         lsl r1,r1,#0x1a
080DFE64: c90d         lsr r1,r1,#0x17
080DFE66: 8918         add r1,r1,r2
080DFE68: 0024         mov r4,#0x0
080DFE6A: 0a5f         ldrsh r2,[r1,r4]
080DFE6C: 5200         lsl r2,r2,#0x1
080DFE6E: 816f         ldr r1,[r0,#0x78]
080DFE70: 8918         add r1,r1,r2
080DFE72: 4165         str r1,[r0,#0x54]
080DFE74: 1978         ldrb r1,[r3,#0x0]
080DFE76: 4a1c         add r2,r1,#0x1
080DFE78: 101c         add r0,r2,#0x0
080DFE7A: 002a         cmp r2,#0x0
080DFE7C: 01da         bge 0x080dfe82
080DFE7E: 081c         add r0,r1,#0x0
080DFE80: 4030         add r0,#0x40
080DFE82: 8011         asr r0,r0,#0x6
080DFE84: 8001         lsl r0,r0,#0x6
080DFE86: 101a         sub r0,r2,r0
080DFE88: 1870         strb r0,[r3,#0x0]
080DFE8A: 10bc         pop {r4}
080DFE8C: 01bc         pop {r0}
080DFE8E: 0047         bx r0
