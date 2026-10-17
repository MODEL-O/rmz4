; undefined FUN_080e94c0(void)
; entry 0x80e94c0  size 24 bytes

080E94C0: 00b5         push {lr}
080E94C2: 011c         add r1,r0,#0x0
080E94C4: 8a6d         ldr r2,[r1,#0x58]
080E94C6: 886f         ldr r0,[r1,#0x78]
080E94C8: 101a         sub r0,r2,r0
080E94CA: 0028         cmp r0,#0x0
080E94CC: 02dd         ble 0x080e94d4
080E94CE: 024b         ldr r3,[0x080e94d8]
080E94D0: d018         add r0,r2,r3
080E94D2: 8865         str r0,[r1,#0x58]
080E94D4: 01bc         pop {r0}
080E94D6: 0047         bx r0
