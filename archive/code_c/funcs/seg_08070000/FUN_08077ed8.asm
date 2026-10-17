; undefined FUN_08077ed8(void)
; entry 0x8077ed8  size 30 bytes

08077ED8: 10b5         push {r4,lr}
08077EDA: 041c         add r4,r0,#0x0
08077EDC: 01f0c8f9     bl 0x08079270
08077EE0: 0549         ldr r1,[0x08077ef8]
08077EE2: 607b         ldrb r0,[r4,#0xd]
08077EE4: 8000         lsl r0,r0,#0x2
08077EE6: 4018         add r0,r0,r1
08077EE8: 0168         ldr r1,[r0,#0x0]
08077EEA: 201c         add r0,r4,#0x0
08077EEC: b1f048f8     bl 0x08128f80
08077EF0: 10bc         pop {r4}
08077EF2: 01bc         pop {r0}
08077EF4: 0047         bx r0
