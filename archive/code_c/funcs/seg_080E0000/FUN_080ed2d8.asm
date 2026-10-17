; undefined FUN_080ed2d8(void)
; entry 0x80ed2d8  size 36 bytes

080ED2D8: 30b5         push {r4,r5,lr}
080ED2DA: 051c         add r5,r0,#0x0
080ED2DC: 2c1c         add r4,r5,#0x0
080ED2DE: c034         add r4,#0xc0
080ED2E0: 2088         ldrh r0,[r4,#0x0]
080ED2E2: 0028         cmp r0,#0x0
080ED2E4: 04d0         beq 0x080ed2f0
080ED2E6: 7720         mov r0,#0x77
080ED2E8: 15f738fc     bl 0x08002b5c
080ED2EC: 0020         mov r0,#0x0
080ED2EE: 2080         strh r0,[r4,#0x0]
080ED2F0: 281c         add r0,r5,#0x0
080ED2F2: fcf72bf9     bl 0x080e954c
080ED2F6: 30bc         pop {r4,r5}
080ED2F8: 01bc         pop {r0}
080ED2FA: 0047         bx r0
