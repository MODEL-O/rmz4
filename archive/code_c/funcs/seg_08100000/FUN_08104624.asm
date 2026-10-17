; undefined FUN_08104624(void)
; entry 0x8104624  size 52 bytes

08104624: 10b5         push {r4,lr}
08104626: 041c         add r4,r0,#0x0
08104628: a06d         ldr r0,[r4,#0x58]
0810462A: 216e         ldr r1,[r4,#0x60]
0810462C: 4018         add r0,r0,r1
0810462E: a065         str r0,[r4,#0x58]
08104630: 201c         add r0,r4,#0x0
08104632: 18f7ddfc     bl 0x0801cff0
08104636: 0849         ldr r1,[0x08104658]
08104638: a06d         ldr r0,[r4,#0x58]
0810463A: a022         mov r2,#0xa0
0810463C: d201         lsl r2,r2,#0x7
0810463E: 8018         add r0,r0,r2
08104640: c96b         ldr r1,[r1,#0x3c]
08104642: 091a         sub r1,r1,r0
08104644: 8020         mov r0,#0x80
08104646: 8001         lsl r0,r0,#0x6
08104648: 8142         cmp r1,r0
0810464A: 02dd         ble 0x08104652
0810464C: 201c         add r0,r4,#0x0
0810464E: e4f77dff     bl 0x080e954c
08104652: 10bc         pop {r4}
08104654: 01bc         pop {r0}
08104656: 0047         bx r0
