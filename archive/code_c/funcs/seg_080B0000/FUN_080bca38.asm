; undefined FUN_080bca38(void)
; entry 0x80bca38  size 58 bytes

080BCA38: 10b5         push {r4,lr}
080BCA3A: 041c         add r4,r0,#0x0
080BCA3C: 606d         ldr r0,[r4,#0x54]
080BCA3E: e16d         ldr r1,[r4,#0x5c]
080BCA40: 4018         add r0,r0,r1
080BCA42: 6065         str r0,[r4,#0x54]
080BCA44: a16d         ldr r1,[r4,#0x58]
080BCA46: 226e         ldr r2,[r4,#0x60]
080BCA48: 8918         add r1,r1,r2
080BCA4A: a165         str r1,[r4,#0x58]
080BCA4C: 4032         add r2,#0x40
080BCA4E: 2266         str r2,[r4,#0x60]
080BCA50: 4bf714f9     bl 0x08007c7c
080BCA54: 0004         lsl r0,r0,#0x10
080BCA56: 0028         cmp r0,#0x0
080BCA58: 08d0         beq 0x080bca6c
080BCA5A: 0649         ldr r1,[0x080bca74]
080BCA5C: 607a         ldrb r0,[r4,#0x9]
080BCA5E: 8000         lsl r0,r0,#0x2
080BCA60: 4018         add r0,r0,r1
080BCA62: 0221         mov r1,#0x2
080BCA64: e160         str r1,[r4,#0xc]
080BCA66: 0068         ldr r0,[r0,#0x0]
080BCA68: 8068         ldr r0,[r0,#0x8]
080BCA6A: 6061         str r0,[r4,#0x14]
080BCA6C: 10bc         pop {r4}
080BCA6E: 01bc         pop {r0}
080BCA70: 0047         bx r0
