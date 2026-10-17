; undefined FUN_080af864(void)
; entry 0x80af864  size 64 bytes

080AF864: 00b5         push {lr}
080AF866: 021c         add r2,r0,#0x0
080AF868: 0b48         ldr r0,[0x080af898]
080AF86A: 0368         ldr r3,[r0,#0x0]
080AF86C: 586d         ldr r0,[r3,#0x54]
080AF86E: 516d         ldr r1,[r2,#0x54]
080AF870: 401a         sub r0,r0,r1
080AF872: 0012         asr r0,r0,#0x8
080AF874: 0028         cmp r0,#0x0
080AF876: 00da         bge 0x080af87a
080AF878: 4042         rsb r0,r0
080AF87A: 7828         cmp r0,#0x78
080AF87C: 08dc         bgt 0x080af890
080AF87E: 986d         ldr r0,[r3,#0x58]
080AF880: 916d         ldr r1,[r2,#0x58]
080AF882: 401a         sub r0,r0,r1
080AF884: 0012         asr r0,r0,#0x8
080AF886: 0028         cmp r0,#0x0
080AF888: 00da         bge 0x080af88c
080AF88A: 4042         rsb r0,r0
080AF88C: 5028         cmp r0,#0x50
080AF88E: 05dd         ble 0x080af89c
080AF890: 111c         add r1,r2,#0x0
080AF892: b631         add r1,#0xb6
080AF894: 0020         mov r0,#0x0
080AF896: 04e0         b 0x080af8a2
080AF89C: 111c         add r1,r2,#0x0
080AF89E: b631         add r1,#0xb6
080AF8A0: 0120         mov r0,#0x1
080AF8A2: 0870         strb r0,[r1,#0x0]
080AF8A4: 01bc         pop {r0}
080AF8A6: 0047         bx r0
