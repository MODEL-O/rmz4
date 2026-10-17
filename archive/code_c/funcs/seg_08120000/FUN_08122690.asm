; undefined FUN_08122690(void)
; entry 0x8122690  size 72 bytes

08122690: 70b5         push {r4,r5,r6,lr}
08122692: 051c         add r5,r0,#0x0
08122694: 1048         ldr r0,[0x081226d8]
08122696: 2918         add r1,r5,r0
08122698: f020         mov r0,#0xf0
0812269A: c001         lsl r0,r0,#0x7
0812269C: 0860         str r0,[r1,#0x0]
0812269E: a020         mov r0,#0xa0
081226A0: c001         lsl r0,r0,#0x7
081226A2: 4860         str r0,[r1,#0x4]
081226A4: 0d48         ldr r0,[0x081226dc]
081226A6: 2e18         add r6,r5,r0
081226A8: 301c         add r0,r6,#0x0
081226AA: 0022         mov r2,#0x0
081226AC: 0023         mov r3,#0x0
081226AE: e0f6adfa     bl 0x08002c0c
081226B2: 0b48         ldr r0,[0x081226e0]
081226B4: 2c18         add r4,r5,r0
081226B6: 201c         add r0,r4,#0x0
081226B8: e0f664fe     bl 0x08003384
081226BC: 201c         add r0,r4,#0x0
081226BE: 311c         add r1,r6,#0x0
081226C0: e0f67cfe     bl 0x080033bc
081226C4: 0748         ldr r0,[0x081226e4]
081226C6: 2d18         add r5,r5,r0
081226C8: 0749         ldr r1,[0x081226e8]
081226CA: 281c         add r0,r5,#0x0
081226CC: 4022         mov r2,#0x40
081226CE: e7f771fd     bl 0x0810a1b4
081226D2: 70bc         pop {r4,r5,r6}
081226D4: 01bc         pop {r0}
081226D6: 0047         bx r0
