; undefined FUN_080382b0(void)
; entry 0x80382b0  size 46 bytes

080382B0: 70b5         push {r4,r5,r6,lr}
080382B2: 061c         add r6,r0,#0x0
080382B4: 0c1c         add r4,r1,#0x0
080382B6: 311c         add r1,r6,#0x0
080382B8: b431         add r1,#0xb4
080382BA: 4025         mov r5,#0x40
080382BC: 201c         add r0,r4,#0x0
080382BE: 1022         mov r2,#0x10
080382C0: f0f08efc     bl 0x08128be0
080382C4: 4034         add r4,#0x40
080382C6: 311c         add r1,r6,#0x0
080382C8: f431         add r1,#0xf4
080382CA: 054a         ldr r2,[0x080382e0]
080382CC: 201c         add r0,r4,#0x0
080382CE: f0f089fc     bl 0x08128be4
080382D2: 301c         add r0,r6,#0x0
080382D4: a430         add r0,#0xa4
080382D6: 0580         strh r5,[r0,#0x0]
080382D8: 70bc         pop {r4,r5,r6}
080382DA: 01bc         pop {r0}
080382DC: 0047         bx r0
