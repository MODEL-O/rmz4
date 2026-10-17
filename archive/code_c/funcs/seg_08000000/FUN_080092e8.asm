; undefined FUN_080092e8(void)
; entry 0x80092e8  size 36 bytes

080092E8: 00b5         push {lr}
080092EA: 021c         add r2,r0,#0x0
080092EC: 0648         ldr r0,[0x08009308]
080092EE: 8242         cmp r2,r0
080092F0: 10dd         ble 0x08009314
080092F2: 0648         ldr r0,[0x0800930c]
080092F4: 8242         cmp r2,r0
080092F6: 04dc         bgt 0x08009302
080092F8: 054b         ldr r3,[0x08009310]
080092FA: d018         add r0,r2,r3
080092FC: 8000         lsl r0,r0,#0x2
080092FE: 8142         cmp r1,r0
08009300: 08da         bge 0x08009314
08009302: c843         mvn r0,r1
08009304: 07e0         b 0x08009316
08009314: 0020         mov r0,#0x0
08009316: 02bc         pop {r1}
08009318: 0847         bx r1
