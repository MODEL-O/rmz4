; undefined FUN_08008fe0(void)
; entry 0x8008fe0  size 24 bytes

08008FE0: 00b5         push {lr}
08008FE2: 044a         ldr r2,[0x08008ff4]
08008FE4: 8918         add r1,r1,r2
08008FE6: 8010         asr r0,r0,#0x2
08008FE8: 081a         sub r0,r1,r0
08008FEA: 0028         cmp r0,#0x0
08008FEC: 04dc         bgt 0x08008ff8
08008FEE: 0020         mov r0,#0x0
08008FF0: 03e0         b 0x08008ffa
08008FF8: 4042         rsb r0,r0
08008FFA: 02bc         pop {r1}
08008FFC: 0847         bx r1
