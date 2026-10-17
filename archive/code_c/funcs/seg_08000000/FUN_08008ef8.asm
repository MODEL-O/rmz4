; undefined FUN_08008ef8(void)
; entry 0x8008ef8  size 24 bytes

08008EF8: 00b5         push {lr}
08008EFA: 044a         ldr r2,[0x08008f0c]
08008EFC: 8918         add r1,r1,r2
08008EFE: 8010         asr r0,r0,#0x2
08008F00: 0818         add r0,r1,r0
08008F02: 0028         cmp r0,#0x0
08008F04: 04dc         bgt 0x08008f10
08008F06: 0020         mov r0,#0x0
08008F08: 03e0         b 0x08008f12
08008F10: 4042         rsb r0,r0
08008F12: 02bc         pop {r1}
08008F14: 0847         bx r1
