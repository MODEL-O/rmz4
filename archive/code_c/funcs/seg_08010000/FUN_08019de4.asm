; undefined FUN_08019de4(void)
; entry 0x8019de4  size 28 bytes

08019DE4: 00b5         push {lr}
08019DE6: 011c         add r1,r0,#0x0
08019DE8: 8a7b         ldrb r2,[r1,#0xe]
08019DEA: 002a         cmp r2,#0x0
08019DEC: 06d1         bne 0x08019dfc
08019DEE: ff20         mov r0,#0xff
08019DF0: 8000         lsl r0,r0,#0x2
08019DF2: c864         str r0,[r1,#0x4c]
08019DF4: c020         mov r0,#0xc0
08019DF6: 4864         str r0,[r1,#0x44]
08019DF8: 501c         add r0,r2,#0x1
08019DFA: 8873         strb r0,[r1,#0xe]
08019DFC: 01bc         pop {r0}
08019DFE: 0047         bx r0
