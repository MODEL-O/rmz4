; undefined FUN_080c2350(void)
; entry 0x80c2350  size 44 bytes

080C2350: 00b5         push {lr}
080C2352: 021c         add r2,r0,#0x0
080C2354: 907c         ldrb r0,[r2,#0x12]
080C2356: 0028         cmp r0,#0x0
080C2358: 0ed0         beq 0x080c2378
080C235A: 0649         ldr r1,[0x080c2374]
080C235C: 507a         ldrb r0,[r2,#0x9]
080C235E: 8000         lsl r0,r0,#0x2
080C2360: 4018         add r0,r0,r1
080C2362: 0221         mov r1,#0x2
080C2364: d160         str r1,[r2,#0xc]
080C2366: 0068         ldr r0,[r0,#0x0]
080C2368: 8068         ldr r0,[r0,#0x8]
080C236A: 5061         str r0,[r2,#0x14]
080C236C: 101c         add r0,r2,#0x0
080C236E: fff733fc     bl 0x080c1bd8
080C2372: 03e0         b 0x080c237c
080C2378: 0130         add r0,#0x1
080C237A: 9074         strb r0,[r2,#0x12]
080C237C: 01bc         pop {r0}
080C237E: 0047         bx r0
