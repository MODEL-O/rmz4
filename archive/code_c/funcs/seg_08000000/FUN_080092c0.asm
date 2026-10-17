; undefined FUN_080092c0(void)
; entry 0x80092c0  size 30 bytes

080092C0: 00b5         push {lr}
080092C2: 021c         add r2,r0,#0x0
080092C4: 0448         ldr r0,[0x080092d8]
080092C6: 8242         cmp r2,r0
080092C8: 0add         ble 0x080092e0
080092CA: 044b         ldr r3,[0x080092dc]
080092CC: d018         add r0,r2,r3
080092CE: 8000         lsl r0,r0,#0x2
080092D0: 8142         cmp r1,r0
080092D2: 05da         bge 0x080092e0
080092D4: c843         mvn r0,r1
080092D6: 04e0         b 0x080092e2
080092E0: 0020         mov r0,#0x0
080092E2: 02bc         pop {r1}
080092E4: 0847         bx r1
