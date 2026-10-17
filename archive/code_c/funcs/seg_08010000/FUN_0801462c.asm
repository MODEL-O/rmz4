; undefined FUN_0801462c(void)
; entry 0x801462c  size 28 bytes

0801462C: 10b5         push {r4,lr}
0801462E: 041c         add r4,r0,#0x0
08014630: a07b         ldrb r0,[r4,#0xe]
08014632: 0028         cmp r0,#0x0
08014634: 05d1         bne 0x08014642
08014636: 7420         mov r0,#0x74
08014638: eef76afa     bl 0x08002b10
0801463C: a07b         ldrb r0,[r4,#0xe]
0801463E: 0130         add r0,#0x1
08014640: a073         strb r0,[r4,#0xe]
08014642: 10bc         pop {r4}
08014644: 01bc         pop {r0}
08014646: 0047         bx r0
