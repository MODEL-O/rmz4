; undefined FUN_080b6360(void)
; entry 0x80b6360  size 74 bytes

080B6360: 70b5         push {r4,r5,r6,lr}
080B6362: 041c         add r4,r0,#0x0
080B6364: a66a         ldr r6,[r4,#0x28]
080B6366: b530         add r0,#0xb5
080B6368: 0578         ldrb r5,[r0,#0x0]
080B636A: e07b         ldrb r0,[r4,#0xf]
080B636C: 0028         cmp r0,#0x0
080B636E: 09d1         bne 0x080b6384
080B6370: d220         mov r0,#0xd2
080B6372: 4cf7cdfb     bl 0x08002b10
080B6376: 0d49         ldr r1,[0x080b63ac]
080B6378: 201c         add r0,r4,#0x0
080B637A: 66f7c1fd     bl 0x0801cf00
080B637E: e07b         ldrb r0,[r4,#0xf]
080B6380: 0130         add r0,#0x1
080B6382: e073         strb r0,[r4,#0xf]
080B6384: 201c         add r0,r4,#0x0
080B6386: 66f733fe     bl 0x0801cff0
080B638A: 301c         add r0,r6,#0x0
080B638C: cf30         add r0,#0xcf
080B638E: 0078         ldrb r0,[r0,#0x0]
080B6390: 2841         asr r0,r5
080B6392: 0121         mov r1,#0x1
080B6394: 0840         and r0,r1
080B6396: 0028         cmp r0,#0x0
080B6398: 04d0         beq 0x080b63a4
080B639A: 0021         mov r1,#0x0
080B639C: 0220         mov r0,#0x2
080B639E: 6073         strb r0,[r4,#0xd]
080B63A0: a173         strb r1,[r4,#0xe]
080B63A2: e173         strb r1,[r4,#0xf]
080B63A4: 70bc         pop {r4,r5,r6}
080B63A6: 01bc         pop {r0}
080B63A8: 0047         bx r0
