; undefined FUN_08008fa0(void)
; entry 0x8008fa0  size 24 bytes

08008FA0: 00b5         push {lr}
08008FA2: 044a         ldr r2,[0x08008fb4]
08008FA4: 8918         add r1,r1,r2
08008FA6: 8010         asr r0,r0,#0x2
08008FA8: 081a         sub r0,r1,r0
08008FAA: 0028         cmp r0,#0x0
08008FAC: 04dc         bgt 0x08008fb8
08008FAE: 0020         mov r0,#0x0
08008FB0: 03e0         b 0x08008fba
08008FB8: 4042         rsb r0,r0
08008FBA: 02bc         pop {r1}
08008FBC: 0847         bx r1
