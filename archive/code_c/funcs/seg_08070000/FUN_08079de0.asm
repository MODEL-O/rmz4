; undefined FUN_08079de0(void)
; entry 0x8079de0  size 28 bytes

08079DE0: 00b5         push {lr}
08079DE2: 021c         add r2,r0,#0x0
08079DE4: 9069         ldr r0,[r2,#0x18]
08079DE6: 417a         ldrb r1,[r0,#0x9]
08079DE8: 0123         mov r3,#0x1
08079DEA: 181c         add r0,r3,#0x0
08079DEC: 0840         and r0,r1
08079DEE: 0028         cmp r0,#0x0
08079DF0: 02d0         beq 0x08079df8
08079DF2: 0020         mov r0,#0x0
08079DF4: 5373         strb r3,[r2,#0xd]
08079DF6: 9073         strb r0,[r2,#0xe]
08079DF8: 01bc         pop {r0}
08079DFA: 0047         bx r0
