; undefined FUN_08104694(void)
; entry 0x8104694  size 52 bytes

08104694: 10b5         push {r4,lr}
08104696: 041c         add r4,r0,#0x0
08104698: a06d         ldr r0,[r4,#0x58]
0810469A: 216e         ldr r1,[r4,#0x60]
0810469C: 4018         add r0,r0,r1
0810469E: a065         str r0,[r4,#0x58]
081046A0: 201c         add r0,r4,#0x0
081046A2: 18f7a5fc     bl 0x0801cff0
081046A6: 0849         ldr r1,[0x081046c8]
081046A8: a06d         ldr r0,[r4,#0x58]
081046AA: a022         mov r2,#0xa0
081046AC: d201         lsl r2,r2,#0x7
081046AE: 8018         add r0,r0,r2
081046B0: c96b         ldr r1,[r1,#0x3c]
081046B2: 091a         sub r1,r1,r0
081046B4: 8020         mov r0,#0x80
081046B6: 8001         lsl r0,r0,#0x6
081046B8: 8142         cmp r1,r0
081046BA: 02dd         ble 0x081046c2
081046BC: 201c         add r0,r4,#0x0
081046BE: e4f745ff     bl 0x080e954c
081046C2: 10bc         pop {r4}
081046C4: 01bc         pop {r0}
081046C6: 0047         bx r0
