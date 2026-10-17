; undefined FUN_08053850(void)
; entry 0x8053850  size 56 bytes

08053850: 10b5         push {r4,lr}
08053852: 041c         add r4,r0,#0x0
08053854: e07b         ldrb r0,[r4,#0xf]
08053856: 0028         cmp r0,#0x0
08053858: 07d1         bne 0x0805386a
0805385A: b621         mov r1,#0xb6
0805385C: 0902         lsl r1,r1,#0x8
0805385E: 201c         add r0,r4,#0x0
08053860: c9f74efb     bl 0x0801cf00
08053864: e07b         ldrb r0,[r4,#0xf]
08053866: 0130         add r0,#0x1
08053868: e073         strb r0,[r4,#0xf]
0805386A: 201c         add r0,r4,#0x0
0805386C: c9f7c0fb     bl 0x0801cff0
08053870: 0548         ldr r0,[0x08053888]
08053872: 817c         ldrb r1,[r0,#0x12]
08053874: 0120         mov r0,#0x1
08053876: 0840         and r0,r1
08053878: 0028         cmp r0,#0x0
0805387A: 02d1         bne 0x08053882
0805387C: 201c         add r0,r4,#0x0
0805387E: 00f0b3f8     bl 0x080539e8
08053882: 10bc         pop {r4}
08053884: 01bc         pop {r0}
08053886: 0047         bx r0
