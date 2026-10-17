; undefined FUN_08008f8c(void)
; entry 0x8008f8c  size 20 bytes

08008F8C: 00b5         push {lr}
08008F8E: 8010         asr r0,r0,#0x2
08008F90: 081a         sub r0,r1,r0
08008F92: 0028         cmp r0,#0x0
08008F94: 01dc         bgt 0x08008f9a
08008F96: 0020         mov r0,#0x0
08008F98: 00e0         b 0x08008f9c
08008F9A: 4042         rsb r0,r0
08008F9C: 02bc         pop {r1}
08008F9E: 0847         bx r1
