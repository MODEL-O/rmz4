; undefined FUN_08008f18(void)
; entry 0x8008f18  size 24 bytes

08008F18: 00b5         push {lr}
08008F1A: 044a         ldr r2,[0x08008f2c]
08008F1C: 8918         add r1,r1,r2
08008F1E: 8010         asr r0,r0,#0x2
08008F20: 0818         add r0,r1,r0
08008F22: 0028         cmp r0,#0x0
08008F24: 04dc         bgt 0x08008f30
08008F26: 0020         mov r0,#0x0
08008F28: 03e0         b 0x08008f32
08008F30: 4042         rsb r0,r0
08008F32: 02bc         pop {r1}
08008F34: 0847         bx r1
