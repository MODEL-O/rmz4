; undefined FUN_08009194(void)
; entry 0x8009194  size 36 bytes

08009194: 00b5         push {lr}
08009196: 021c         add r2,r0,#0x0
08009198: 0248         ldr r0,[0x080091a4]
0800919A: 8242         cmp r2,r0
0800919C: 04dd         ble 0x080091a8
0800919E: c843         mvn r0,r1
080091A0: 0de0         b 0x080091be
080091A8: 0348         ldr r0,[0x080091b8]
080091AA: 0918         add r1,r1,r0
080091AC: 9000         lsl r0,r2,#0x2
080091AE: 0818         add r0,r1,r0
080091B0: 0028         cmp r0,#0x0
080091B2: 03dc         bgt 0x080091bc
080091B4: 0020         mov r0,#0x0
080091B6: 02e0         b 0x080091be
080091BC: 4042         rsb r0,r0
080091BE: 02bc         pop {r1}
080091C0: 0847         bx r1
