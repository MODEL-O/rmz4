; undefined FUN_08008fc0(void)
; entry 0x8008fc0  size 24 bytes

08008FC0: 00b5         push {lr}
08008FC2: 044a         ldr r2,[0x08008fd4]
08008FC4: 8918         add r1,r1,r2
08008FC6: 8010         asr r0,r0,#0x2
08008FC8: 081a         sub r0,r1,r0
08008FCA: 0028         cmp r0,#0x0
08008FCC: 04dc         bgt 0x08008fd8
08008FCE: 0020         mov r0,#0x0
08008FD0: 03e0         b 0x08008fda
08008FD8: 4042         rsb r0,r0
08008FDA: 02bc         pop {r1}
08008FDC: 0847         bx r1
