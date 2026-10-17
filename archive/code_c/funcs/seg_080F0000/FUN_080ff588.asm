; undefined FUN_080ff588(void)
; entry 0x80ff588  size 66 bytes

080FF588: 6cb5         push {r2,r3,r5,r6,lr}
080FF58A: 8608         lsr r6,r0,#0x2
080FF58C: 706d         ldr r0,[r6,#0x54]
080FF58E: b16d         ldr r1,[r6,#0x58]
080FF590: 08f7d0ff     bl 0x08008534
080FF594: 0d4a         ldr r2,[0x080ff5cc]
080FF596: 8018         add r0,r0,r2
080FF598: b065         str r0,[r6,#0x58]
080FF59A: 311c         add r1,r6,#0x0
080FF59C: b831         add r1,#0xb8
080FF59E: 0860         str r0,[r1,#0x0]
080FF5A0: 311c         add r1,r6,#0x0
080FF5A2: bd31         add r1,#0xbd
080FF5A4: 0020         mov r0,#0x0
080FF5A6: 0870         strb r0,[r1,#0x0]
080FF5A8: 0949         ldr r1,[0x080ff5d0]
080FF5AA: 707a         ldrb r0,[r6,#0x9]
080FF5AC: 8000         lsl r0,r0,#0x2
080FF5AE: 4018         add r0,r0,r1
080FF5B0: 0121         mov r1,#0x1
080FF5B2: f160         str r1,[r6,#0xc]
080FF5B4: 0068         ldr r0,[r0,#0x0]
080FF5B6: 4068         ldr r0,[r0,#0x4]
080FF5B8: 7061         str r0,[r6,#0x14]
080FF5BA: 301c         add r0,r6,#0x0
080FF5BC: fff7bafd     bl 0x080ff134
080FF5C0: 08bc         pop {r3}
080FF5C2: 9846         mov r8,r3
080FF5C4: f0bc         pop {r4,r5,r6,r7}
080FF5C6: 01bc         pop {r0}
080FF5C8: 0047         bx r0
