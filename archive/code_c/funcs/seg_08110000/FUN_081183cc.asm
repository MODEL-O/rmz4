; undefined FUN_081183cc(void)
; entry 0x81183cc  size 66 bytes

081183CC: 00b5         push {lr}
081183CE: 021c         add r2,r0,#0x0
081183D0: 537a         ldrb r3,[r2,#0x9]
081183D2: 002b         cmp r3,#0x0
081183D4: 19d1         bne 0x0811840a
081183D6: 917a         ldrb r1,[r2,#0xa]
081183D8: fe20         mov r0,#0xfe
081183DA: 0840         and r0,r1
081183DC: fd21         mov r1,#0xfd
081183DE: 0840         and r0,r1
081183E0: 9072         strb r0,[r2,#0xa]
081183E2: 101c         add r0,r2,#0x0
081183E4: 8c30         add r0,#0x8c
081183E6: 0360         str r3,[r0,#0x0]
081183E8: 0430         add r0,#0x4
081183EA: 0360         str r3,[r0,#0x0]
081183EC: 0430         add r0,#0x4
081183EE: 0370         strb r3,[r0,#0x0]
081183F0: 917a         ldrb r1,[r2,#0xa]
081183F2: fb20         mov r0,#0xfb
081183F4: 0840         and r0,r1
081183F6: 9072         strb r0,[r2,#0xa]
081183F8: 0549         ldr r1,[0x08118410]
081183FA: 507a         ldrb r0,[r2,#0x9]
081183FC: 8000         lsl r0,r0,#0x2
081183FE: 4018         add r0,r0,r1
08118400: 0321         mov r1,#0x3
08118402: d160         str r1,[r2,#0xc]
08118404: 0068         ldr r0,[r0,#0x0]
08118406: c068         ldr r0,[r0,#0xc]
08118408: 5061         str r0,[r2,#0x14]
0811840A: 01bc         pop {r0}
0811840C: 0047         bx r0
