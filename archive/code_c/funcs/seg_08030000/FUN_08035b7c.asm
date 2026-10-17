; undefined FUN_08035b7c(void)
; entry 0x8035b7c  size 26 bytes

08035B7C: 00b5         push {lr}
08035B7E: 064a         ldr r2,[0x08035b98]
08035B80: a223         mov r3,#0xa2
08035B82: 5b00         lsl r3,r3,#0x1
08035B84: c118         add r1,r0,r3
08035B86: 0978         ldrb r1,[r1,#0x0]
08035B88: 8900         lsl r1,r1,#0x2
08035B8A: 8918         add r1,r1,r2
08035B8C: 0968         ldr r1,[r1,#0x0]
08035B8E: f3f0f7f9     bl 0x08128f80
08035B92: 01bc         pop {r0}
08035B94: 0047         bx r0
