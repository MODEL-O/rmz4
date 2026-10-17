; undefined FUN_08008ed8(void)
; entry 0x8008ed8  size 24 bytes

08008ED8: 00b5         push {lr}
08008EDA: 044a         ldr r2,[0x08008eec]
08008EDC: 8918         add r1,r1,r2
08008EDE: 8010         asr r0,r0,#0x2
08008EE0: 0818         add r0,r1,r0
08008EE2: 0028         cmp r0,#0x0
08008EE4: 04dc         bgt 0x08008ef0
08008EE6: 0020         mov r0,#0x0
08008EE8: 03e0         b 0x08008ef2
08008EF0: 4042         rsb r0,r0
08008EF2: 02bc         pop {r1}
08008EF4: 0847         bx r1
