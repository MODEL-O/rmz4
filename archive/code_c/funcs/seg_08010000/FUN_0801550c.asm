; undefined FUN_0801550c(void)
; entry 0x801550c  size 34 bytes

0801550C: 00b5         push {lr}
0801550E: 011c         add r1,r0,#0x0
08015510: 8b7b         ldrb r3,[r1,#0xe]
08015512: 1a1c         add r2,r3,#0x0
08015514: 002a         cmp r2,#0x0
08015516: 08d1         bne 0x0801552a
08015518: f020         mov r0,#0xf0
0801551A: c864         str r0,[r1,#0x4c]
0801551C: 0a65         str r2,[r1,#0x50]
0801551E: 8020         mov r0,#0x80
08015520: 4864         str r0,[r1,#0x44]
08015522: 8030         add r0,#0x80
08015524: 8864         str r0,[r1,#0x48]
08015526: 581c         add r0,r3,#0x1
08015528: 8873         strb r0,[r1,#0xe]
0801552A: 01bc         pop {r0}
0801552C: 0047         bx r0
