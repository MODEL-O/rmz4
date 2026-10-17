; undefined FUN_080127c8(void)
; entry 0x80127c8  size 72 bytes

080127C8: 70b5         push {r4,r5,r6,lr}
080127CA: 051c         add r5,r0,#0x0
080127CC: 0c1c         add r4,r1,#0x0
080127CE: 2d01         lsl r5,r5,#0x4
080127D0: 2101         lsl r1,r4,#0x4
080127D2: 0914         asr r1,r1,#0x10
080127D4: 0439         sub r1,#0x4
080127D6: 2d14         asr r5,r5,#0x10
080127D8: 0904         lsl r1,r1,#0x10
080127DA: 0914         asr r1,r1,#0x10
080127DC: 0c4e         ldr r6,[0x08012810]
080127DE: 281c         add r0,r5,#0x0
080127E0: 321c         add r2,r6,#0x0
080127E2: f4f715fe     bl 0x08007410
080127E6: c820         mov r0,#0xc8
080127E8: 8002         lsl r0,r0,#0xa
080127EA: 2418         add r4,r4,r0
080127EC: 2401         lsl r4,r4,#0x4
080127EE: 2414         asr r4,r4,#0x10
080127F0: 043c         sub r4,#0x4
080127F2: 2404         lsl r4,r4,#0x10
080127F4: 2414         asr r4,r4,#0x10
080127F6: 281c         add r0,r5,#0x0
080127F8: 211c         add r1,r4,#0x0
080127FA: 321c         add r2,r6,#0x0
080127FC: f4f708fe     bl 0x08007410
08012800: 0448         ldr r0,[0x08012814]
08012802: 0549         ldr r1,[0x08012818]
08012804: 4018         add r0,r0,r1
08012806: 0121         mov r1,#0x1
08012808: 0170         strb r1,[r0,#0x0]
0801280A: 70bc         pop {r4,r5,r6}
0801280C: 01bc         pop {r0}
0801280E: 0047         bx r0
