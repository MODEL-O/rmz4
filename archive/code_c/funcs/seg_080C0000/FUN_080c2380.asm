; undefined FUN_080c2380(void)
; entry 0x80c2380  size 46 bytes

080C2380: 00b5         push {lr}
080C2382: 021c         add r2,r0,#0x0
080C2384: 0a48         ldr r0,[0x080c23b0]
080C2386: 0068         ldr r0,[r0,#0x0]
080C2388: 9e23         mov r3,#0x9e
080C238A: 9b00         lsl r3,r3,#0x2
080C238C: c118         add r1,r0,r3
080C238E: 0878         ldrb r0,[r1,#0x0]
080C2390: 0028         cmp r0,#0x0
080C2392: 01d0         beq 0x080c2398
080C2394: 0138         sub r0,#0x1
080C2396: 0870         strb r0,[r1,#0x0]
080C2398: 0649         ldr r1,[0x080c23b4]
080C239A: 507a         ldrb r0,[r2,#0x9]
080C239C: 8000         lsl r0,r0,#0x2
080C239E: 4018         add r0,r0,r1
080C23A0: 0421         mov r1,#0x4
080C23A2: d160         str r1,[r2,#0xc]
080C23A4: 0068         ldr r0,[r0,#0x0]
080C23A6: 0069         ldr r0,[r0,#0x10]
080C23A8: 5061         str r0,[r2,#0x14]
080C23AA: 01bc         pop {r0}
080C23AC: 0047         bx r0
