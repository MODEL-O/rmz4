; undefined FUN_08008e98(void)
; entry 0x8008e98  size 24 bytes

08008E98: 00b5         push {lr}
08008E9A: 044a         ldr r2,[0x08008eac]
08008E9C: 8918         add r1,r1,r2
08008E9E: 4010         asr r0,r0,#0x1
08008EA0: 0818         add r0,r1,r0
08008EA2: 0028         cmp r0,#0x0
08008EA4: 04dc         bgt 0x08008eb0
08008EA6: 0020         mov r0,#0x0
08008EA8: 03e0         b 0x08008eb2
08008EB0: 4042         rsb r0,r0
08008EB2: 02bc         pop {r1}
08008EB4: 0847         bx r1
