; undefined FUN_08037a78(void)
; entry 0x8037a78  size 38 bytes

08037A78: 10b5         push {r4,lr}
08037A7A: 041c         add r4,r0,#0x0
08037A7C: 0849         ldr r1,[0x08037aa0]
08037A7E: e5f73ffa     bl 0x0801cf00
08037A82: 201c         add r0,r4,#0x0
08037A84: 0221         mov r1,#0x2
08037A86: 02f089fc     bl 0x0803a39c
08037A8A: 0648         ldr r0,[0x08037aa4]
08037A8C: 2118         add r1,r4,r0
08037A8E: 0120         mov r0,#0x1
08037A90: 0870         strb r0,[r1,#0x0]
08037A92: 201c         add r0,r4,#0x0
08037A94: 00f008f8     bl 0x08037aa8
08037A98: 10bc         pop {r4}
08037A9A: 01bc         pop {r0}
08037A9C: 0047         bx r0
