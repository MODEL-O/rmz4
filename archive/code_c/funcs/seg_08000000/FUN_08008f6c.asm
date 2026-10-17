; undefined FUN_08008f6c(void)
; entry 0x8008f6c  size 24 bytes

08008F6C: 00b5         push {lr}
08008F6E: 044a         ldr r2,[0x08008f80]
08008F70: 8918         add r1,r1,r2
08008F72: 4010         asr r0,r0,#0x1
08008F74: 081a         sub r0,r1,r0
08008F76: 0028         cmp r0,#0x0
08008F78: 04dc         bgt 0x08008f84
08008F7A: 0020         mov r0,#0x0
08008F7C: 03e0         b 0x08008f86
08008F84: 4042         rsb r0,r0
08008F86: 02bc         pop {r1}
08008F88: 0847         bx r1
