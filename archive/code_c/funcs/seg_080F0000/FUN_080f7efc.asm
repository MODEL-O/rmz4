; undefined FUN_080f7efc(void)
; entry 0x80f7efc  size 30 bytes

080F7EFC: 00b5         push {lr}
080F7EFE: 011c         add r1,r0,#0x0
080F7F00: 886d         ldr r0,[r1,#0x58]
080F7F02: 9022         mov r2,#0x90
080F7F04: 5200         lsl r2,r2,#0x1
080F7F06: 8018         add r0,r0,r2
080F7F08: 8865         str r0,[r1,#0x58]
080F7F0A: 8a6e         ldr r2,[r1,#0x68]
080F7F0C: 8242         cmp r2,r0
080F7F0E: 02da         bge 0x080f7f16
080F7F10: 8a65         str r2,[r1,#0x58]
080F7F12: 0020         mov r0,#0x0
080F7F14: 4873         strb r0,[r1,#0xd]
080F7F16: 01bc         pop {r0}
080F7F18: 0047         bx r0
