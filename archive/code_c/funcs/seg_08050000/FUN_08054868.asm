; undefined FUN_08054868(void)
; entry 0x8054868  size 60 bytes

08054868: 10b5         push {r4,lr}
0805486A: 041c         add r4,r0,#0x0
0805486C: e07b         ldrb r0,[r4,#0xf]
0805486E: 0028         cmp r0,#0x0
08054870: 06d1         bne 0x08054880
08054872: 0c49         ldr r1,[0x080548a4]
08054874: 201c         add r0,r4,#0x0
08054876: c8f743fb     bl 0x0801cf00
0805487A: e07b         ldrb r0,[r4,#0xf]
0805487C: 0130         add r0,#0x1
0805487E: e073         strb r0,[r4,#0xf]
08054880: 201c         add r0,r4,#0x0
08054882: c8f7b5fb     bl 0x0801cff0
08054886: 201c         add r0,r4,#0x0
08054888: 00f092fb     bl 0x08054fb0
0805488C: 201c         add r0,r4,#0x0
0805488E: 7330         add r0,#0x73
08054890: 0078         ldrb r0,[r0,#0x0]
08054892: 0328         cmp r0,#0x3
08054894: 03d1         bne 0x0805489e
08054896: 0021         mov r1,#0x0
08054898: 0520         mov r0,#0x5
0805489A: a073         strb r0,[r4,#0xe]
0805489C: e173         strb r1,[r4,#0xf]
0805489E: 10bc         pop {r4}
080548A0: 01bc         pop {r0}
080548A2: 0047         bx r0
