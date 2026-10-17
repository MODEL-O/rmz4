; undefined FUN_08008eb8(void)
; entry 0x8008eb8  size 24 bytes

08008EB8: 00b5         push {lr}
08008EBA: 044a         ldr r2,[0x08008ecc]
08008EBC: 8918         add r1,r1,r2
08008EBE: 4010         asr r0,r0,#0x1
08008EC0: 0818         add r0,r1,r0
08008EC2: 0028         cmp r0,#0x0
08008EC4: 04dc         bgt 0x08008ed0
08008EC6: 0020         mov r0,#0x0
08008EC8: 03e0         b 0x08008ed2
08008ED0: 4042         rsb r0,r0
08008ED2: 02bc         pop {r1}
08008ED4: 0847         bx r1
