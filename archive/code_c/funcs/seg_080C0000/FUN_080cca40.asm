; undefined FUN_080cca40(void)
; entry 0x80cca40  size 32 bytes

080CCA40: 10b5         push {r4,lr}
080CCA42: 041c         add r4,r0,#0x0
080CCA44: 0649         ldr r1,[0x080cca60]
080CCA46: 207c         ldrb r0,[r4,#0x10]
080CCA48: 8000         lsl r0,r0,#0x2
080CCA4A: 4018         add r0,r0,r1
080CCA4C: 0168         ldr r1,[r0,#0x0]
080CCA4E: 201c         add r0,r4,#0x0
080CCA50: 5cf096fa     bl 0x08128f80
080CCA54: 201c         add r0,r4,#0x0
080CCA56: 00f005f8     bl 0x080cca64
080CCA5A: 10bc         pop {r4}
080CCA5C: 01bc         pop {r0}
080CCA5E: 0047         bx r0
