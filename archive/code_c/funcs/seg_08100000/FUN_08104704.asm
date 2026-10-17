; undefined FUN_08104704(void)
; entry 0x8104704  size 52 bytes

08104704: 10b5         push {r4,lr}
08104706: 041c         add r4,r0,#0x0
08104708: a06d         ldr r0,[r4,#0x58]
0810470A: 216e         ldr r1,[r4,#0x60]
0810470C: 4018         add r0,r0,r1
0810470E: a065         str r0,[r4,#0x58]
08104710: 201c         add r0,r4,#0x0
08104712: 18f76dfc     bl 0x0801cff0
08104716: 0849         ldr r1,[0x08104738]
08104718: a06d         ldr r0,[r4,#0x58]
0810471A: a022         mov r2,#0xa0
0810471C: d201         lsl r2,r2,#0x7
0810471E: 8018         add r0,r0,r2
08104720: c96b         ldr r1,[r1,#0x3c]
08104722: 091a         sub r1,r1,r0
08104724: 8020         mov r0,#0x80
08104726: 8001         lsl r0,r0,#0x6
08104728: 8142         cmp r1,r0
0810472A: 02dd         ble 0x08104732
0810472C: 201c         add r0,r4,#0x0
0810472E: e4f70dff     bl 0x080e954c
08104732: 10bc         pop {r4}
08104734: 01bc         pop {r0}
08104736: 0047         bx r0
