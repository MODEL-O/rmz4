; undefined FUN_08119ba4(void)
; entry 0x8119ba4  size 20 bytes

08119BA4: 00b5         push {lr}
08119BA6: 044a         ldr r2,[0x08119bb8]
08119BA8: 8178         ldrb r1,[r0,#0x2]
08119BAA: 8900         lsl r1,r1,#0x2
08119BAC: 8918         add r1,r1,r2
08119BAE: 0968         ldr r1,[r1,#0x0]
08119BB0: 0ff0e6f9     bl 0x08128f80
08119BB4: 01bc         pop {r0}
08119BB6: 0047         bx r0
