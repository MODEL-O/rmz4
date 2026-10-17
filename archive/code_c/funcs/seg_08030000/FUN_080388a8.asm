; undefined FUN_080388a8(void)
; entry 0x80388a8  size 38 bytes

080388A8: 00b5         push {lr}
080388AA: 9f22         mov r2,#0x9f
080388AC: 5200         lsl r2,r2,#0x1
080388AE: 8118         add r1,r0,r2
080388B0: 0878         ldrb r0,[r1,#0x0]
080388B2: 0028         cmp r0,#0x0
080388B4: 02d1         bne 0x080388bc
080388B6: 9020         mov r0,#0x90
080388B8: c000         lsl r0,r0,#0x3
080388BA: 06e0         b 0x080388ca
080388BC: 0878         ldrb r0,[r1,#0x0]
080388BE: 8021         mov r1,#0x80
080388C0: 4900         lsl r1,r1,#0x1
080388C2: 091a         sub r1,r1,r0
080388C4: c800         lsl r0,r1,#0x3
080388C6: 4018         add r0,r0,r1
080388C8: 4010         asr r0,r0,#0x1
080388CA: 02bc         pop {r1}
080388CC: 0847         bx r1
