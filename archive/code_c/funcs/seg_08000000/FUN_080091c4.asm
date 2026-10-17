; undefined FUN_080091c4(void)
; entry 0x80091c4  size 46 bytes

080091C4: 00b5         push {lr}
080091C6: 021c         add r2,r0,#0x0
080091C8: 0348         ldr r0,[0x080091d8]
080091CA: 8242         cmp r2,r0
080091CC: 10dd         ble 0x080091f0
080091CE: 0348         ldr r0,[0x080091dc]
080091D0: 8242         cmp r2,r0
080091D2: 05dd         ble 0x080091e0
080091D4: c843         mvn r0,r1
080091D6: 12e0         b 0x080091fe
080091E0: 0448         ldr r0,[0x080091f4]
080091E2: 0918         add r1,r1,r0
080091E4: 044b         ldr r3,[0x080091f8]
080091E6: d018         add r0,r2,r3
080091E8: 8000         lsl r0,r0,#0x2
080091EA: 0818         add r0,r1,r0
080091EC: 0028         cmp r0,#0x0
080091EE: 05dc         bgt 0x080091fc
080091F0: 0020         mov r0,#0x0
080091F2: 04e0         b 0x080091fe
080091FC: 4042         rsb r0,r0
080091FE: 02bc         pop {r1}
08009200: 0847         bx r1
