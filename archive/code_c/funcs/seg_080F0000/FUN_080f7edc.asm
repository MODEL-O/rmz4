; undefined FUN_080f7edc(void)
; entry 0x80f7edc  size 28 bytes

080F7EDC: 00b5         push {lr}
080F7EDE: 011c         add r1,r0,#0x0
080F7EE0: 886d         ldr r0,[r1,#0x58]
080F7EE2: 054a         ldr r2,[0x080f7ef8]
080F7EE4: 8018         add r0,r0,r2
080F7EE6: 8865         str r0,[r1,#0x58]
080F7EE8: 4a6e         ldr r2,[r1,#0x64]
080F7EEA: 8242         cmp r2,r0
080F7EEC: 02dd         ble 0x080f7ef4
080F7EEE: 8a65         str r2,[r1,#0x58]
080F7EF0: 0120         mov r0,#0x1
080F7EF2: 4873         strb r0,[r1,#0xd]
080F7EF4: 01bc         pop {r0}
080F7EF6: 0047         bx r0
