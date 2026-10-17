; undefined FUN_080cfc2c(void)
; entry 0x80cfc2c  size 34 bytes

080CFC2C: 00b5         push {lr}
080CFC2E: 011c         add r1,r0,#0x0
080CFC30: c87b         ldrb r0,[r1,#0xf]
080CFC32: 0028         cmp r0,#0x0
080CFC34: 06d1         bne 0x080cfc44
080CFC36: 0a1c         add r2,r1,#0x0
080CFC38: b532         add r2,#0xb5
080CFC3A: 0120         mov r0,#0x1
080CFC3C: 1070         strb r0,[r2,#0x0]
080CFC3E: c87b         ldrb r0,[r1,#0xf]
080CFC40: 0130         add r0,#0x1
080CFC42: c873         strb r0,[r1,#0xf]
080CFC44: 081c         add r0,r1,#0x0
080CFC46: 4df7d3f9     bl 0x0801cff0
080CFC4A: 01bc         pop {r0}
080CFC4C: 0047         bx r0
