; undefined FUN_080090dc(void)
; entry 0x80090dc  size 26 bytes

080090DC: 00b5         push {lr}
080090DE: 0a1c         add r2,r1,#0x0
080090E0: 8010         asr r0,r0,#0x2
080090E2: c021         mov r1,#0xc0
080090E4: 0901         lsl r1,r1,#0x4
080090E6: 091a         sub r1,r1,r0
080090E8: 8a42         cmp r2,r1
080090EA: 01db         blt 0x080090f0
080090EC: 0020         mov r0,#0x0
080090EE: 00e0         b 0x080090f2
080090F0: d043         mvn r0,r2
080090F2: 02bc         pop {r1}
080090F4: 0847         bx r1
