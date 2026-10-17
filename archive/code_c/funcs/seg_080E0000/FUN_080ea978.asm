; undefined FUN_080ea978(void)
; entry 0x80ea978  size 54 bytes

080EA978: 10b5         push {r4,lr}
080EA97A: 041c         add r4,r0,#0x0
080EA97C: 607a         ldrb r0,[r4,#0x9]
080EA97E: 0228         cmp r0,#0x2
080EA980: 12d1         bne 0x080ea9a8
080EA982: 211c         add r1,r4,#0x0
080EA984: b831         add r1,#0xb8
080EA986: 0878         ldrb r0,[r1,#0x0]
080EA988: cb28         cmp r0,#0xcb
080EA98A: 0dd0         beq 0x080ea9a8
080EA98C: cb20         mov r0,#0xcb
080EA98E: 0870         strb r0,[r1,#0x0]
080EA990: cb22         mov r2,#0xcb
080EA992: 1202         lsl r2,r2,#0x8
080EA994: 201c         add r0,r4,#0x0
080EA996: 7030         add r0,#0x70
080EA998: 0178         ldrb r1,[r0,#0x0]
080EA99A: 1143         orr r1,r2
080EA99C: 201c         add r0,r4,#0x0
080EA99E: 32f7affa     bl 0x0801cf00
080EA9A2: 201c         add r0,r4,#0x0
080EA9A4: 32f724fb     bl 0x0801cff0
080EA9A8: 10bc         pop {r4}
080EA9AA: 01bc         pop {r0}
080EA9AC: 0047         bx r0
