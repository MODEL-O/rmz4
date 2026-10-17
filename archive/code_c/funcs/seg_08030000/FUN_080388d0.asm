; undefined FUN_080388d0(void)
; entry 0x80388d0  size 42 bytes

080388D0: 00b5         push {lr}
080388D2: 9f22         mov r2,#0x9f
080388D4: 5200         lsl r2,r2,#0x1
080388D6: 8118         add r1,r0,r2
080388D8: 0878         ldrb r0,[r1,#0x0]
080388DA: 0028         cmp r0,#0x0
080388DC: 02d1         bne 0x080388e4
080388DE: a820         mov r0,#0xa8
080388E0: c000         lsl r0,r0,#0x3
080388E2: 08e0         b 0x080388f6
080388E4: 0878         ldrb r0,[r1,#0x0]
080388E6: 8021         mov r1,#0x80
080388E8: 4900         lsl r1,r1,#0x1
080388EA: 091a         sub r1,r1,r0
080388EC: 8800         lsl r0,r1,#0x2
080388EE: 4018         add r0,r0,r1
080388F0: 8000         lsl r0,r0,#0x2
080388F2: 4018         add r0,r0,r1
080388F4: 8010         asr r0,r0,#0x2
080388F6: 02bc         pop {r1}
080388F8: 0847         bx r1
