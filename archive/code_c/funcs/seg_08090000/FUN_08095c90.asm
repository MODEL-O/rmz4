; undefined FUN_08095c90(void)
; entry 0x8095c90  size 20 bytes

08095C90: 00b5         push {lr}
08095C92: 044a         ldr r2,[0x08095ca4]
08095C94: 017c         ldrb r1,[r0,#0x10]
08095C96: 8900         lsl r1,r1,#0x2
08095C98: 8918         add r1,r1,r2
08095C9A: 0968         ldr r1,[r1,#0x0]
08095C9C: 93f070f9     bl 0x08128f80
08095CA0: 01bc         pop {r0}
08095CA2: 0047         bx r0
