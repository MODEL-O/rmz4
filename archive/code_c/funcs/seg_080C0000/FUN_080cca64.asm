; undefined FUN_080cca64(void)
; entry 0x80cca64  size 32 bytes

080CCA64: 10b5         push {r4,lr}
080CCA66: 041c         add r4,r0,#0x0
080CCA68: 0649         ldr r1,[0x080cca84]
080CCA6A: 207c         ldrb r0,[r4,#0x10]
080CCA6C: 8000         lsl r0,r0,#0x2
080CCA6E: 4018         add r0,r0,r1
080CCA70: 0168         ldr r1,[r0,#0x0]
080CCA72: 201c         add r0,r4,#0x0
080CCA74: 5cf084fa     bl 0x08128f80
080CCA78: 201c         add r0,r4,#0x0
080CCA7A: 50f7b9fa     bl 0x0801cff0
080CCA7E: 10bc         pop {r4}
080CCA80: 01bc         pop {r0}
080CCA82: 0047         bx r0
