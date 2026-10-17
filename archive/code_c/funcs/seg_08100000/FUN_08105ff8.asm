; undefined FUN_08105ff8(void)
; entry 0x8105ff8  size 28 bytes

08105FF8: 10b5         push {r4,lr}
08105FFA: 041c         add r4,r0,#0x0
08105FFC: 607b         ldrb r0,[r4,#0xd]
08105FFE: 1028         cmp r0,#0x10
08106000: 00d9         bls 0x08106004
08106002: 78e1         b 0x081062f6
08106004: 8000         lsl r0,r0,#0x2
08106006: 0249         ldr r1,[0x08106010]
08106008: 4018         add r0,r0,r1
0810600A: 0068         ldr r0,[r0,#0x0]
0810600C: 8746         mov pc,r0
081062F6: 10bc         pop {r4}
081062F8: 01bc         pop {r0}
081062FA: 0047         bx r0
