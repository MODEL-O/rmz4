; undefined FUN_080bf8f4(void)
; entry 0x80bf8f4  size 20 bytes

080BF8F4: 00b5         push {lr}
080BF8F6: 044a         ldr r2,[0x080bf908]
080BF8F8: 417b         ldrb r1,[r0,#0xd]
080BF8FA: 8900         lsl r1,r1,#0x2
080BF8FC: 8918         add r1,r1,r2
080BF8FE: 0968         ldr r1,[r1,#0x0]
080BF900: 69f03efb     bl 0x08128f80
080BF904: 01bc         pop {r0}
080BF906: 0047         bx r0
