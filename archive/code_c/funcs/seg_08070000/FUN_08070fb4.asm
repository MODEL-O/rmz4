; undefined FUN_08070fb4(void)
; entry 0x8070fb4  size 20 bytes

08070FB4: 00b5         push {lr}
08070FB6: 044a         ldr r2,[0x08070fc8]
08070FB8: 817b         ldrb r1,[r0,#0xe]
08070FBA: 8900         lsl r1,r1,#0x2
08070FBC: 8918         add r1,r1,r2
08070FBE: 0968         ldr r1,[r1,#0x0]
08070FC0: b7f0deff     bl 0x08128f80
08070FC4: 01bc         pop {r0}
08070FC6: 0047         bx r0
