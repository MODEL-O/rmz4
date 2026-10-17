; undefined FUN_08008f58(void)
; entry 0x8008f58  size 20 bytes

08008F58: 00b5         push {lr}
08008F5A: 4010         asr r0,r0,#0x1
08008F5C: 081a         sub r0,r1,r0
08008F5E: 0028         cmp r0,#0x0
08008F60: 01dc         bgt 0x08008f66
08008F62: 0020         mov r0,#0x0
08008F64: 00e0         b 0x08008f68
08008F66: 4042         rsb r0,r0
08008F68: 02bc         pop {r1}
08008F6A: 0847         bx r1
