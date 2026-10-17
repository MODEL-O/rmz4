; undefined FUN_080069bc(void)
; entry 0x80069bc  size 52 bytes

080069BC: 30b5         push {r4,r5,lr}
080069BE: 0004         lsl r0,r0,#0x10
080069C0: 0b4d         ldr r5,[0x080069f0]
080069C2: c10c         lsr r1,r0,#0x13
080069C4: 4c19         add r4,r1,r5
080069C6: 2278         ldrb r2,[r4,#0x0]
080069C8: e021         mov r1,#0xe0
080069CA: c902         lsl r1,r1,#0xb
080069CC: 0140         and r1,r0
080069CE: 090c         lsr r1,r1,#0x10
080069D0: 101c         add r0,r2,#0x0
080069D2: 0841         asr r0,r1
080069D4: 0123         mov r3,#0x1
080069D6: 1840         and r0,r3
080069D8: 0028         cmp r0,#0x0
080069DA: 06d0         beq 0x080069ea
080069DC: 181c         add r0,r3,#0x0
080069DE: 8840         lsl r0,r1
080069E0: 8243         bic r2,r0
080069E2: 2270         strb r2,[r4,#0x0]
080069E4: 281c         add r0,r5,#0x0
080069E6: 3830         add r0,#0x38
080069E8: 0370         strb r3,[r0,#0x0]
080069EA: 30bc         pop {r4,r5}
080069EC: 01bc         pop {r0}
080069EE: 0047         bx r0
