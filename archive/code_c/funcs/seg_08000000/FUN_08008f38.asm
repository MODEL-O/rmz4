; undefined FUN_08008f38(void)
; entry 0x8008f38  size 24 bytes

08008F38: 00b5         push {lr}
08008F3A: 044a         ldr r2,[0x08008f4c]
08008F3C: 8918         add r1,r1,r2
08008F3E: 8010         asr r0,r0,#0x2
08008F40: 0818         add r0,r1,r0
08008F42: 0028         cmp r0,#0x0
08008F44: 04dc         bgt 0x08008f50
08008F46: 0020         mov r0,#0x0
08008F48: 03e0         b 0x08008f52
08008F50: 4042         rsb r0,r0
08008F52: 02bc         pop {r1}
08008F54: 0847         bx r1
