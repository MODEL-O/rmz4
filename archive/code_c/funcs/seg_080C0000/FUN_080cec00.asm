; undefined FUN_080cec00(void)
; entry 0x80cec00  size 24 bytes

080CEC00: 00b5         push {lr}
080CEC02: 011c         add r1,r0,#0x0
080CEC04: 887c         ldrb r0,[r1,#0x12]
080CEC06: 0028         cmp r0,#0x0
080CEC08: 03d0         beq 0x080cec12
080CEC0A: 0138         sub r0,#0x1
080CEC0C: 8874         strb r0,[r1,#0x12]
080CEC0E: 0020         mov r0,#0x0
080CEC10: 00e0         b 0x080cec14
080CEC12: 0120         mov r0,#0x1
080CEC14: 02bc         pop {r1}
080CEC16: 0847         bx r1
